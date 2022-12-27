#ifndef BEKKER_H
#define BEKKER_H

#include <iostream>
#include <string>

using namespace std;


class AnnualReport
{
protected:
    int Year;
    int Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec;
};

class ExpenseRecord :  public AnnualReport//месяц должен быть
{
public:

    ExpenseRecord(){}
    ExpenseRecord(int ,float ,float ,float ,float ,float ,float ,float ,float ,float ,float ,float ,float );
    ~ExpenseRecord(){}

    void InputExpense();
    void display();
};

class MainInterface
{

public: //Методы
    MainInterface(){}
    ~MainInterface() {}
    void interactMain();

};



#endif // BEKKER_H
