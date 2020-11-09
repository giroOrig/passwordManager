#include "eliminadialog.h"
#include "ui_eliminadialog.h"
#include <QCheckBox>
#include <QSqlQuery>

// Columns:
#define COL_ELIMINA   0
#define COL_NOMBRE   1
#define COL_PASSWORD     2
#define COL_SITIO 3

EliminaDialog::EliminaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EliminaDialog)
{
    ui->setupUi(this);
    // Loads books
    QSqlQuery qry;
    qry.exec("SELECT nombreC, password, sitio FROM usuario");
    int i = 0;
    while (qry.next()) {
        EntidadUsuario L = {
            qry.value(0).toString(),
            qry.value(1).toString(),
            qry.value(2).toString()
        };
        const int ultima_fila = ui->Usuario->rowCount();
        ui->Usuario->insertRow(ultima_fila);
        QCheckBox *check = new QCheckBox(this);
        checks.append(check);
        ui->Usuario->setCellWidget(i, COL_ELIMINA, check);
        ui->Usuario->setItem(i, COL_NOMBRE, new QTableWidgetItem(L.nombreC));
        ui->Usuario->setItem(i, COL_PASSWORD, new QTableWidgetItem(L.password));
        ui->Usuario->setItem(i, COL_SITIO,new QTableWidgetItem(L.sitio));
        ++i;
    }
}

EliminaDialog::~EliminaDialog() {
    delete ui;
}

void EliminaDialog::on_selecciona_clicked() {
    // Selects all
    for (int i = 0; i < checks.size(); ++i) {
        checks.at(i)->setChecked(true);
    }
}

void EliminaDialog::on_deselecciona_clicked() {
    // Deselects all
    for (int i = 0; i < checks.size(); ++i) {
        checks.at(i)->setChecked(false);
    }
}

void EliminaDialog::on_ok_clicked() {
    for (int i = 0; i < checks.size(); ++i) {
        if (checks.at(i)->isChecked()) {
            EntidadUsuario L = {
                ui->Usuario->item(i, COL_NOMBRE)->text(),
                ui->Usuario->item(i, COL_PASSWORD)->text(),
                ui->Usuario->item(i, COL_SITIO)->text()
            };
            usuarios.append(L);
        }
    }
    accept();
}

void EliminaDialog::on_cancelar_clicked() {
    reject();
}


