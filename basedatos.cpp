#include "basedatos.h"
#include <QSqlQuery>

// Statements:
#define CREATE_USER_TABLE "CREATE TABLE IF NOT EXISTS usuario" \
    " (id INTEGER PRIMARY KEY AUTOINCREMENT, nombreC VARCHAR(255)," \
    " password VARCHAR(255), sitio VARCHAR(255))"

#define ADD_USER(L) QString("INSERT INTO usuario (nombreC, password, " \
    "sitio) VALUES ('%1', '%2', '%3')").arg(L.nombreC). \
    arg(L.password).arg(L.sitio)

#define DELETE_USER(L) QString("DELETE FROM usuario WHERE nombreC LIKE '%1' " \
    "AND password LIKE '%2' AND sitio LIKE '%3'").arg(L.nombreC). \
    arg(L.password).arg(L.sitio)
// End

BaseDatos::BaseDatos(const QString &nombre) {
    db = QSqlDatabase::addDatabase("QSQLITE");
    name = nombre;
}

bool BaseDatos::abre() {
    db.setDatabaseName(name);
    return db.open();
}

void BaseDatos::configura() {
    QSqlQuery qry;
    qry.exec(CREATE_USER_TABLE);
}

void BaseDatos::addUser(const EntidadUsuario &L) {
    QSqlQuery qry;
    qry.exec(ADD_USER(L));
}

void BaseDatos::deleteUser(const EntidadUsuario &L) {
    QSqlQuery qry;
    qry.exec(DELETE_USER(L));
}
