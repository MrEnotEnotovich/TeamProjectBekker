#include "products.h"


vector <Cake> vCake;
vector <Pastry> vPastry;
vector <Bread> vBread;

void ProdInit() //создания базового списка продуктов
{
    string *CName = new string;

    //Торты
    *CName = "Honey cake";
    vCake.push_back(Cake(*CName,350,200,300)); //название/вес/себестоимость/ЦенаНаПолке
    *CName = "Napoleon";
    vCake.push_back(Cake(*CName,300,220,350));
    *CName = "Cherry Cake";
    vCake.push_back(Cake(*CName,450,300,400));

    //Хлеб
    *CName = "White";
    vBread.push_back(Bread(*CName,200,21,38));
    *CName = "Wheat";
    vBread.push_back(Bread(*CName,150,74,120));
    *CName = "Marble";
    vBread.push_back(Bread(*CName,210,50,100));

    //Выпечка
    *CName = "Hot dog";
    vPastry.push_back(Pastry(*CName,100,50,100));
    *CName = "Donut";
    vPastry.push_back(Pastry(*CName,100,50,100));
    *CName = "Croissant";
    vPastry.push_back(Pastry(*CName,100,50,100));
    *CName = "Swiss roll";
    vPastry.push_back(Pastry(*CName,100,50,100));
    *CName = "Begel";
    vPastry.push_back(Pastry(*CName,100,50,100));

    delete CName;
}
