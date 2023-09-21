#include "tcpIpServer.h"
#include "ui_tcpipserver.h"

tcpIpServer::tcpIpServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcpIpServer)
{
    ui->setupUi(this);

    connect(ui->startSerButton,&QPushButton::clicked,this,&tcpIpServer::slot_start_clicked);
}

tcpIpServer::~tcpIpServer()
{
    delete ui;
}

void tcpIpServer::slot_start_clicked(bool checked)
{

}
