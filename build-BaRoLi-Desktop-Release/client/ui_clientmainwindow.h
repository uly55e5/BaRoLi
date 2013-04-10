/********************************************************************************
** Form generated from reading UI file 'clientmainwindow.ui'
**
** Created: Thu Apr 11 00:03:13 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMAINWINDOW_H
#define UI_CLIENTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientMainWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientMainWindow)
    {
        if (ClientMainWindow->objectName().isEmpty())
            ClientMainWindow->setObjectName(QString::fromUtf8("ClientMainWindow"));
        ClientMainWindow->resize(800, 600);
        menubar = new QMenuBar(ClientMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ClientMainWindow->setMenuBar(menubar);
        centralwidget = new QWidget(ClientMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ClientMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ClientMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ClientMainWindow->setStatusBar(statusbar);

        retranslateUi(ClientMainWindow);

        QMetaObject::connectSlotsByName(ClientMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientMainWindow)
    {
        ClientMainWindow->setWindowTitle(QApplication::translate("ClientMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClientMainWindow: public Ui_ClientMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMAINWINDOW_H
