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

//Базовый класс Product
class Product
{
public:
    string Name;
    int Weight; // вес
    float CostPrice; //себестоимость
    float Price; //рыночная стоимость(на полке на магазина)
};

//производный класс Cake от базового Product
class Cake : public Product
{
public:
    Cake(){}
    ~Cake(){}
};


//производный класс Pastry от базового Product
class Pastry : public Product
{
public:
    Pastry(){}
   ~Pastry(){}
};


//производный класс Bread от базового Product
class Bread : public Product
{
public:
    Bread(){}
    ~Bread(){}
};

#endif // BEKKER_H
