#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);



private:
    Ui::MainWindow *ui;
    int  m_nMouseClick_X_Coordinate;
    int  m_nMouseClick_Y_Coordinate;
};

#endif // MAINWINDOW_H
