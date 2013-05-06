#ifndef ADMINWIDGET_H
#define ADMINWIDGET_H

#include <QTabWidget>

namespace Ui {
class AdminWidget;
}

class AdminWidget : public QTabWidget
{
    Q_OBJECT
    
public:
    explicit AdminWidget(QWidget *parent = 0);
    ~AdminWidget();
    
private:
    Ui::AdminWidget *ui;
};

#endif // ADMINWIDGET_H
