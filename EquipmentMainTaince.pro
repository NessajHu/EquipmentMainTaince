#-------------------------------------------------
#
# Project created by QtCreator 2019-03-22T02:52:14
#
#-------------------------------------------------

QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EquipmentMaintaince
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++17

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    login.cpp \
    toolbar.cpp \
    tabwidget.cpp \
    personalinformation.cpp \
    searchwidget.cpp \
    personalinformationmodify.cpp \
    showmodifywidget.cpp \
    department.cpp \
    departmentinformationmodify.cpp \
    departmentshow.cpp \
    departmentinformation.cpp \
    equipmentpurchase.cpp \
    equipmentscrapping.cpp \
    maintainceplan.cpp \
    equipmentmaintainceplanmodify.cpp \
    equipmentmaintainceplanshow.cpp \
    equipmentmaintainceplantable.cpp \
    equipmentmaintainceplansearch.cpp \
    todayplan.cpp \
    equipmentinformation.cpp \
    equipmentinformationmodify.cpp \
    equipmentinformationshow.cpp \
    personalinformationshow.cpp \
    tcpserver.cpp \
    addpersoninformation.cpp \
    addequipmentinformation.cpp \
    equipmentinformationwidget.cpp \
    adddepartmentinformation.cpp \
    person.cpp \
    addequipmentmaintainceplan.cpp

HEADERS += \
        mainwindow.h \
    login.h \
    toolbar.h \
    tabwidget.h \
    personalinformation.h \
    searchwidget.h \
    personalinformationmodify.h \
    showmodifywidget.h \
    department.h \
    departmentinformationmodify.h \
    departmentshow.h \
    departmentinformation.h \
    equipmentpurchase.h \
    equipmentscrapping.h \
    maintainceplan.h \
    equipmentmaintainceplanmodify.h \
    equipmentmaintainceplanshow.h \
    equipmentmaintainceplantable.h \
    equipmentmaintainceplansearch.h \
    todayplan.h \
    equipmentinformation.h \
    equipmentinformationmodify.h \
    equipmentinformationshow.h \
    personalinformationshow.h \
    tcpserver.h \
    addpersoninformation.h \
    addequipmentinformation.h \
    equipmentinformationwidget.h \
    adddepartmentinformation.h \
    person.h \
    addequipmentmaintainceplan.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
