#include "calculator.h"
#include <math.h>
#include <QLCDNumber>
#include <cstdlib>
#include <iostream>
#include <QKeyEvent>
#include <QString>



using namespace std;

//initiate variables
float tag1=0;
float tag2=0;
float eredmeny=0;
bool pls=0;
bool mns=0;
bool szor=0;
bool oszt=0;
bool cleared=0;
bool hatv=0;
bool logAct=0;
float memory=0;


Calculator :: Calculator()
{
  setupUi(this); 
  
  QPushButton* v[10] = {nr0,nr1,nr2,nr3,nr4,nr5,nr6,nr7,nr8,nr9};
  for(int i=0;i<=9;i++)
  {
   QObject::connect(v[i],SIGNAL(clicked()),this,SLOT(setV()));
  }
   QObject::connect(clear,SIGNAL(clicked()),this,SLOT(cleard()));
   QObject::connect(osszeadas,SIGNAL(clicked()),this,SLOT(addV()));
   QObject::connect(kivonas,SIGNAL(clicked()),this,SLOT(substractV()));
   QObject::connect(szorzas,SIGNAL(clicked()),this,SLOT(multiplyV()));
   QObject::connect(osztas,SIGNAL(clicked()),this,SLOT(divideV()));
   QObject::connect(egyenlo,SIGNAL(clicked()),this,SLOT(szamol()));
   QObject::connect(backspace,SIGNAL(clicked()),this,SLOT(BackSpace()));
   QObject::connect(gyok,SIGNAL(clicked()),this,SLOT(Gyok()));
   QObject::connect(hatvany,SIGNAL(clicked()),this,SLOT(hatvny()));
   QObject::connect(mc,SIGNAL(clicked()),this,SLOT(clearMemory()));
   QObject::connect(mr,SIGNAL(clicked()),this,SLOT(readMemory()));
   QObject::connect(m_,SIGNAL(clicked()),this,SLOT(addToMemory()));
   QObject::connect(ms,SIGNAL(clicked()),this,SLOT(setMemory()));
   QObject::connect(pont,SIGNAL(clicked()),this,SLOT(addDot()));
   QObject::connect(percent,SIGNAL(clicked()),this,SLOT(calculatePercent()));
   QObject::connect(sinB,SIGNAL(clicked()),this,SLOT(cSin()));
   QObject::connect(arcsin,SIGNAL(clicked()),this,SLOT(caSin()));
   QObject::connect(cosB,SIGNAL(clicked()),this,SLOT(cCos()));
   QObject::connect(arccos,SIGNAL(clicked()),this,SLOT(caCos()));
   QObject::connect(tg,SIGNAL(clicked()),this,SLOT(cTg()));
   QObject::connect(arctg,SIGNAL(clicked()),this,SLOT(caTg()));
   QObject::connect(ctg,SIGNAL(clicked()),this,SLOT(cCtg()));
   QObject::connect(arcctg,SIGNAL(clicked()),this,SLOT(caCtg()));
   QObject::connect(piB,SIGNAL(clicked()),this,SLOT(DispPI()));
   QObject::connect(logB,SIGNAL(clicked()),this,SLOT(CalculateLog()));
   QObject::connect(ln,SIGNAL(clicked()),this,SLOT(CalculateLn()));
   QObject::connect(lg,SIGNAL(clicked()),this,SLOT(CalculateLg()));
   QObject::connect(factor,SIGNAL(clicked()),this,SLOT(CalculateFactorial()));  
   QObject::connect(invers,SIGNAL(clicked()),this,SLOT(CalculateInvers())); 
   QObject::connect(plusminus,SIGNAL(clicked()),this,SLOT(changePM())); 
}

void Calculator :: setV()
{  
  if(((pls)||(mns)||(szor)||(oszt)||(hatv)||(logAct))&&(cleared==0)){
                                                                    disp->clear();
                                                                    cleared=1;
                                                                  };
  if(disp->text()=="0"){disp->clear();};
  QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
  int digitValue = clickedButton->text().toInt();
  if (disp->text() == "0" && digitValue == 0.0)
         return;
  disp->setText(disp->text() + QString::number(digitValue));
}

