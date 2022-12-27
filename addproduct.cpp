#include "products.h"


vector <Cake> vCake;
vector <Pastry> vPastry;
vector <Bread> vBread;
vector <Order> vOrd;
vector <ProfitRecord> vProf;

void Cake::addCake() //добавление новых позиций
{
    string *CName = new string;
    int *CWeight = new int;
    float *CCostPrice = new float;
    float *CPrice = new float;

    cout<<"Enter Cake name:\n";
    cin>>*CName;
    cout<<"\nEnter Cake weight:\n";
    cin>>*CWeight;
    cout<<"\nEnter Cake cost price:\n";
    cin>>*CCostPrice;
    cout<<"\nEnter Cake price:\n";
    cin>>*CPrice;
    vCake.push_back(Cake(*CName,*CWeight,*CCostPrice,*CPrice));
    delete CName;
    delete CWeight;
    delete CCostPrice;
    delete CPrice;
}

void Bread::addBread()
{
    string *CName = new string;
    int *CWeight = new int;
    float *CCostPrice = new float;
    float *CPrice = new float;

    cout<<"Enter Bread name:\n";
    cin>>*CName;
    cout<<"\nEnter Bread weight:\n";
    cin>>*CWeight;
    cout<<"\nEnter Bread cost price:\n";
    cin>>*CCostPrice;
    cout<<"\nEnter Bread price:\n";
    cin>>*CPrice;
    vBread.push_back(Bread(*CName,*CWeight,*CCostPrice,*CPrice));
    delete CName;
    delete CWeight;
    delete CCostPrice;
    delete CPrice;
}

void Pastry::addPastry()
{
    string *CName = new string;
    int *CWeight = new int;
    float *CCostPrice = new float;
    float *CPrice = new float;

    cout<<"Enter Pastry name:\n";
    cin>>*CName;
    cout<<"\nEnter Pastry weight:\n";
    cin>>*CWeight;
    cout<<"\nEnter Pastry cost price:\n";
    cin>>*CCostPrice;
    cout<<"\nEnter Pastry price:\n";
    cin>>*CPrice;
    vPastry.push_back(Pastry(*CName,*CWeight,*CCostPrice,*CPrice));
    delete CName;
    delete CWeight;
    delete CCostPrice;
    delete CPrice;
}

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

void Cake::CakeList()
{
    cout << setiosflags(ios::left);//выравнивание по левой части
    cout<< setw(15) <<"-----------------Cakes-----------------"<<endl;
    // setw() устанавливает ширину следующего ввода-вывода равной переданному интегральному аргументу
    for (unsigned int j = 0; j<vCake.size(); j++)
    {
        cout<< setw(3) << j << setw(15) << vCake[j].Name << setw(15) << vCake[j].Weight << setw(5) << vCake[j].Price <<endl;
    }
}

void Bread::BreadList()
{
    cout << setiosflags(ios::left);//выравнивание по левой части
    cout<< setw(15) <<"\n-----------------Bread-----------------"<<endl;

    for (unsigned int j = 0; j<vBread.size(); j++)
    {
        cout<< setw(3) << j << setw(15) << vBread[j].Name << setw(15) << vBread[j].Weight << setw(5) << vBread[j].Price <<endl;
    }
}

void Pastry::PastryList()
{
    cout << setiosflags(ios::left);//выравнивание по левой части
    cout<< setw(15) <<"\n-----------------Pastry-----------------"<<endl;

    for (unsigned int j = 0; j<vPastry.size(); j++)
    {
        cout << setw(3) << j << setw(15) << vPastry[j].Name << setw(15) << vPastry[j].Weight << setw(5) << vPastry[j].Price <<endl;
    }
}

