INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

win32-msvc* {
    contains(QMAKE_TARGET.arch, x86_64) {
    } else {
        LIBS += $$PWD/libs/win32-msvc/libcrypto.lib
    }
    LIBS += Advapi32.lib
}
linux {
    LIBS += $$PWD/libs/lin64/libcrypto.a
    LIBS += -ldl
}
unix:macx{
    LIBS += $$PWD/libs/mac/libcrypto.a
}
