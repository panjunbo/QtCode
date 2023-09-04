#ifndef TCPIPSERVERCLIENT_H
#define TCPIPSERVERCLIENT_H

#include <QWidget>

class tcpIpServerClient : public QWidget
{
    Q_OBJECT

public:
    tcpIpServerClient(QWidget *parent = nullptr);
    ~tcpIpServerClient();
};
#endif // TCPIPSERVERCLIENT_H
