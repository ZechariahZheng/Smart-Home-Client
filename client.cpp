#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    tcpClient = new MyTcp;
}

Client::~Client()
{
    delete ui;
}

void Client::on_pushButton_clicked()
{
    tcpClient->sendMsg("kongtiao");
}
