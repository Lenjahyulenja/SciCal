#include "calculator.h"

Calculator::Calculator(QWidget *parent) : QWidget(parent){
    firststring = new QLabel("");
    firststring->setMinimumSize(150,50);
    displaystring = new QLabel("");
    displaystring->setMinimumSize(150, 50);
    displaystring->setFont(QFont("sans", 14, QFont::Bold));
    QChar aButtons[4][4] = {
     {'7', '8', '9', '/'},
     {'4', '5', '6', '*'},
     {'1', '2', '3', '-'},
     {'0', '.', '=', '+'}
    };


    QGridLayout *myLayout = new QGridLayout;
    myLayout->addWidget(firststring, 0, 0, 1, 4);
    myLayout->addWidget(displaystring, 1, 0, 1, 4);
    myLayout->addWidget(createButton("C"), 2, 3);
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            myLayout->addWidget(createButton(aButtons[i][j]), i+3, j);
        }
    }
    setLayout(myLayout);
}

QPushButton* Calculator::createButton (const QString str) {
    QPushButton* pcmd = new QPushButton(str);
    pcmd->setMinimumSize(40, 30);
    connect(pcmd, SIGNAL(clicked()), this, SLOT(slotButtonClicked()));
 return pcmd;
}

void Calculator::calculate() {
    double dOperand2 = stack.pop().toDouble();
    QString strOperation = stack.pop();
    double dOperand1 = stack.pop().toDouble();
    double dResult = 0;
    if (strOperation == "+") { dResult = dOperand1 + dOperand2; }
    else if (strOperation == "-") { dResult = dOperand1 - dOperand2; }
    else if (strOperation == "/") { dResult = dOperand1 / dOperand2; }
    else if (strOperation == "*") { dResult = dOperand1 * dOperand2; }
    displaystring->setText(QString("%1").arg(dResult, 0, 'f', 3)); //3 znakov after ","
}

void Calculator::input(QString str) {
    QString text = displaystring->text();
    int len = text.length();
    QString last = "";
    if (len>0) last = text.right(1);
     if (((len==0 && stack.count()==0) ||
        ((stack.count()==2 && len>1 && (last=="+"||last=="-"||last=="*"||last=="/"))))
        && (str.contains(QRegExp("[0-9]")) || str=="-")) {

        firststring->setText(text);
        text=str;
     }

        else if ((text+str).contains(QRegExp("^-?[0-9]+\\.?[0-9]*$"))) {
        text+=str;
 }
    else if (text.contains(QRegExp("^-?[0-9]+\\.?[0-9]*$"))) {
    if (str=="*"||str=="/"||str=="+"||str=="-"||str=="=") {
        if (stack.count()==2) {
            stack.push(text);
            firststring->setText(firststring->text()+text+"=");
            calculate();
            text=displaystring->text();
   }
   if (str!="=") {
    stack.push(text);
    text+=str;
    stack.push(str);
    firststring->setText(text);
   }
  }
 }
 displaystring->setText(text);
}


void Calculator::clearAll() {
    stack.clear(); displaystring->setText(""); firststring->setText("");
}

void Calculator::slotButtonClicked() {
    QString str = ((QPushButton*)sender())->text();
    if (str == "CE") clearAll();
    else input(str);
}

void Calculator::keyPressEvent(QKeyEvent *event) {
    int key=event->key();
    QString str = QString(QChar(key));
    if (key==Qt::Key_Delete) clearAll();
    else input(str);
}

