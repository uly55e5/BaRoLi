#include "adminwidget.h"
#include "ui_adminwidget.h"

AdminWidget::AdminWidget(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::AdminWidget)
{
    ui->setupUi(this);
}

AdminWidget::~AdminWidget()
{
    delete ui;
}
