TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    eexpenserecord.cpp \
    prodconstruct.cpp \
    addproduct.cpp \
    maininterface.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    bekker.h \
    products.h