void Order::AddOrder() //метод добавления заказа класса "заказ"
{
    int Year,Month,no,match,kol; //параметры заказа год/месяц/номер/флаг match/количество
    float Sum = 0; //обнуляем сумму
    float Profit = 0; // обнуляем прибыль
    char memnu;

    do{
        system("cls");
        cout<<" Cake        'c'\n"
            <<" Bread       'b'\n"
            <<" Pastry      'p'\n"
            <<" Done        'd'\n";
        cin>>memnu;
        switch(memnu)
        {
            case 'c': //добавление в зазаз Cake
                {
                    system("cls");
                    Cake *Tempc = new Cake;
                    Tempc->CakeList();
                    delete Tempc;
                    cin>>no;
                    cout<<"\nQuantity: ";
                    cin>>kol;
                    Sum += vCake[no].Price * kol; //считаем сумму позиции Cake сумма=цена товара*количество
                    Profit += (vCake[no].Price-vCake[no].CostPrice) * kol;//Прибыль=(ЦенаНаПолке-Себестоимость)*количество
                }
            break;

            case 'b': //добавление в заказ Bread
                {
                    system("cls");
                    Bread *Tempb = new Bread;
                    Tempb->BreadList();
                    delete Tempb;
                    cin>>no;
                    cout<<"\nQuantity: ";
                    cin>>kol;
                    Sum += vBread[no].Price * kol; //считаем сумму позиции Bread сумма=цена товара*количество
                    Profit += (vBread[no].Price-vBread[no].CostPrice) * kol; //Прибыль=(ЦенаНаПолке-Себестоимость)*количество
                }
            break;

            case 'p': //добавление в заказ Pastry
                {
                    system("cls");
                    Pastry *Tempp = new Pastry;
                    Tempp->PastryList();
                    delete Tempp;
                    cin>>no;
                    cout<<"\nQuantity: ";
                    cin>>kol;
                    Sum += vPastry[no].Price * kol;//считаем сумму позиции Pastry сумма=цена товара*количество
                    Profit += (vPastry[no].Price-vPastry[no].CostPrice) * kol;//Прибыль=(ЦенаНаПолке-Себестоимость)*количество
                }
            break;

            case 'd':
            {
                time_t now = time(0);  //начинает счёт времени с 0 для правильного отражения года
                tm *ltm = localtime(&now);//время вроде в секундах
                Year = 1900 + ltm->tm_year; //tm_year выдаёт год с 1900 те 122 поэтому и +1900
                Month = ltm->tm_mon+1;
            }
            break;
        }//конец switch(memnu)
    }while(memnu != 'd');

    match = 0;
    for (unsigned int j = 0; j<vOrd.size(); j++) //проходим по вектору заказов
    {
        if (vOrd[j].Year == Year) //ищем год в векторе заказов с тем что в системе ПК
            {
                if (vOrd[j].Month == Month) //ищем месяц в векторе заказов с тем что в системе ПК
                    {
                        vOrd[j].Sum += Sum;
                        vOrd[j].Profit += Profit;
                        match = 1;
                    }
            }
    }
    if (match == 0)
        {
            vOrd.push_back(Order(Year,Month,Sum,Profit));//записываем в вектор заказов заказ,вызывая конструктор с параметрами заказа
        }

    system("cls"); // стираем консоль
    cout<<"That will be "<<Sum<<endl; // сумма=цена товара*количество
    cout<<Profit<<endl; // сумма прибыли=(ЦенаНаПолке-Себестоимость)*количество
    system("pause");
}

ProfitRecord::ProfitRecord(int Year,float Jan,float Feb,float Mar,float Apr,float May,float Jun,float Jul,float Aug,float Sep,float Oct,float Nov,float Dec){
    this->Year = Year; //по году будет происходить поиск нужного объекта
    this->Jan = Jan;// расходы за Январь
    this->Feb = Feb;// расходы за Февраль
    this->Mar = Mar;// расходы за Март
    this->Apr = Apr;// расходы за Апрель
    this->May = May;// расходы за Май
    this->Jun = Jun;// расходы за Июнь
    this->Jul = Jul;// расходы за Июнь
    this->Aug = Aug;// расходы за Август
    this->Sep = Sep;// расходы за Сентабрь
    this->Oct = Oct;// расходы за Октябрь
    this->Nov = Nov;// расходы за Ноябрь
    this->Dec = Dec;// расходы за Декабрь
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
    void ListClear()
    {
        vCake.clear();
        vPastry.clear();
        vBread.clear();
        vOrd.clear();
        vProf.clear();
    }
}
