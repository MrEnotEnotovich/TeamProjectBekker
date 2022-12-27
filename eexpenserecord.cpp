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
