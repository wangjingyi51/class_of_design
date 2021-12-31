QT       += core gui
QT +=multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admwindow.cpp \
    all_route.cpp \
    delete_location.cpp \
    delete_path.cpp \
    graph.cpp \
    increase_location.cpp \
    increase_path.cpp \
    inquire_location.cpp \
    main.cpp \
    mainwindow.cpp \
    mapwindow.cpp \
    regist.cpp \
    route1window.cpp \
    route2window.cpp \
    routewindow.cpp \
    userwindow.cpp

HEADERS += \
    admwindow.h \
    all_route.h \
    delete_location.h \
    delete_path.h \
    graph.h \
    increase_location.h \
    increase_path.h \
    inquire_location.h \
    mainwindow.h \
    mapwindow.h \
    regist.h \
    route1window.h \
    route2window.h \
    routewindow.h \
    userwindow.h

FORMS += \
    admwindow.ui \
    all_route.ui \
    delete_location.ui \
    delete_path.ui \
    increase_location.ui \
    increase_path.ui \
    inquire_location.ui \
    mainwindow.ui \
    mapwindow.ui \
    regist.ui \
    route1window.ui \
    route2window.ui \
    routewindow.ui \
    userwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    ui2/background1.jpg \
    ui2/background2.jpg \
    ui2/v2-8d1fdb3bdafe4c5719a56239ea9cd3ab_r.jpg
