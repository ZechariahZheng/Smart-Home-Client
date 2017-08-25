#ifndef MYTCP_H
#define MYTCP_H

#include <QObject>
#include <QtNetwork>
#include <QTcpSocket>

class MyTcp : public QObject
{
    Q_OBJECT
public:
    explicit MyTcp(QObject *parent = 0);
    ~MyTcp();
    void sendMsg(const char *data);

private:
    QTcpSocket *client;

};

#endif // MYTCP_H
