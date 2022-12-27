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
    for (unsigned int j = 0; j<v.size(); j++)
    {
        if (v[j].Year == menuu) //ищет вектор с нужным годом
    {
            control++;
            string months ="     Jan     Feb     Mar     Apr     May     Jun     Jul     Aug     Sep     Oct     Nov     Dec";
                cout<<"\n"<<months<<"\n";
                cout<<"--------------------------------------------------------------------------------------------------------"<<endl;

                //Затраты
                cout<<"\t"<<v[j].Jan<<"\t"<<v[j].Feb<<"\t"<<v[j].Mar<<"\t"
                  <<v[j].Apr<<"\t"<<v[j].May<<"\t"<<v[j].Jun<<"\t"
                  <<v[j].Jul<<"\t"<<v[j].Aug<<"\t"<<v[j].Sep<<"\t"
                  <<v[j].Oct<<"\t"<<v[j].Nov<<"\t"<<v[j].Dec<<endl;

        for(unsigned i = 0;i<vProf.size();i++)
        {
            if(vProf[i].Year == v[j].Year)
            {
                //Доходы
                cout<<"\t"<<vProf[i].Jan<<"\t"<<vProf[i].Feb<<"\t"<<vProf[i].Mar<<"\t"
                          <<vProf[i].Apr<<"\t"<<vProf[i].May<<"\t"<<vProf[i].Jun<<"\t"
                          <<vProf[i].Jul<<"\t"<<vProf[i].Aug<<"\t"<<vProf[i].Sep<<"\t"
                          <<vProf[i].Oct<<"\t"<<vProf[i].Nov<<"\t"<<vProf[i].Dec<<endl;

                //Доходы - Затраты
                cout<<"\t"<<vProf[i].Jan-v[j].Jan<<"\t"<<vProf[i].Feb-v[j].Feb<<"\t"<<vProf[i].Mar-v[j].Mar<<"\t"
                          <<vProf[i].Apr-v[j].Apr<<"\t"<<vProf[i].May-v[j].May<<"\t"<<vProf[i].Jun-v[j].Jun<<"\t"
                          <<vProf[i].Jul-v[j].Jul<<"\t"<<vProf[i].Aug-v[j].Aug<<"\t"<<vProf[i].Sep-v[j].Sep<<"\t"
                          <<vProf[i].Oct-v[j].Oct<<"\t"<<vProf[i].Nov-v[j].Nov<<"\t"<<vProf[i].Dec-v[j].Dec<<endl;
                cout<<"--------------------------------------------------------------------------------------------------------"<<endl;

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
