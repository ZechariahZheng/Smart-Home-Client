#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include "mytcp.h"

namespace Ui {
class Client;
}

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Client *ui;
    MyTcp *tcpClient;
};

#endif // CLIENT_H
