#include "agregadialog.h"
#include "ui_agregadialog.h"

AgregaDialog::AgregaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregaDialog)
{
    ui->setupUi(this);
}

AgregaDialog::~AgregaDialog() {
    delete ui;
}

void AgregaDialog::on_aceptar_clicked() {
    // Book's data
    usuario.nombreC = ui->titulo->text();
    usuario.password = ui->autor->text();
    usuario.sitio = ui->editorial->text();
    accept();
}

void AgregaDialog::on_cancelar_clicked() {
    reject();
}
