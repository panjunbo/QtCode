#include "tcpIpSocket.h"

tcpIpSocket::tcpIpSocket(QObject *parent)
{
    connect(this,&tcpIpSocket::readyRead,this, &tcpIpSocket::slot_readData);
    connect(this,&tcpIpSocket::disconnected,this,&tcpIpSocket::slot_disconnected);
}

void tcpIpSocket::slot_readData(void)
{
    QByteArray data = readAll();
    emit tcpIpS_updateData(data, socketDescriptor());
    qDebug() << socketDescriptor() << endl;
};
void tcpIpSocket::slot_disconnected(void)
{
    emit tcpIpS_disconnected(socketDescriptor());
    qDebug() << socketDescriptor() << endl;
};
