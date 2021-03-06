# #####################################################################
# Automatically generated by qmake (2.01a) Tue Mar 17 19:44:38 2009
# #####################################################################
TEMPLATE = app
TARGET = qfaktury

QT += gui core widgets printsupport xml webenginewidgets network

LIBDIR = /usr/lib
SMTPCODEDIR = $$PWD/src/SimpleSmtp_SSL_QT5/smtp_attachements

CONFIG += debug
QT_MESSAGE_PATTERN="[%{type}] %{appname} (%{file}:%{line}) - %{message}"

QT_MINOR_VERSION = 5.0.0

exists( /usr/lib/libsmtp.so ) {
unix:LIBS += -L$${LIBDIR} -lsmtp
win32:LIBS += -L$${LIBDIR} -lsmtpdll
}

unix:LIBS += -L$${LIBDIR} -lz
win32:LIBS += -L$${LIBDIR} -lzdll

INCLUDEPATH += . \
            $${SMTPCODEDIR} \
            $${LIBDIR}

# Input
HEADERS += $$files($$PWD/src/*.h) \
            $${SMTPCODEDIR}/*.h


FORMS += $$files($$PWD/ui/*.ui) \
        $$files($$PWD/src/SimpleSmtp_SSL_QT5/smtp_attachements/*.ui)


SOURCES += $$PWD/src/XmlDataLayer.cpp \
    $$PWD/src/BuyerData.cpp \
    $$PWD/src/CustomPaymData.cpp \
    $$PWD/src/CustomPayment.cpp \
    $$PWD/src/CorrectGross.cpp \
    $$PWD/src/GoodsGrossList.cpp \
    $$PWD/src/Bill.cpp \
    $$PWD/src/InvoiceGross.cpp \
    $$PWD/src/Duplicate.cpp \
    $$PWD/src/ConvertAmount.cpp \
    $$PWD/src/Invoice.cpp \
    $$PWD/src/Buyers.cpp \
    $$PWD/src/BuyersList.cpp \
    $$PWD/src/Correction.cpp \
    $$PWD/src/main.cpp \
    $$PWD/src/MainWindow.cpp \
    $$PWD/src/Goods.cpp \
    $$PWD/src/GoodsList.cpp \
    $$PWD/src/Setting.cpp \
    $$PWD/src/User.cpp \
    $$PWD/src/ChangeAmount.cpp \
    $$PWD/src/Validations.cpp \
    $$PWD/src/InvoiceRR.cpp \
    $${SMTPCODEDIR}/*.cpp \
    $$PWD/src/Send.cpp \
    $$PWD/src/owncalendar.cpp


RESOURCES += qfaktury.qrc
MOC_DIR = .moc
UI_DIR = .ui
OBJECTS_DIR = .obj
RCC_DIR = .rcc
TRANSLATIONS += $$files($$PWD/translations/*.ts)


unix {

target.path = /usr/bin
pixmaps.path = /usr/share/qfaktury/icons
pixmaps.files = icons/*.png
css.path = /usr/share/qfaktury/templates
css.files = templates/*.css
documentation.path = /usr/share/doc/qfaktury
documentation.files = docs/*
desktop.path = /usr/share/applications
desktop.files = *.desktop
sources.path = /usr/share/qfaktury/src
sources.files = src/*
uis.path = /usr/share/qfaktury/ui
uis.files = ui/*.ui

}


win32 {

target.path = C:/Windows/System32
pixmaps.path = $$(HOME)/AppData/Roaming/qfaktury/icons
pixmaps.files = icons/*.png
css.path = $$(HOME)/AppData/Roaming/qfaktury/templates
css.files = templates/*.css
desktop.path = "$$(HOME)/Desktop"
desktop.files = *.desktop
sources.path = $$(HOME)/AppData/Roaming/qfaktury/src
sources.files = src/*
uis.path = $$(HOME)/AppData/Roaming/qfaktury/ui
uis.files = ui/*.ui

}


macx {

target.path = /usr/local/bin
pixmaps.path = "~/Library/Application Support/qfaktury/icons"
pixmaps.files = icons/*.png
css.path = "~/Library/Application Support/qfaktury/templates"
css.files = templates/*.css
desktop.path = "$$(HOME)/Desktop"
desktop.files = *.desktop
sources.path = "~/Library/Application Support/qfaktury/src"
sources.files = src/*
uis.path = "~/Library/Application Support/qfaktury/src"
uis.files = ui/*.ui

}


INSTALLS += target \
    pixmaps \
    css \
    documentation \
    uis \
    desktop \
    sources
