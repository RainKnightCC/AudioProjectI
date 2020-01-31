/****************************************************************************
** Meta object code from reading C++ file 'folderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "customwidget/folderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FolderWidget_t {
    QByteArrayData data[22];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderWidget_t qt_meta_stringdata_FolderWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FolderWidget"
QT_MOC_LITERAL(1, 13, 17), // "showStatusMesasge"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "folder"
QT_MOC_LITERAL(4, 39, 11), // "restartPlot"
QT_MOC_LITERAL(5, 51, 16), // "enablePlayButton"
QT_MOC_LITERAL(6, 68, 5), // "state"
QT_MOC_LITERAL(7, 74, 9), // "idleState"
QT_MOC_LITERAL(8, 84, 15), // "positionChanged"
QT_MOC_LITERAL(9, 100, 8), // "position"
QT_MOC_LITERAL(10, 109, 16), // "restartWavReader"
QT_MOC_LITERAL(11, 126, 10), // "openFolder"
QT_MOC_LITERAL(12, 137, 6), // "goBack"
QT_MOC_LITERAL(13, 144, 16), // "directoryChanged"
QT_MOC_LITERAL(14, 161, 5), // "index"
QT_MOC_LITERAL(15, 167, 9), // "directory"
QT_MOC_LITERAL(16, 177, 12), // "fileSelected"
QT_MOC_LITERAL(17, 190, 11), // "readAllData"
QT_MOC_LITERAL(18, 202, 15), // "QVector<double>"
QT_MOC_LITERAL(19, 218, 4), // "data"
QT_MOC_LITERAL(20, 223, 12), // "stateChanged"
QT_MOC_LITERAL(21, 236, 13) // "QAudio::State"

    },
    "FolderWidget\0showStatusMesasge\0\0folder\0"
    "restartPlot\0enablePlayButton\0state\0"
    "idleState\0positionChanged\0position\0"
    "restartWavReader\0openFolder\0goBack\0"
    "directoryChanged\0index\0directory\0"
    "fileSelected\0readAllData\0QVector<double>\0"
    "data\0stateChanged\0QAudio::State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       7,    0,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   87,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      20,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,    6,

       0        // eod
};

void FolderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FolderWidget *_t = static_cast<FolderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showStatusMesasge((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->restartPlot(); break;
        case 2: _t->enablePlayButton((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->idleState(); break;
        case 4: _t->positionChanged((*reinterpret_cast< const qint64(*)>(_a[1]))); break;
        case 5: _t->restartWavReader(); break;
        case 6: _t->openFolder(); break;
        case 7: _t->goBack(); break;
        case 8: _t->directoryChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->fileSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->readAllData((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 12: _t->stateChanged((*reinterpret_cast< const QAudio::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FolderWidget::*_t)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWidget::showStatusMesasge)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FolderWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWidget::restartPlot)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FolderWidget::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWidget::enablePlayButton)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FolderWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWidget::idleState)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject FolderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FolderWidget.data,
      qt_meta_data_FolderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FolderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FolderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FolderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FolderWidget::showStatusMesasge(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FolderWidget::restartPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FolderWidget::enablePlayButton(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FolderWidget::idleState()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
