HEADERS += \
    $$PWD/gdbmi.h \
    $$PWD/gdbengine.h \
    $$PWD/gdboptionspage.h \
    $$PWD/gdbchooserwidget.h \
    $$PWD/abstractgdbadapter.h \
    $$PWD/attachgdbadapter.h \
    $$PWD/coregdbadapter.h \
    $$PWD/localplaingdbadapter.h \
    $$PWD/termgdbadapter.h \
    $$PWD/remotegdbserveradapter.h \
    $$PWD/trkgdbadapter.h \
    $$PWD/s60debuggerbluetoothstarter.h \
    $$PWD/abstractgdbprocess.h \
    $$PWD/localgdbprocess.h \
    $$PWD/remotegdbprocess.h \
    $$PWD/remoteplaingdbadapter.h \
    $$PWD/abstractplaingdbadapter.h

SOURCES += \
    $$PWD/gdbmi.cpp \
    $$PWD/gdbengine.cpp \
    $$PWD/classicgdbengine.cpp \
    $$PWD/pythongdbengine.cpp \
    $$PWD/gdboptionspage.cpp \
    $$PWD/gdbchooserwidget.cpp \
    $$PWD/abstractgdbadapter.cpp \
    $$PWD/attachgdbadapter.cpp \
    $$PWD/coregdbadapter.cpp \
    $$PWD/localplaingdbadapter.cpp \
    $$PWD/termgdbadapter.cpp \
    $$PWD/remotegdbserveradapter.cpp \
    $$PWD/trkgdbadapter.cpp \
    $$PWD/s60debuggerbluetoothstarter.cpp \
    $$PWD/abstractgdbprocess.cpp \
    $$PWD/localgdbprocess.cpp \
    $$PWD/remotegdbprocess.cpp \
    $$PWD/remoteplaingdbadapter.cpp \
    $$PWD/abstractplaingdbadapter.cpp

FORMS +=  $$PWD/gdboptionspage.ui

RESOURCES += $$PWD/gdb.qrc