void Calculator :: cleard()
{
 disp->setText("0");
 tag1=0;
 tag2=0;
 eredmeny=0;
 pls=0;
 mns=0;
 szor=0;
 oszt=0;
 cleared=0;
 hatv=0; 
 logAct=0;
}

void Calculator::addDot()
{
 QString a=disp->text();
 if(a.indexOf(".")==-1){
 disp->setText(disp->text() + ".");};
;
}

void Calculator::addV()
{
  tag1 = disp->text().toDouble();
  cleared=0;
  pls=1;
}

void Calculator::substractV()
{
  tag1 = disp->text().toDouble();
  cleared=0;
  mns=1;
}

void Calculator::multiplyV()
{
  tag1 = disp->text().toDouble();
  cleared=0;
  szor=1;
}

void Calculator::divideV()
{
  tag1 = disp->text().toDouble();
  cleared=0;
  oszt=1;
}

void Calculator::hatvny()
{
  tag1 = disp->text().toLong();
  cleared=0;
  hatv=1;
}

void Calculator::CalculateLog()
{
  tag1 = disp->text().toDouble();
  cleared=0;
  logAct=1;
  
}

void Calculator :: szamol()
{
 if(pls){
          tag2 = disp->text().toDouble();
          eredmeny=tag1+tag2;
          disp->setText(QString::number(eredmeny));
        }
 if(mns){
         tag2 = disp->text().toDouble();
         eredmeny=tag1-tag2;
         disp->setText(QString::number(eredmeny));
        }
 if(szor){
          tag2 = disp->text().toDouble();
          eredmeny=tag1*tag2;
          disp->setText(QString::number(eredmeny));
         }
 if(oszt){
          tag2 = disp->text().toDouble();
          eredmeny=tag1/tag2;
          disp->setText(QString::number(eredmeny));
         }
 if(logAct)
         {
          double tag2 = disp->text().toDouble();
          double eredmeny=log(tag1)/log(tag2);
          disp->setText(QString::number(eredmeny));
         }
 if(hatv){
           tag2 = disp->text().toLong();
           eredmeny=1;
           for(int x=0;x<tag2;x++)
            {
              eredmeny=eredmeny*tag1;
            }
           disp->setText(QString::number(eredmeny)); 
         }
//clear all operations
 pls=0;
 mns=0;
 szor=0;
 oszt=0;
 hatv=0;
 logAct=0;
}


void Calculator::BackSpace()
{
 int a = (disp->text().toLong())/10;
 disp->setText(QString::number(a));
}

void Calculator::Gyok()
{
 int a = disp->text().toLong();
 disp-> setText(QString::number(sqrt(a)));
}

//Key bindings

void Calculator::keyPressEvent(QKeyEvent *event)
 {
     switch (event->key()) {
     case Qt::Key_0:
         nr0->click();
         break;
     case Qt::Key_1:
         nr1->click();
         break;
     case Qt::Key_2:
         nr2->click();
         break;
     case Qt::Key_3:
         nr3->click();
         break;
     case Qt::Key_4:
         nr4->click();
         break;
     case Qt::Key_5:
         nr5->click();
         break;
     case Qt::Key_6:
         nr6->click();
         break;
     case Qt::Key_7:
         nr7->click();
         break;
     case Qt::Key_8:
         nr8->click();
         break;
     case Qt::Key_9:
         nr9->click();
         break;
     case Qt::Key_Plus:
         osszeadas->click();
         break;
     case Qt::Key_Minus:
         kivonas->click();
         break;
     case Qt::Key_Asterisk:
         szorzas->click();
         break;
     case Qt::Key_Slash:
         osztas->click();
         break;
     case Qt::Key_Enter:
         egyenlo->click();
         break;
     case Qt::Key_Escape:
         clear->click();
         break;
     case Qt::Key_Backspace:
         backspace->click();
         break;
     case Qt::Key_S:
         gyok->click();
         break;
     case Qt::Key_P:
         hatvany->click();
         break;
     case Qt::Key_Comma:
         pont->click();
         break;
     default:
         QWidget::keyPressEvent(event);
     }
 }

