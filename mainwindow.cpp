#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),m_nMouseClick_X_Coordinate(0),m_nMouseClick_Y_Coordinate(0),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    setWindowFlags(Qt::Widget | Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    //setParent(0); // Create TopLevel-Widget
    //setAttribute(Qt::WA_NoSystemBackground, true);
    //setAttribute(Qt::WA_TranslucentBackground, true);
    //setAttribute(Qt::WA_PaintOnScreen); // as pointed by Caveman (thanks!)
    /*
    setMask(geometry());
    setWindowFlags(Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground,true);
    setAutoFillBackground(false);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, QColor (0, 0 , 0, 20));
    setPalette(pal);
    */

    /*
    QVBoxLayout *layout = new QVBoxLayout(this);

    // To remove any space between the borders and the QSizeGrip...
    layout->setContentsMargins(QMargins());
    // and between the other widget and the QSizeGrip
    layout->setSpacing(0);
    layout->addWidget(new QTextEdit(this));

    // The QSizeGrip position (here Bottom Right Corner) determines its
    // orientation too
    layout->addWidget(new QSizeGrip(this), 0, Qt::AlignBottom | Qt::AlignRight);
*/
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::mousePressEvent(QMouseEvent* event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
};

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
     move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
};
