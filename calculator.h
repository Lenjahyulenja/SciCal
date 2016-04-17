#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QWidget>
#include <QStack>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>


class Calculator : public QWidget
{
    Q_OBJECT
    private:
     QLabel *displaystring; // will display the results of calculations
     QStack <QString> stack; //Storage of two numbers and selected operations on them
    public:
     Calculator (QWidget* pwgt = 0);
     QPushButton* createButton (const QString str);
     void calculate ();
    public slots:
     void slotButtonClicked (); //pressing the buttons
};
#endif
