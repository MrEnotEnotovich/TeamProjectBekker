#include "products.h"


vector <Cake> vCake;
vector <Pastry> vPastry;
vector <Bread> vBread;
vector <Order> vOrd;
vector <ProfitRecord> vProf;

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

void ProfitRecord::InputProfit()
{
    int match;
    vProf.clear();
    for (unsigned int j = 0; j<vOrd.size() ; j++ ) //проходим по вектору указателей на обьекты заказов(сколько заказов столько и выполнится for)
        {
            match = 0;
            for(unsigned int i = 0; i<vProf.size() ; i++ ) //проходим по вектору указателей на обьекты прибыли(сколько записей прибыли столько и выполнится)
                {
                    if(vProf[i].Year == vOrd[j].Year) //ищем в векторе прибыли обьект с таким же годом,как в векторе заказов
                    {
                        match = 1;  // если существует вектора прибыли с таким годом,то записываем в него данные
                        switch(vOrd[j].Month)
                        {
                            case 1://суммируем в конкретный месяц вектора прибыли <- поле прибыли с вектора заказов
                                vProf[i].Jan += vOrd[j].Profit;
                            break;
                            case 2:
                                vProf[i].Feb += vOrd[j].Profit;
                            break;
                            case 3:
                                vProf[i].Mar += vOrd[j].Profit;
                            break;
                            case 4:
                                vProf[i].Apr += vOrd[j].Profit;
                            break;
                            case 5:
                                vProf[i].May += vOrd[j].Profit;
                            break;
                            case 6:
                                vProf[i].Jun += vOrd[j].Profit;
                            break;
                            case 7:
                                vProf[i].Jul += vOrd[j].Profit;
                            break;
                            case 8:
                                vProf[i].Aug += vOrd[j].Profit;
                            break;
                            case 9:
                                vProf[i].Sep += vOrd[j].Profit;
                            break;
                            case 10:
                                vProf[i].Oct += vOrd[j].Profit;
                            break;
                            case 11:
                                vProf[i].Nov += vOrd[j].Profit;
                            break;
                            case 12:
                                vProf[i].Dec += vOrd[j].Profit;
                            break;
                        }//конец switch(vOrd.Month)
                    }
                }
            if(match == 0) //если не существует вектора прибыли в данном году,введенный пользователем,то создаем его и записываем в конкретный месяц прибыль
            {
                switch(vOrd[j].Month)
                {
                    case 1:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,vOrd[j].Profit,0,0,0,0,0,0,0,0,0,0,0));
                    break;
                    case 2:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,vOrd[j].Profit,0,0,0,0,0,0,0,0,0,0));
                    break;
                    case 3:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,vOrd[j].Profit,0,0,0,0,0,0,0,0,0));
                    break;
                    case 4:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,vOrd[j].Profit,0,0,0,0,0,0,0,0));
                    break;
                    case 5:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,vOrd[j].Profit,0,0,0,0,0,0,0));
                    break;
                    case 6:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,vOrd[j].Profit,0,0,0,0,0,0));
                    break;
                    case 7:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,0,vOrd[j].Profit,0,0,0,0,0));
                    break;
                    case 8:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,0,0,vOrd[j].Profit,0,0,0,0));
                    break;
                    case 9:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,0,0,0,vOrd[j].Profit,0,0,0));
                    break;
                    case 10:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,0,0,0,0,vOrd[j].Profit,0,0));
                    break;
                    case 11:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,0,0,0,0,0,vOrd[j].Profit,0));
                    break;
                    case 12:
                        vProf.push_back(ProfitRecord(vOrd[j].Year,0,0,0,0,0,0,0,0,0,0,0,vOrd[j].Profit));
                    break;
                }//конец switch(vOrd.Month)
            }
        }

}
