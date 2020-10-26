#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregadialog.h"
#include "buscadialog.h"
#include "eliminadialog.h"
#include "editadialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    db(DBNAME)
{
    ui->setupUi(this);
    setCentralWidget(ui->listWidget);
    if (!db.abre()) {
        QMessageBox::warning(this, "Aviso",
            "No se ha cargado la base de datos");
        return;
    }
    db.configura();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index) {
    const int row = index.row();
    switch (row) {
    case AGREGA:
        Agrega();
        break;
    case BUSCA:
        Busca();
        break;
    case ELIMINA:
        Elimina();
        break;
    case EDITA:
        Edita();
        break;
    }
}

void MainWindow::on_actionQuitar_triggered() {
    close();
}

// Options of the menu:
void MainWindow::Agrega() {
    AgregaDialog agrega(this);
    if (agrega.exec() == QDialog::Rejected) {
        return;
    }
    // Adds book to the database
    const EntidadUsuario L = agrega.getUsuario();
    if (!L.validate()) {
        return;
    }
    db.addUser(L);
}

void MainWindow::Busca() {
    BuscaDialog busca(this);
    busca.exec();
}

void MainWindow::Elimina() {
    EliminaDialog elimina(this);
    if (elimina.exec() == QDialog::Rejected) {
        return;
    }
    // Deletes the books
    const QList<EntidadUsuario> usuarios = elimina.getUsers();
    for (int i = 0; i < usuarios.size(); ++i) {
        db.deleteUser(usuarios.at(i));
    }
}

void MainWindow::Edita() {
    EditaDialog edita(this);
    edita.exec();
}
// End
