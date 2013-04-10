/********************************************************************************
** Form generated from reading UI file 'servermainwindow.ui'
**
** Created: Thu Apr 11 00:03:18 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERMAINWINDOW_H
#define UI_SERVERMAINWINDOW_H

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

class Ui_ServerMainWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerMainWindow)
    {
        if (ServerMainWindow->objectName().isEmpty())
            ServerMainWindow->setObjectName(QString::fromUtf8("ServerMainWindow"));
        ServerMainWindow->resize(800, 600);
        menubar = new QMenuBar(ServerMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ServerMainWindow->setMenuBar(menubar);
        centralwidget = new QWidget(ServerMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ServerMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ServerMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ServerMainWindow->setStatusBar(statusbar);

        retranslateUi(ServerMainWindow);

        QMetaObject::connectSlotsByName(ServerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ServerMainWindow)
    {
        ServerMainWindow->setWindowTitle(QApplication::translate("ServerMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ServerMainWindow: public Ui_ServerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMAINWINDOW_H
