#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "figura.h"
MainWindow::MainWindow(QWidget *parent)
     :QMainWindow(parent)
     ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::makePlot();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::makePlot()
{
      Figura parameters(2000,2,0,1,2,M_PI/2,1,2000); //(Fs,freq1,ph1,mashtab1,freq2,ph2,mashtab2,points)
      // create graph and assign data to it:
      ui->customPlot->addGraph();    // give the axes some labels:
      ui->customPlot->graph(0)->setData(parameters.getX(), parameters.getY());
      ui->customPlot->xAxis->setLabel("x");
      ui->customPlot->yAxis->setLabel("y");

      // set axes ranges, so we see all data:
      ui->customPlot->xAxis->setRange(-2, 2);
      ui->customPlot->yAxis->setRange(-2, 2);
      ui->customPlot->graph(0)->setLineStyle(QCPGraph::lsNone);
      ui->customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 2));
      ui->customPlot->replot();
}
