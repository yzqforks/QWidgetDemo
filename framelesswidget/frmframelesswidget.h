﻿#ifndef FRMFRAMELESSWIDGET_H
#define FRMFRAMELESSWIDGET_H

#include <QWidget>
class FramelessWidget2;

namespace Ui {
class frmFramelessWidget;
}

class frmFramelessWidget : public QWidget
{
    Q_OBJECT

public:
    explicit frmFramelessWidget(QWidget *parent = 0);
    ~frmFramelessWidget();

protected:
    void closeEvent(QCloseEvent *);

private:
    Ui::frmFramelessWidget *ui;
    QWidget *widget;
    FramelessWidget2 *frameless;

private slots:
    void initWidget(QWidget *w);
    void on_pushButton_clicked();
    void stateChanged1(int arg1);
    void stateChanged2(int arg1);
};

#endif // FRMFRAMELESSWIDGET_H
