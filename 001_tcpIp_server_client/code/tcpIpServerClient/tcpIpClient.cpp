#include "tcpIpClient.h"
#include "ui_tcpIpClient.h"

tcpIpClient::tcpIpClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcpIpClient)
{
    ui->setupUi(this);
}

tcpIpClient::~tcpIpClient()
{
    delete ui;
}
