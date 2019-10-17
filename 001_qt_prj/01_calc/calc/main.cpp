
#include <QApplication>
#include "qcalculatorui.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    while(1);
    int ret = -1;
    QCalculatorUI* cal = QCalculatorUI::NewInstance();
    if(cal != NULL){
        cal->show();
        ret =  a.exec();
        delete cal;
    return ret;
}

