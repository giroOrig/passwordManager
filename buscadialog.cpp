#include "buscadialog.h"
#include "ui_buscadialog.h"
#include <QSqlQueryModel>

// Searching options
#define OPC_NOMBRE    0
#define OPC_PASSWORD     1
#define OPC_SITIO 2

BuscaDialog::BuscaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BuscaDialog)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    model->setQuery("SELECT * FROM usuario");
    ui->resultado->setModel(model);
}

BuscaDialog::~BuscaDialog() {
    delete ui;
}

void BuscaDialog::on_ok_clicked() {
    accept();
}

void BuscaDialog::on_buscador_textEdited(const QString &txt) {
    if (txt.isEmpty()) {
        model->setQuery("SELECT * FROM usuario");
        return;
    }
    // Filter
    const int opc = ui->comboBox->currentIndex();
    QString busqueda = "SELECT * FROM usuario WHERE ";
    switch (opc) {
    case OPC_NOMBRE:
        busqueda += QString("nombre1 LIKE '%") + txt + "%'";
        break;
    case OPC_PASSWORD:
        busqueda += QString("password LIKE '%") + txt + "%'";
        break;
    case OPC_SITIO:
        busqueda += QString("sitio LIKE '%") + txt + "%'";
        break;
    }
    model->setQuery(busqueda);
}
