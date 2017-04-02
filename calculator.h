#ifndef CALCULATOR_H 
#define CALCULATOR_H 
 #include <QMainWindow> 
 #include <QPlainTextEdit> 
 #include <QLabel> 
 #include <QPushButton> 
 #include <QVBoxLayout> 
 #include <QGridLayout> 
 #include <QWidget> 
#include <QString> 
 #include <QTextStream> 
 #include <iostream> 
#include <string> 
 #include <QDebug> 
 #include <QVector> 
#include <QRegExp>
#include <QStringList>
#include <QMessageBox>
using namespace std ; 


class Calculator : public QMainWindow {
Q_OBJECT
  public: 
    Calculator(QWidget* parent = 0) ; 
    ~Calculator(); 
   void configureWindow(); 
    void addWidgets(); 
   void registerEvents(); 
  signals: 

 public slots: 
   void onBtn0(); 
   void onBtn1(); 
   void onBtn2(); 
   void onBtn3(); 
   void onBtn4(); 
   void onBtn5(); 
   void onBtn6(); 
   void onBtn7(); 
   void onBtn8(); 
   void onBtn9(); 
   void onBtnAdd(); 
   void onBtnSubtract(); 
   void onBtnMultiply(); 
   void onBtnDivide(); 
   void onBtnEqual(); 
   void onBtnClear(); 
 public: 
   QVBoxLayout *mainLayout ; 
   QWidget *mainWidget ; 
   QLabel *lblTitle; 
   QPlainTextEdit *editDisplay; 
   QGridLayout *controlLayout ; 
   QPushButton *btn0 , *btn1, *btn2, *btn3 , *btn4 , *btn5 , 
  *btn6 , *btn7, *btn8 , *btn9 , *btnAdd , *btnSubtract , 
   *btnMultiply , *btnDivide , *btnEqual , *btnClear; 
}; 

#endif 
