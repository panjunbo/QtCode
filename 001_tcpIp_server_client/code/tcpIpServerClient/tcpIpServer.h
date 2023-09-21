#ifndef TCPIPSERVER_H
#define TCPIPSERVER_H

#include <QWidget>
#include "tcpIpSocket.h"

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
protected:
    QList <tcpIpSocket> serveSocketList;

protected slots:
    void slot_start_clicked(bool checked);
};

#endif // TCPIPSERVER_H
