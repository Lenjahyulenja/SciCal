#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

class Ui_Calculator
{
public:
    QLineEdit *disp;
    QFrame *frame;
    QPushButton *arcctg;
    QPushButton *sinB;
    QPushButton *arcsin;
    QPushButton *ln;
    QPushButton *osztas;
    QPushButton *szorzas;
    QPushButton *percent;
    QPushButton *clear;
    QPushButton *backspace;
    QPushButton *kivonas;
    QPushButton *nr2;
    QPushButton *nr3;
    QPushButton *nr1;
    QPushButton *lg;
    QPushButton *arccos;
    QPushButton *cosB;
    QPushButton *tg;
    QPushButton *arctg;
    QPushButton *logB;
    QPushButton *nr4;
    QPushButton *nr5;
    QPushButton *nr6;
    QPushButton *mr;
    QPushButton *ms;
    QPushButton *m_;
    QPushButton *mc;
    QPushButton *nr9;
    QPushButton *nr8;
    QPushButton *nr7;
    QPushButton *invers;
    QPushButton *ctg;
    QPushButton *piB;
    QPushButton *factor;
    QPushButton *nr0;
    QPushButton *pont;
    QPushButton *egyenlo;
    QPushButton *hatvany;
    QPushButton *gyok;
    QPushButton *osszeadas;
    QPushButton *plusminus;

