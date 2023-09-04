#include "tcpIpServer.h"
#include "ui_tcpipserver.h"

tcpIpServer::tcpIpServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcpIpServer)
{
    ui->setupUi(this);
}

tcpIpServer::~tcpIpServer()
{
    delete ui;
}
