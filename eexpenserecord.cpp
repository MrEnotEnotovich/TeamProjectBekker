#include "bekker.h"
#include "products.h"

vector <ExpenseRecord> v;

ExpenseRecord::ExpenseRecord(int Year,float Jan,float Feb,float Mar,float Apr,float May,float Jun,float Jul,float Aug,float Sep,float Oct,float Nov,float Dec){
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

void ExpenseRecord::InputExpense()//ввод затрат за год  по месяцам
{
    int *YearIn = new int;
    int *JanIn = new int;
    int *FebIn = new int;
    int *MarIn = new int;
    int *AprIn = new int;
    int *MayIn = new int;
    int *JunIn = new int;
    int *JulIn = new int;
    int *AugIn = new int;
    int *SepIn = new int;
    int *OctIn = new int;
    int *NovIn = new int;
    int *DecIn = new int;


    cout<<"Enter Year"<<endl;
    cin>>*YearIn;

    cout<<"Enter all Expenses from January with spaces in between\n";
    cin>>*JanIn>>*FebIn>>*MarIn>>*AprIn>>*MayIn>>*JunIn>>*JulIn>>*AugIn>>*SepIn>>*OctIn>>*NovIn>>*DecIn;
    v.push_back(ExpenseRecord(*YearIn,*JanIn,*FebIn,*MarIn,*AprIn,*MayIn,*JunIn,*JulIn,*AugIn,*SepIn,*OctIn,*NovIn,*DecIn));
    delete YearIn;
    delete JanIn;
    delete FebIn;
    delete MarIn;
    delete AprIn;
    delete MayIn;
    delete JunIn;
    delete JulIn;
    delete AugIn;
    delete SepIn;
    delete OctIn;
    delete NovIn;
    delete DecIn;
}

void ExpenseRecord::display()
{
    int control = 0;
    int menuu;



    cout<<"Enter year: ";
    cin>>menuu; //ввод года проверки
    cout << setiosflags(ios::left);
    for (unsigned int j = 0; j<v.size(); j++)
    {
        if (v[j].Year == menuu) //ищет вектор с нужным годом
    {
            control++;
              cout<<"\n          Jan     Feb     Mar     Apr     May     Jun     Jul     Aug     Sep     Oct     Nov     Dec\n";
                cout<<"-----------------------------------------------------------------------------------------------------"<<endl;

                //Затраты
                cout<< setw(10) <<"Expenses"<< setw(8) << v[j].Jan<< setw(8) << v[j].Feb<< setw(8) << v[j].Mar<< setw(8) << v[j].Apr
                    << setw(8) << v[j].May<< setw(8) << v[j].Jun<< setw(8) << v[j].Jul<< setw(8) << v[j].Aug<< setw(8) << v[j].Sep
                    << setw(8) << v[j].Oct<< setw(8) << v[j].Nov<< setw(8) << v[j].Dec<<endl;

        for(unsigned i = 0;i<vProf.size();i++)
        {
            if(vProf[i].Year == v[j].Year)
            {
                //Доходы
                cout<< setw(10) << "Income" << setw(8) << vProf[i].Jan<< setw(8) << vProf[i].Feb<< setw(8) << vProf[i].Mar<< setw(8) << vProf[i].Apr
                    << setw(8) << vProf[i].May<< setw(8) << vProf[i].Jun<< setw(8) << vProf[i].Jul<< setw(8) << vProf[i].Aug<< setw(8) << vProf[i].Sep
                    << setw(8) << vProf[i].Oct<< setw(8) << vProf[i].Nov<< setw(8) << vProf[i].Dec<<endl;

                //Доходы - Затраты
                cout<< setw(10) << "Profit"<< setw(8) << vProf[i].Jan-v[j].Jan<< setw(8) << vProf[i].Feb-v[j].Feb<< setw(8) << vProf[i].Mar-v[j].Mar
                    << setw(8) << vProf[i].Apr-v[j].Apr<< setw(8) << vProf[i].May-v[j].May<< setw(8) << vProf[i].Jun-v[j].Jun<< setw(8) << vProf[i].Jul-v[j].Jul
                    << setw(8) << vProf[i].Aug-v[j].Aug<< setw(8) << vProf[i].Sep-v[j].Sep<< setw(8) << vProf[i].Oct-v[j].Oct<< setw(8) << vProf[i].Nov-v[j].Nov<< setw(8) << vProf[i].Dec-v[j].Dec<<endl;
                cout<<"-----------------------------------------------------------------------------------------------------"<<endl;

                //Профит
                cout<<"Profit: "<<vProf[i].Jan-v[j].Jan+vProf[i].Apr-v[j].Apr+vProf[i].Jul-v[j].Jul+vProf[i].Oct-v[j].Oct+vProf[i].Feb-v[j].Feb+vProf[i].May-v[j].May+vProf[i].Aug-v[j].Aug+vProf[i].Nov-v[j].Nov+vProf[i].Mar-v[j].Mar+vProf[i].Jun-v[j].Jun+vProf[i].Sep-v[j].Sep+vProf[i].Dec-v[j].Dec<<endl;
            }
        }


    }else{if (j == v.size()-1 && control == 0){
        cout<<"Not found"<<endl;}
    }
    cout << endl;
    }
}

void ClearExpense()
{
    v.clear();
}
