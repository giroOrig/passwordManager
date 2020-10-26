#ifndef BASEDATOS_H
#define BASEDATOS_H

#include <QSqlDatabase>
#include "entidadusuario.h"

/**
 * @brief The BaseDatos class
 */
class BaseDatos {
public:
    /**
     * @brief BaseDatos
     * @param nombre
     */
    BaseDatos(const QString &nombre);

    /**
     * @brief abre
     * @return true/false
     */
    bool abre();

    /**
     * @brief configura
     */
    void configura();

    /**
     * @brief addUser
     * @param L
     */
    void addUser(const EntidadUsuario &L);

    /**
     * @brief deleteUser
     * @param L
     */
    void deleteUser(const EntidadUsuario &L);
private:
    QSqlDatabase db;
    QString name;
};

#endif // BASEDATOS_H
