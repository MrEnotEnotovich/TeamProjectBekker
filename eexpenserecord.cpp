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
