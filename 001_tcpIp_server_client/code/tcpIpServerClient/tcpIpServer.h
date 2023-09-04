#ifndef TCPIPSERVER_H
#define TCPIPSERVER_H

#include <QWidget>

namespace Ui {
class tcpIpServer;
}

class tcpIpServer : public QWidget
{
    Q_OBJECT

public:
    explicit tcpIpServer(QWidget *parent = nullptr);
    ~tcpIpServer();

private:
    Ui::tcpIpServer *ui;
};

#endif // TCPIPSERVER_H
