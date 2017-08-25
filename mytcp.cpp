#include "mytcp.h"

MyTcp::MyTcp(QObject *parent) : QObject(parent)
{
    client = new QTcpSocket(this);
    client->connectToHost(QHostAddress::LocalHost, 6665);
}

MyTcp::~MyTcp()
{
    delete client;
}

void MyTcp::sendMsg(const char *data)
{
    client->write(data);
}
