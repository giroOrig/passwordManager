#ifndef ENTIDADUSUARIO_H
#define ENTIDADUSUARIO_H

#include <QString>

/**
 * @brief The EntidadUsuario struct
 */
struct EntidadUsuario {
    /**
     * @brief usuario
     */
    QString nombreC;

    /**
     * @brief password
     */
    QString password;

    /**
     * @brief sitio
     */
    QString sitio;

    /**
     * @brief validate: Validates the book's data
     * @return true/false
     */
    bool validate() const {
        return !nombreC.isEmpty() &&
               !password.isEmpty()  &&
               !sitio.isEmpty();
    }
};

#endif // ENTIDADUSUARIO_H
