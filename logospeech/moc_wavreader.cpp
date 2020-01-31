/****************************************************************************
** Meta object code from reading C++ file 'wavreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "capturedata/wavreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wavreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WavReader_t {
    QByteArrayData data[16];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WavReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WavReader_t qt_meta_stringdata_WavReader = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WavReader"
QT_MOC_LITERAL(1, 10, 11), // "bufferReady"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "QAudioBuffer"
QT_MOC_LITERAL(4, 36, 6), // "buffer"
QT_MOC_LITERAL(5, 43, 14), // "processedUSecs"
QT_MOC_LITERAL(6, 58, 2), // "us"
QT_MOC_LITERAL(7, 61, 11), // "readAllData"
QT_MOC_LITERAL(8, 73, 15), // "QVector<double>"
QT_MOC_LITERAL(9, 89, 4), // "data"
QT_MOC_LITERAL(10, 94, 12), // "stateChangeg"
QT_MOC_LITERAL(11, 107, 13), // "QAudio::State"
QT_MOC_LITERAL(12, 121, 5), // "state"
QT_MOC_LITERAL(13, 127, 4), // "play"
QT_MOC_LITERAL(14, 132, 4), // "stop"
QT_MOC_LITERAL(15, 137, 11) // "audioNotify"

    },
    "WavReader\0bufferReady\0\0QAudioBuffer\0"
    "buffer\0processedUSecs\0us\0readAllData\0"
    "QVector<double>\0data\0stateChangeg\0"
    "QAudio::State\0state\0play\0stop\0audioNotify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WavReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   61,    2, 0x0a /* Public */,
      14,    0,   62,    2, 0x0a /* Public */,
      15,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WavReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WavReader *_t = static_cast<WavReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bufferReady((*reinterpret_cast< const QAudioBuffer(*)>(_a[1]))); break;
        case 1: _t->processedUSecs((*reinterpret_cast< const qint64(*)>(_a[1]))); break;
        case 2: _t->readAllData((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 3: _t->stateChangeg((*reinterpret_cast< const QAudio::State(*)>(_a[1]))); break;
        case 4: _t->play(); break;
        case 5: _t->stop(); break;
        case 6: _t->audioNotify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioBuffer >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 3:
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
            typedef void (WavReader::*_t)(const QAudioBuffer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WavReader::bufferReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WavReader::*_t)(const qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WavReader::processedUSecs)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WavReader::*_t)(const QVector<double> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WavReader::readAllData)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WavReader::*_t)(const QAudio::State & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WavReader::stateChangeg)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WavReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WavReader.data,
      qt_meta_data_WavReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WavReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WavReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WavReader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WavReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WavReader::bufferReady(const QAudioBuffer & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WavReader::processedUSecs(const qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WavReader::readAllData(const QVector<double> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WavReader::stateChangeg(const QAudio::State & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
