#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QWidget>
#include <QStack>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>

#include <QKeyEvent>
#include <Qt>


class Calculator : public QWidget
{
    Q_OBJECT
    private:
     QLabel *firststring; //thr output of the privious operand or opration
     QLabel *displaystring; // will display the results of calculations
     QStack <QString> stack; //Storage of two numbers and selected operations on them
protected:
     virtual void keyPressEvent(QKeyEvent *event); //keystroke processing?obrabotka klavish
    public:
     Calculator (QWidget* pwgt = 0);
     QPushButton* createButton (const QString str);
     void clearAll ();
     void input(QString); //pressure button or key
     void calculate ();
    public slots:
     void slotButtonClicked (); //pressing the buttons
};
#endif
