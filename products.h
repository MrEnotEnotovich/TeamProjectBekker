#ifndef PRODUCTS
#define PRODUCTS

#include <iostream>
#include <string>

using namespace std;

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
    Cake(string ,int ,float ,float );
    ~Cake(){}//broken da boken

    void addCake();
    void CakeList();
};


//производный класс Pastry от базового Product
class Pastry : public Product
{
public:
    Pastry(){}
    Pastry(string ,int ,float ,float );
   ~Pastry(){}

    void addPastry();
    void PastryList();
};


//производный класс Bread от базового Product
class Bread : public Product
{
public:
    Bread(){}
    Bread(string ,int ,float ,float );
    ~Bread(){}

    void addBread();
    void BreadList();
};

//производный класс Order от базового Product(чтобы иметь доступ к полям класса Product)
//Добавляет возможность заказа из списка продуктов
class Order : public Product
{

public:
    int Year,Month;
    float Sum;
    float Profit;

    Order(){}
    ~Order(){}

};

#endif // PRODUCTS

