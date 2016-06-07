/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calculator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Calculator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      19,   11,   11,   11, 0x0a,
      28,   11,   11,   11, 0x0a,
      35,   11,   11,   11, 0x0a,
      44,   11,   11,   11, 0x0a,
      57,   11,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
      88,   11,   11,   11, 0x0a,
     100,   11,   11,   11, 0x0a,
     107,   11,   11,   11, 0x0a,
     116,   11,   11,   11, 0x0a,
     130,   11,   11,   11, 0x0a,
     143,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     169,   11,   11,   11, 0x0a,
     199,  192,   11,   11, 0x0a,
     252,   11,   11,   11, 0x0a,
     271,   11,   11,   11, 0x0a,
     278,   11,   11,   11, 0x0a,
     286,   11,   11,   11, 0x0a,
     293,   11,   11,   11, 0x0a,
     301,   11,   11,   11, 0x0a,
     307,   11,   11,   11, 0x0a,
     314,   11,   11,   11, 0x0a,
     321,   11,   11,   11, 0x0a,
     329,   11,   11,   11, 0x0a,
     338,   11,   11,   11, 0x0a,
     352,   11,   11,   11, 0x0a,
     367,   11,   11,   11, 0x0a,
     381,   11,   11,   11, 0x0a,
     402,   11,   11,   11, 0x0a,
     420,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Calculator[] = {
    "Calculator\0\0setV()\0cleard()\0addV()\0"
    "addDot()\0substractV()\0multiplyV()\0"
    "divideV()\0szamol()\0BackSpace()\0Gyok()\0"
    "hatvny()\0clearMemory()\0readMemory()\0"
    "setMemory()\0addToMemory()\0"
    "slotToggleVisibility()\0reason\0"
    "slotTrayActivated(QSystemTrayIcon::ActivationReason)\0"
    "calculatePercent()\0cSin()\0caSin()\0"
    "cCos()\0caCos()\0cTg()\0caTg()\0cCtg()\0"
    "caCtg()\0DispPI()\0CalculateLn()\0"
    "CalculateLog()\0CalculateLg()\0"
    "CalculateFactorial()\0CalculateInvers()\0"
    "changePM()\0"
};

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Calculator *_t = static_cast<Calculator *>(_o);
        switch (_id) {
        case 0: _t->setV(); break;
        case 1: _t->cleard(); break;
        case 2: _t->addV(); break;
        case 3: _t->addDot(); break;
        case 4: _t->substractV(); break;
        case 5: _t->multiplyV(); break;
        case 6: _t->divideV(); break;
        case 7: _t->szamol(); break;
        case 8: _t->BackSpace(); break;
        case 9: _t->Gyok(); break;
        case 10: _t->hatvny(); break;
        case 11: _t->clearMemory(); break;
        case 12: _t->readMemory(); break;
        case 13: _t->setMemory(); break;
        case 14: _t->addToMemory(); break;
        case 15: _t->slotToggleVisibility(); break;
        case 16: _t->slotTrayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 17: _t->calculatePercent(); break;
        case 18: _t->cSin(); break;
        case 19: _t->caSin(); break;
        case 20: _t->cCos(); break;
        case 21: _t->caCos(); break;
        case 22: _t->cTg(); break;
        case 23: _t->caTg(); break;
        case 24: _t->cCtg(); break;
        case 25: _t->caCtg(); break;
        case 26: _t->DispPI(); break;
        case 27: _t->CalculateLn(); break;
        case 28: _t->CalculateLog(); break;
        case 29: _t->CalculateLg(); break;
        case 30: _t->CalculateFactorial(); break;
        case 31: _t->CalculateInvers(); break;
        case 32: _t->changePM(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Calculator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Calculator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Calculator,
      qt_meta_data_Calculator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Calculator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator))
        return static_cast<void*>(const_cast< Calculator*>(this));
    if (!strcmp(_clname, "Ui::Calculator"))
        return static_cast< Ui::Calculator*>(const_cast< Calculator*>(this));
    return QWidget::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
