#ifndef TCPIPCLIENT_H
#define TCPIPCLIENT_H

#include <QWidget>

namespace Ui {
class tcpIpClient;
}

class tcpIpClient : public QWidget
{
    Q_OBJECT

public:
    explicit tcpIpClient(QWidget *parent = nullptr);
    ~tcpIpClient();

private:
    Ui::tcpIpClient *ui;
};

#endif // TCPIPCLIENT_H
