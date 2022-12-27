#include "products.h"

Cake::Cake(string Name,int Weight,float CostPrice,float Price){
    this->Name=Name;
    this->Weight=Weight;
    this->CostPrice=CostPrice;
    this->Price=Price;
}

Pastry::Pastry(string Name,int Weight,float CostPrice,float Price){
    this->Name=Name;
    this->Weight=Weight;
    this->CostPrice=CostPrice;
    this->Price=Price;
}

Bread::Bread(string Name,int Weight,float CostPrice,float Price){
    this->Name=Name;
    this->Weight=Weight;
    this->CostPrice=CostPrice;
    this->Price=Price;
}

Order::Order(int Year,int Month,float Sum ,float Profit){
    this->Year=Year;
    this->Month=Month;
    this->Sum=Sum;
    this->Profit=Profit;
}