    void setupUi(QWidget *Calculator)
    {
    Calculator->setObjectName(QString::fromUtf8("Calculator"));
    Calculator->setWindowIcon(QIcon(":/icon.png"));
    disp = new QLineEdit(Calculator);
    disp->setObjectName(QString::fromUtf8("disp"));
    disp->setGeometry(QRect(10, 10, 521, 61));
    disp->setAlignment(Qt::AlignRight);
    disp->setReadOnly(true);
    frame = new QFrame(Calculator);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setGeometry(QRect(10, 80, 521, 221));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    arcctg = new QPushButton(frame);
    arcctg->setObjectName(QString::fromUtf8("arcctg"));
    arcctg->setGeometry(QRect(70, 130, 51, 27));
    sinB = new QPushButton(frame);
    sinB->setObjectName(QString::fromUtf8("sinB"));
    sinB->setGeometry(QRect(10, 10, 41, 27));
    arcsin = new QPushButton(frame);
    arcsin->setObjectName(QString::fromUtf8("arcsin"));
    arcsin->setGeometry(QRect(70, 10, 51, 27));
    ln = new QPushButton(frame);
    ln->setObjectName(QString::fromUtf8("ln"));
    ln->setGeometry(QRect(140, 10, 51, 27));
    osztas = new QPushButton(frame);
    osztas->setObjectName(QString::fromUtf8("osztas"));
    osztas->setGeometry(QRect(210, 10, 61, 27));
    szorzas = new QPushButton(frame);
    szorzas->setObjectName(QString::fromUtf8("szorzas"));
    szorzas->setGeometry(QRect(290, 10, 61, 27));
    percent = new QPushButton(frame);
    percent->setObjectName(QString::fromUtf8("percent"));
    percent->setGeometry(QRect(360, 10, 51, 31));
    clear = new QPushButton(frame);
    clear->setObjectName(QString::fromUtf8("clear"));
    clear->setGeometry(QRect(420, 10, 91, 27));
    backspace = new QPushButton(frame);
    backspace->setObjectName(QString::fromUtf8("backspace"));
    backspace->setGeometry(QRect(420, 50, 91, 27));
    kivonas = new QPushButton(frame);
    kivonas->setObjectName(QString::fromUtf8("kivonas"));
    kivonas->setGeometry(QRect(360, 50, 51, 27));
    nr2 = new QPushButton(frame);
    nr2->setObjectName(QString::fromUtf8("nr2"));
    nr2->setGeometry(QRect(260, 50, 41, 27));
    nr3 = new QPushButton(frame);
    nr3->setObjectName(QString::fromUtf8("nr3"));
    nr3->setGeometry(QRect(310, 50, 41, 27));
    nr1 = new QPushButton(frame);
    nr1->setObjectName(QString::fromUtf8("nr1"));
    nr1->setGeometry(QRect(210, 50, 41, 27));
    lg = new QPushButton(frame);
    lg->setObjectName(QString::fromUtf8("lg"));
    lg->setGeometry(QRect(140, 50, 51, 27));
    arccos = new QPushButton(frame);
    arccos->setObjectName(QString::fromUtf8("arccos"));
    arccos->setGeometry(QRect(70, 50, 51, 27));
    cosB = new QPushButton(frame);
    cosB->setObjectName(QString::fromUtf8("cosB"));
    cosB->setGeometry(QRect(10, 50, 41, 27));
    tg = new QPushButton(frame);
    tg->setObjectName(QString::fromUtf8("tg"));
    tg->setGeometry(QRect(10, 90, 41, 27));
    arctg = new QPushButton(frame);
    arctg->setObjectName(QString::fromUtf8("arctg"));
    arctg->setGeometry(QRect(70, 90, 51, 27));
    logB = new QPushButton(frame);
    logB->setObjectName(QString::fromUtf8("logB"));
    logB->setGeometry(QRect(140, 90, 51, 27));
    nr4 = new QPushButton(frame);
    nr4->setObjectName(QString::fromUtf8("nr4"));
    nr4->setGeometry(QRect(210, 90, 41, 27));
    nr5 = new QPushButton(frame);
    nr5->setObjectName(QString::fromUtf8("nr5"));
    nr5->setGeometry(QRect(260, 90, 41, 27));
    nr6 = new QPushButton(frame);
    nr6->setObjectName(QString::fromUtf8("nr6"));
    nr6->setGeometry(QRect(310, 90, 41, 27));
    mr = new QPushButton(frame);
    mr->setObjectName(QString::fromUtf8("mr"));
    mr->setGeometry(QRect(420, 90, 41, 27));
    ms = new QPushButton(frame);
    ms->setObjectName(QString::fromUtf8("ms"));
    ms->setGeometry(QRect(470, 90, 41, 27));
    m_ = new QPushButton(frame);
    m_->setObjectName(QString::fromUtf8("m_"));
    m_->setGeometry(QRect(470, 130, 41, 27));
    mc = new QPushButton(frame);
    mc->setObjectName(QString::fromUtf8("mc"));
    mc->setGeometry(QRect(420, 130, 41, 27));
    nr9 = new QPushButton(frame);
    nr9->setObjectName(QString::fromUtf8("nr9"));
    nr9->setGeometry(QRect(310, 130, 41, 27));
    nr8 = new QPushButton(frame);
    nr8->setObjectName(QString::fromUtf8("nr8"));
    nr8->setGeometry(QRect(260, 130, 41, 27));
    nr7 = new QPushButton(frame);
    nr7->setObjectName(QString::fromUtf8("nr7"));
    nr7->setGeometry(QRect(210, 130, 41, 27));
    invers = new QPushButton(frame);
    invers->setObjectName(QString::fromUtf8("invers"));
    invers->setGeometry(QRect(140, 130, 51, 27));
    ctg = new QPushButton(frame);
    ctg->setObjectName(QString::fromUtf8("ctg"));
    ctg->setGeometry(QRect(10, 130, 41, 27));
    piB = new QPushButton(frame);
    piB->setObjectName(QString::fromUtf8("piB"));
    piB->setGeometry(QRect(10, 180, 41, 31));
    factor = new QPushButton(frame);
    factor->setObjectName(QString::fromUtf8("factor"));
    factor->setGeometry(QRect(140, 180, 51, 31));
    nr0 = new QPushButton(frame);
    nr0->setObjectName(QString::fromUtf8("nr0"));
    nr0->setGeometry(QRect(210, 180, 91, 31));
    pont = new QPushButton(frame);
    pont->setObjectName(QString::fromUtf8("pont"));
    pont->setGeometry(QRect(310, 180, 41, 31));
    egyenlo = new QPushButton(frame);
    egyenlo->setObjectName(QString::fromUtf8("egyenlo"));
    egyenlo->setGeometry(QRect(360, 180, 51, 31));
    hatvany = new QPushButton(frame);
    hatvany->setObjectName(QString::fromUtf8("hatvany"));
    hatvany->setGeometry(QRect(420, 180, 41, 31));
    gyok = new QPushButton(frame);
    gyok->setObjectName(QString::fromUtf8("gyok"));
    gyok->setGeometry(QRect(470, 180, 41, 31));
    osszeadas = new QPushButton(frame);
    osszeadas->setObjectName(QString::fromUtf8("osszeadas"));
    osszeadas->setGeometry(QRect(360, 90, 51, 71));
    plusminus = new QPushButton(frame);
    plusminus->setObjectName(QString::fromUtf8("plusminus"));
    plusminus->setGeometry(QRect(70, 180, 51, 31));
    QWidget::setTabOrder(disp, sinB);
    QWidget::setTabOrder(sinB, arcsin);
    QWidget::setTabOrder(arcsin, ln);
    QWidget::setTabOrder(ln, osztas);
    QWidget::setTabOrder(osztas, szorzas);
    QWidget::setTabOrder(szorzas, percent);
    QWidget::setTabOrder(percent, clear);
    QWidget::setTabOrder(clear, cosB);
    QWidget::setTabOrder(cosB, arccos);
    QWidget::setTabOrder(arccos, lg);
    QWidget::setTabOrder(lg, nr1);
    QWidget::setTabOrder(nr1, nr2);
    QWidget::setTabOrder(nr2, nr3);
    QWidget::setTabOrder(nr3, kivonas);
    QWidget::setTabOrder(kivonas, backspace);
    QWidget::setTabOrder(backspace, tg);
    QWidget::setTabOrder(tg, arctg);
    QWidget::setTabOrder(arctg, logB);
    QWidget::setTabOrder(logB, nr4);
    QWidget::setTabOrder(nr4, nr5);
    QWidget::setTabOrder(nr5, nr6);
    QWidget::setTabOrder(nr6, osszeadas);
    QWidget::setTabOrder(osszeadas, mr);
    QWidget::setTabOrder(mr, ms);
    QWidget::setTabOrder(ms, ctg);
    QWidget::setTabOrder(ctg, arcctg);
    QWidget::setTabOrder(arcctg, invers);
    QWidget::setTabOrder(invers, nr7);
    QWidget::setTabOrder(nr7, nr8);
    QWidget::setTabOrder(nr8, nr9);
    QWidget::setTabOrder(nr9, mc);
    QWidget::setTabOrder(mc, piB);
    QWidget::setTabOrder(piB, factor);
    QWidget::setTabOrder(factor, nr0);
    QWidget::setTabOrder(nr0, pont);
    QWidget::setTabOrder(pont, egyenlo);
    QWidget::setTabOrder(egyenlo, hatvany);
    QWidget::setTabOrder(hatvany, gyok);

    retranslateUi(Calculator);

    QSize size(542, 308);
    size = size.expandedTo(Calculator->minimumSizeHint());
    Calculator->resize(size);


    QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
    Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", 0, QApplication::UnicodeUTF8));
    disp->setText(QApplication::translate("Calculator", "0", 0, QApplication::UnicodeUTF8));
    arcctg->setText(QApplication::translate("Calculator", "arcctg", 0, QApplication::UnicodeUTF8));
    sinB->setText(QApplication::translate("Calculator", "sin", 0, QApplication::UnicodeUTF8));
    arcsin->setText(QApplication::translate("Calculator", "arcsin", 0, QApplication::UnicodeUTF8));
    ln->setText(QApplication::translate("Calculator", "ln", 0, QApplication::UnicodeUTF8));
    osztas->setText(QApplication::translate("Calculator", "/", 0, QApplication::UnicodeUTF8));
    szorzas->setText(QApplication::translate("Calculator", "X", 0, QApplication::UnicodeUTF8));
    percent->setText(QApplication::translate("Calculator", "%", 0, QApplication::UnicodeUTF8));
    clear->setText(QApplication::translate("Calculator", "Clear", 0, QApplication::UnicodeUTF8));
    backspace->setText(QApplication::translate("Calculator", "BackSpace", 0, QApplication::UnicodeUTF8));
    kivonas->setText(QApplication::translate("Calculator", "-", 0, QApplication::UnicodeUTF8));
    nr2->setText(QApplication::translate("Calculator", "2", 0, QApplication::UnicodeUTF8));
    nr3->setText(QApplication::translate("Calculator", "3", 0, QApplication::UnicodeUTF8));
    nr1->setText(QApplication::translate("Calculator", "1", 0, QApplication::UnicodeUTF8));
    lg->setText(QApplication::translate("Calculator", "lg", 0, QApplication::UnicodeUTF8));
    arccos->setText(QApplication::translate("Calculator", "arccos", 0, QApplication::UnicodeUTF8));
    cosB->setText(QApplication::translate("Calculator", "cos", 0, QApplication::UnicodeUTF8));
    tg->setText(QApplication::translate("Calculator", "tg", 0, QApplication::UnicodeUTF8));
    arctg->setText(QApplication::translate("Calculator", "arctg", 0, QApplication::UnicodeUTF8));
    logB->setText(QApplication::translate("Calculator", "log", 0, QApplication::UnicodeUTF8));
    nr4->setText(QApplication::translate("Calculator", "4", 0, QApplication::UnicodeUTF8));
    nr5->setText(QApplication::translate("Calculator", "5", 0, QApplication::UnicodeUTF8));
    nr6->setText(QApplication::translate("Calculator", "6", 0, QApplication::UnicodeUTF8));
    mr->setText(QApplication::translate("Calculator", "MR", 0, QApplication::UnicodeUTF8));
    ms->setText(QApplication::translate("Calculator", "MS", 0, QApplication::UnicodeUTF8));
    m_->setText(QApplication::translate("Calculator", "M+", 0, QApplication::UnicodeUTF8));
    mc->setText(QApplication::translate("Calculator", "MC", 0, QApplication::UnicodeUTF8));
    nr9->setText(QApplication::translate("Calculator", "9", 0, QApplication::UnicodeUTF8));
    nr8->setText(QApplication::translate("Calculator", "8", 0, QApplication::UnicodeUTF8));
    nr7->setText(QApplication::translate("Calculator", "7", 0, QApplication::UnicodeUTF8));
    invers->setText(QApplication::translate("Calculator", "1/x", 0, QApplication::UnicodeUTF8));
    ctg->setText(QApplication::translate("Calculator", "ctg", 0, QApplication::UnicodeUTF8));
    piB->setText(QApplication::translate("Calculator", "\317\200", 0, QApplication::UnicodeUTF8));
    factor->setText(QApplication::translate("Calculator", "x!", 0, QApplication::UnicodeUTF8));
    nr0->setText(QApplication::translate("Calculator", "0", 0, QApplication::UnicodeUTF8));
    pont->setText(QApplication::translate("Calculator", ".", 0, QApplication::UnicodeUTF8));
    egyenlo->setText(QApplication::translate("Calculator", "=", 0, QApplication::UnicodeUTF8));
    hatvany->setText(QApplication::translate("Calculator", "x^y", 0, QApplication::UnicodeUTF8));
    gyok->setText(QApplication::translate("Calculator", "\342\210\232x", 0, QApplication::UnicodeUTF8));
    osszeadas->setText(QApplication::translate("Calculator", "+", 0, QApplication::UnicodeUTF8));
    plusminus->setText(QApplication::translate("Calculator", "\302\261", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Calculator);
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

#endif // UI_CALCULATOR_H
