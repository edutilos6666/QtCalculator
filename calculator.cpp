#include "calculator.h"
   Calculator::Calculator(QWidget* parent ): QMainWindow(parent)  {
      configureWindow();   
} 
     Calculator::~Calculator() {
   qDebug() << "Calculator instance was destroyed." << endl ; 
}
   void  Calculator::configureWindow() {
    this->resize(500, 500); 
   this->setWindowTitle("Simple Calculator Example"); 
       mainWidget = new QWidget(this); 
    this->setCentralWidget(mainWidget); 

   mainLayout = new QVBoxLayout(); 
   mainWidget->setLayout(mainLayout); 
      
  addWidgets(); 
  registerEvents(); 
  
}

   /*

   QVBoxLayout *mainLayout ; 
   QWidget *mainWidget ; 
   QLabel *lblTitle; 
   QGridLayout *controlLayout ; 
   QPushButton *btn0 , *btn1, *btn2, *btn3 , *btn4 , *btn5 , 
  *btn6 , *btn7, *btn8 , *btn9 , *btnAdd *btnSubtract , 
   *btnMultiply , *btnDivide , *btnEqual , *btnClear; 
 
*/
 
    void  Calculator::addWidgets() {
   QWidget *controlWidget = new QWidget(); 
     controlLayout = new QGridLayout(); 
    controlWidget->setLayout(controlLayout);
    mainLayout->addWidget(controlWidget);  

  //title 
  lblTitle = new QLabel("your calculator"); 
  mainLayout->addWidget(lblTitle);
  //editDisplay 
   editDisplay = new QPlainTextEdit(); 
  mainLayout->addWidget(editDisplay);  
  //controlWidget 
   mainLayout->addWidget(controlWidget); 
  //controls
   btn0 = new QPushButton("0"); 
   controlLayout->addWidget(btn0, 0 , 0); 
   btn1  = new QPushButton("1"); 
   controlLayout->addWidget(btn1, 0 , 1); 
  btn2 = new QPushButton("2"); 
  controlLayout->addWidget(btn2, 0, 2); 
   btn3 = new QPushButton("3"); 
   controlLayout->addWidget(btn3, 0, 3); 
   btn4 = new QPushButton("4"); 
  controlLayout->addWidget(btn4, 1, 0 ); 
   btn5 = new QPushButton("5"); 
  controlLayout->addWidget(btn5, 1, 1); 
   btn6 = new QPushButton("6"); 
  controlLayout->addWidget(btn6, 1, 2); 
  btn7 = new QPushButton("7"); 
  controlLayout->addWidget(btn7 , 1, 3); 
  btn8 = new QPushButton("8"); 
  controlLayout->addWidget(btn8, 2, 0); 
   btn9 = new QPushButton("9"); 
  controlLayout->addWidget(btn9, 2, 1); 
  btnAdd = new QPushButton("+"); 
  controlLayout->addWidget(btnAdd, 2,2); 
   btnSubtract = new QPushButton("-"); 
   controlLayout->addWidget(btnSubtract , 2, 3) ;  
  btnMultiply = new QPushButton("*"); 
   controlLayout->addWidget(btnMultiply ,3, 0); 
  btnDivide = new QPushButton("/"); 
  controlLayout->addWidget(btnDivide , 3,1); 
   btnEqual = new QPushButton("="); 
   controlLayout->addWidget(btnEqual, 3, 2); 
   btnClear = new QPushButton("Clear"); 
  controlLayout->addWidget(btnClear , 3, 3); 
  
} 
   void  Calculator::registerEvents() {
    QObject::connect(btn0, SIGNAL(clicked()), this , SLOT(onBtn0())); 
    QObject::connect(btn1, SIGNAL(clicked()), this , SLOT(onBtn1())); 
    QObject::connect(btn2, SIGNAL(clicked()), this , SLOT(onBtn2())); 
    QObject::connect(btn3, SIGNAL(clicked()), this , SLOT(onBtn3())); 
    QObject::connect(btn4, SIGNAL(clicked()), this , SLOT(onBtn4())); 
    QObject::connect(btn5, SIGNAL(clicked()), this , SLOT(onBtn5())); 
    QObject::connect(btn6, SIGNAL(clicked()), this , SLOT(onBtn6())); 
    QObject::connect(btn7, SIGNAL(clicked()), this , SLOT(onBtn7())); 
    QObject::connect(btn8, SIGNAL(clicked()), this , SLOT(onBtn8())); 
    QObject::connect(btn9, SIGNAL(clicked()), this , SLOT(onBtn9())); 
    QObject::connect(btnAdd, SIGNAL(clicked()), this , SLOT(onBtnAdd())); 
    QObject::connect(btnSubtract, SIGNAL(clicked()), this , SLOT(onBtnSubtract())); 
    QObject::connect(btnMultiply, SIGNAL(clicked()), this , SLOT(onBtnMultiply())); 
    QObject::connect(btnDivide, SIGNAL(clicked()), this , SLOT(onBtnDivide())); 
    QObject::connect(btnEqual, SIGNAL(clicked()), this , SLOT(onBtnEqual())); 
    QObject::connect(btnClear, SIGNAL(clicked()), this , SLOT(onBtnClear())); 
}
   void  Calculator::onBtn0() {
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << "0"; 
     editDisplay->document()->setPlainText(str);  
}
   void  Calculator::onBtn1(){
    QString str = editDisplay->document()->toPlainText(); 
   QTextStream out(&str); 
   out << "1"; 
   editDisplay->document()->setPlainText(str); 
}
   void  Calculator::onBtn2(){
     QString str = editDisplay->document()->toPlainText(); 
   QTextStream out(&str); 
   out << "2"; 
   editDisplay->document()->setPlainText(str); 
} 
   void  Calculator::onBtn3(){
    QString str = editDisplay->document()->toPlainText(); 
   QTextStream out(&str); 
   out << "3"; 
   editDisplay->document()->setPlainText(str); 
}
   void  Calculator::onBtn4(){
    QString str = editDisplay->document()->toPlainText(); 
   QTextStream out(&str); 
    out << "4"; 
  editDisplay->document()->setPlainText(str); 
}
   void  Calculator::onBtn5(){
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << "5"; 
     editDisplay->document()->setPlainText(str);  

}
   void  Calculator::onBtn6(){

     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << "6"; 
     editDisplay->document()->setPlainText(str);  
}
   void  Calculator::onBtn7(){

     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << "7"; 
     editDisplay->document()->setPlainText(str);  
}
   void  Calculator::onBtn8(){
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << "8"; 
     editDisplay->document()->setPlainText(str);  

}
   void  Calculator::onBtn9(){
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << "9"; 
     editDisplay->document()->setPlainText(str);  

}
   void  Calculator::onBtnAdd(){
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << " + "; 
     editDisplay->document()->setPlainText(str);  

} 
   void  Calculator::onBtnSubtract() {
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << " - "; 
     editDisplay->document()->setPlainText(str);  

}
   void  Calculator::onBtnMultiply() {
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << " * "; 
     editDisplay->document()->setPlainText(str);  

}
   void  Calculator::onBtnDivide() {
     QString str = editDisplay->document()->toPlainText(); 
     QTextStream out(&str); 
     out << " / "; 
     editDisplay->document()->setPlainText(str);  

}
   void  Calculator::onBtnEqual() {
  try {
     QString pattern = "\\s+"; 
      QRegExp regex(pattern); 
QString str = editDisplay->document()->toPlainText(); 
   QStringList splitted =  str.split(regex);
   qDebug() << splitted ; 
 
QVector<QString> operators ; 
QVector<double> operands ; 
   for(int i=0; i< splitted.size() -2; i+=2) {
    operands.push_back(splitted.at(i).toDouble()); 
   operators.push_back(splitted.at(i+1)); 
}
   operands.push_back(splitted.at(splitted.size()-1).toDouble()); 
 
  double res ; 
   while(!operands.isEmpty()) {
     QString op  = operators.takeFirst(); 
   double n1 = operands.takeFirst(), 
   n2 = operands.takeFirst(); 
 if(op == "+")  {
     res = n1 + n2 ; 
  } else if(op == "-") res = n1 - n2 ; 
   else if(op == "*") res = n1 * n2 ; 
   else if(op == "/") res = n1 / n2 ; 


      operands.push_back(res);        
}
   
QTextStream out(&str); 
 out << " = " << res ; 
  editDisplay->document()->setPlainText(str);   
 
    
}  catch(exception &ex) {
     qDebug() << ex.what() ; 
     editDisplay->document()->setPlainText(QString::fromStdString(ex.what())); 
} 
}
   void  Calculator::onBtnClear() {
   editDisplay->document()->setPlainText(""); 
}
