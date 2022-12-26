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

class MainInterface
{

public: //Методы
    MainInterface(){}
    ~MainInterface() {}
    void interactMain();

};



#endif // BEKKER_H
