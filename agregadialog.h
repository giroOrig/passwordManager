#ifndef AGREGADIALOG_H
#define AGREGADIALOG_H

#include <QDialog>
#include "entidadusuario.h"

namespace Ui {
class AgregaDialog;
}

/**
 * @brief The AgregaDialog class
 */
class AgregaDialog : public QDialog {
    Q_OBJECT
public:
    /**
     * @brief AgregaDialog
     * @param parent
     */
    explicit AgregaDialog(QWidget *parent = 0);

    /**
      * @brief Destructor
      */
    ~AgregaDialog();

    /**
     * @brief getUsuario
     * @return usuario
     */
    EntidadUsuario getUsuario() const {
        return usuario;
    }
private slots:
    void on_aceptar_clicked();
    void on_cancelar_clicked();
private:
    Ui::AgregaDialog *ui;
    EntidadUsuario usuario;
};

#endif // AGREGADIALOG_H
