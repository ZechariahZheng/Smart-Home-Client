#-------------------------------------------------
#
# Project created by QtCreator 2017-08-25T10:50:40
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        client.cpp \
    mytcp.cpp

HEADERS  += client.h \
    mytcp.h

FORMS    += client.ui
