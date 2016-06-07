#include <QApplication>
#include <calculator.cpp>

int main(int argc,char *argv[])
{ 
  QApplication app(argc,argv);
  Calculator *calc = new Calculator;
  calc -> show();
  calc->setSTray();
  return app.exec();
}