void Calculator::setMemory()
{
 memory = disp->text().toDouble();
}

void Calculator::readMemory()
{
 if (memory!=0){
 disp->setText(QString::number(memory));};
}

void Calculator::clearMemory()
{
 memory=0;
}

void Calculator::addToMemory()
{
 double a = disp->text().toDouble();
 memory = memory + a;
 
}

void Calculator::setSTray()
{
 tray = new QSystemTrayIcon( this );
 tray->setIcon ( QIcon(":/icon.png") );
 connect(tray, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
this,SLOT(slotTrayActivated(QSystemTrayIcon::ActivationReason)));
 tray->show();
}

void Calculator::slotTrayActivated(QSystemTrayIcon::ActivationReason reason)
{
	if (reason == QSystemTrayIcon::Trigger)
		slotToggleVisibility();
}

void Calculator::slotToggleVisibility()
{
	if(isHidden())
	{
		show();
		if(isMinimized())
		{
			if(isMaximized())
				showMaximized();
			else
				showNormal();
		}
		raise();
		activateWindow();
	}
	else
	{
		hide();
	}
}

void Calculator::closeEvent(QCloseEvent *e)
{
	e->accept();
	qApp->quit();
}

void Calculator::calculatePercent()
{
  
  if(szor){
          tag2 = disp->text().toDouble();
          eredmeny=(tag1*tag2)/100;
          disp->setText(QString::number(eredmeny));
          szor=false;
         }
  if(pls){
          tag2 = disp->text().toDouble();
          eredmeny=tag1+(tag1*tag2)/100;
          disp->setText(QString::number(eredmeny));
         }
   
}

void Calculator::cSin()
{
 double tag1 = disp->text().toDouble();
 double eredmeny=sin(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::caSin()
{
 double tag1 = disp->text().toDouble();
         double eredmeny=asin(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::cCos()
{
 double tag1 = disp->text().toDouble();
         double eredmeny=cos(tag1);
          disp->setText(QString::number(eredmeny));
}
void Calculator::caCos()
{
 double tag1 = disp->text().toDouble();
         double eredmeny=acos(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::cTg()
{
 double tag1 = disp->text().toDouble();
         double eredmeny=tan(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::caTg()
{
 double tag1 = disp->text().toDouble();
         double eredmeny=atan(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::cCtg()
{
 double tag1 = disp->text().toDouble();
         double eredmeny=1/tan(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::caCtg()
{
 double tag1 = disp->text().toDouble();
         double eredmeny= M_PI_2 - atan(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::DispPI()
{
  disp->setText(QString::number(M_PI));
}

void Calculator::CalculateLn()
{
  double tag1 = disp->text().toDouble();
         double eredmeny= log(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::CalculateLg()
{
  double tag1 = disp->text().toDouble();
         double eredmeny= log10(tag1);
          disp->setText(QString::number(eredmeny));
}

void Calculator::CalculateFactorial() 
{
 unsigned long tag1 = disp->text().toLong();
 unsigned long eredmeny = 1;
   for (unsigned int i = 1; i<=tag1; i++)
     {
      eredmeny = eredmeny*i;
     }
 disp->setText(QString::number(eredmeny));
}

void Calculator::CalculateInvers()
{
 double tag1 = disp->text().toDouble();
 double eredmeny= 1/tag1;
 disp->setText(QString::number(eredmeny));

}

void Calculator::changePM()
{
 double tag1 = disp->text().toDouble();
 double eredmeny;
 if(tag1>0)
  {
   eredmeny= -tag1;
  }
 else
  {
   eredmeny=fabs(tag1);
  }
 disp->setText(QString::number(eredmeny));
}
