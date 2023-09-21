#ifndef TCPIPSOCKET_H
#define TCPIPSOCKET_H
#include <QTcpSocket>

class tcpIpSocket:public QTcpSocket
{
    Q_OBJECT
public:
    tcpIpSocket(QObject *parent = nullptr);
protected slots:
    void slot_readData(void);
    void slot_disconnected(void);
signals:
    void tcpIpS_updateData(QByteArray data, qintptr desc);//use desc to distinguish which client
    void tcpIpS_disconnected(qintptr desc);
};

#endif // TCPIPSOCKET_H
