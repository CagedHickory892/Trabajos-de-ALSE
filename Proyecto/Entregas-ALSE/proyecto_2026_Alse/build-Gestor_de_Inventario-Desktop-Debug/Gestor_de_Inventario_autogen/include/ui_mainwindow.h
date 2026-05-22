/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *exportar;
    QLabel *buscar;
    QLineEdit *buscar_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *nombre;
    QLineEdit *nombre_2;
    QLabel *tipo;
    QLineEdit *tipo_2;
    QLabel *ubicacion;
    QLineEdit *ubicacion_2;
    QLabel *cantidad_2;
    QDoubleSpinBox *cantidad;
    QLabel *lote;
    QDoubleSpinBox *lote_2;
    QLabel *fecha_2;
    QDateEdit *fecha;
    QLabel *notes;
    QPlainTextEdit *notes_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *nuevo;
    QPushButton *agregar;
    QPushButton *editar;
    QPushButton *eliminar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(757, 617);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Nimbus Sans [URW ]\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        exportar = new QPushButton(centralwidget);
        exportar->setObjectName(QString::fromUtf8("exportar"));

        verticalLayout->addWidget(exportar);

        buscar = new QLabel(centralwidget);
        buscar->setObjectName(QString::fromUtf8("buscar"));

        verticalLayout->addWidget(buscar);

        buscar_2 = new QLineEdit(centralwidget);
        buscar_2->setObjectName(QString::fromUtf8("buscar_2"));

        verticalLayout->addWidget(buscar_2);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nombre = new QLabel(groupBox);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        gridLayout->addWidget(nombre, 0, 0, 1, 1);

        nombre_2 = new QLineEdit(groupBox);
        nombre_2->setObjectName(QString::fromUtf8("nombre_2"));

        gridLayout->addWidget(nombre_2, 0, 1, 1, 1);

        tipo = new QLabel(groupBox);
        tipo->setObjectName(QString::fromUtf8("tipo"));

        gridLayout->addWidget(tipo, 0, 3, 1, 1);

        tipo_2 = new QLineEdit(groupBox);
        tipo_2->setObjectName(QString::fromUtf8("tipo_2"));

        gridLayout->addWidget(tipo_2, 0, 4, 1, 2);

        ubicacion = new QLabel(groupBox);
        ubicacion->setObjectName(QString::fromUtf8("ubicacion"));

        gridLayout->addWidget(ubicacion, 0, 6, 1, 1);

        ubicacion_2 = new QLineEdit(groupBox);
        ubicacion_2->setObjectName(QString::fromUtf8("ubicacion_2"));

        gridLayout->addWidget(ubicacion_2, 0, 7, 1, 3);

        cantidad_2 = new QLabel(groupBox);
        cantidad_2->setObjectName(QString::fromUtf8("cantidad_2"));

        gridLayout->addWidget(cantidad_2, 1, 0, 1, 1);

        cantidad = new QDoubleSpinBox(groupBox);
        cantidad->setObjectName(QString::fromUtf8("cantidad"));

        gridLayout->addWidget(cantidad, 1, 1, 1, 1);

        lote = new QLabel(groupBox);
        lote->setObjectName(QString::fromUtf8("lote"));

        gridLayout->addWidget(lote, 1, 2, 1, 1);

        lote_2 = new QDoubleSpinBox(groupBox);
        lote_2->setObjectName(QString::fromUtf8("lote_2"));

        gridLayout->addWidget(lote_2, 1, 3, 1, 2);

        fecha_2 = new QLabel(groupBox);
        fecha_2->setObjectName(QString::fromUtf8("fecha_2"));

        gridLayout->addWidget(fecha_2, 1, 5, 1, 1);

        fecha = new QDateEdit(groupBox);
        fecha->setObjectName(QString::fromUtf8("fecha"));

        gridLayout->addWidget(fecha, 1, 6, 1, 2);

        notes = new QLabel(groupBox);
        notes->setObjectName(QString::fromUtf8("notes"));

        gridLayout->addWidget(notes, 1, 8, 1, 1);

        notes_2 = new QPlainTextEdit(groupBox);
        notes_2->setObjectName(QString::fromUtf8("notes_2"));

        gridLayout->addWidget(notes_2, 1, 9, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nuevo = new QPushButton(groupBox);
        nuevo->setObjectName(QString::fromUtf8("nuevo"));

        horizontalLayout->addWidget(nuevo);

        agregar = new QPushButton(groupBox);
        agregar->setObjectName(QString::fromUtf8("agregar"));

        horizontalLayout->addWidget(agregar);

        editar = new QPushButton(groupBox);
        editar->setObjectName(QString::fromUtf8("editar"));

        horizontalLayout->addWidget(editar);

        eliminar = new QPushButton(groupBox);
        eliminar->setObjectName(QString::fromUtf8("eliminar"));

        horizontalLayout->addWidget(eliminar);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 6);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exportar->setText(QCoreApplication::translate("MainWindow", "Exportar CSV", nullptr));
        buscar->setText(QCoreApplication::translate("MainWindow", "Buscar:", nullptr));
        groupBox->setTitle(QString());
        nombre->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        tipo->setText(QCoreApplication::translate("MainWindow", "Tipo:", nullptr));
        ubicacion->setText(QCoreApplication::translate("MainWindow", "Ubicaci\303\263n:", nullptr));
        cantidad_2->setText(QCoreApplication::translate("MainWindow", "Cantidad:", nullptr));
        lote->setText(QCoreApplication::translate("MainWindow", "Lote:", nullptr));
        fecha_2->setText(QCoreApplication::translate("MainWindow", "Fecha:", nullptr));
        notes->setText(QCoreApplication::translate("MainWindow", "Notas:", nullptr));
        nuevo->setText(QCoreApplication::translate("MainWindow", "Nuevo item", nullptr));
        agregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        editar->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        eliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
