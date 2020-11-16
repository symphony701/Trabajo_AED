QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    formerror.cpp \
    formsocial.cpp \
    main.cpp \
    mainwindow.cpp \
    perfile.cpp

HEADERS += \
    Lista.h \
    Persona.h \
    Pilas.h \
    User.h \
    chat.h \
    formerror.h \
    formsocial.h \
    logeador.h \
    mainwindow.h \
    perfile.h

FORMS += \
    chat.ui \
    formerror.ui \
    formsocial.ui \
    mainwindow.ui \
    perfile.ui

TRANSLATIONS += \
    Proyecto_es_PE.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Image/logo \
    usuarios.bin \
    yasashii.bin

RESOURCES += \
    archivitosxd.qrc \
    imagen.qrc
