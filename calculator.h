#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "ui_calculator.h"
#include <QSystemTrayIcon>

class Calculator : public QWidget, public Ui::Calculator
{
    Q_OBJECT
  public:
    Calculator();
    void keyPressEvent(QKeyEvent *event);
    QSystemTrayIcon *tray;
    void setSTray();
    void closeEvent(QCloseEvent *e);
  public slots:
    void setV();
    void cleard();
    void addV();
    void addDot();
    void substractV();
    void multiplyV();
    void divideV();
    void szamol();
    void BackSpace();  
    void Gyok();
    void hatvny();
    void clearMemory();
    void readMemory();
    void setMemory();
    void addToMemory(); 
    void slotToggleVisibility();
    void slotTrayActivated(QSystemTrayIcon::ActivationReason reason);
    void calculatePercent();
    void cSin();
    void caSin();
    void cCos();
    void caCos();
    void cTg();
    void caTg();
    void cCtg();
    void caCtg();
    void DispPI();
    void CalculateLn();
    void CalculateLog();
    void CalculateLg();
    void CalculateFactorial();
    void CalculateInvers();
    void changePM();
};
#endif
