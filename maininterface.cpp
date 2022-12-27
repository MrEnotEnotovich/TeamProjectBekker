#include "bekker.h"
#include "products.h"

void MainInterface::interactMain()
{
    ProdInit();
    do
    {
        cout<<"Choose profile:\n 1. Cashier \n 2. Manager \n 3. Exit\n";
        cin>>menu;
        switch (menu)
        {
            case '1': //cashier
                do
                {
                    system("cls");
                    cout<<" Add order  'a'\n"
                        <<" Exit.      'e'\n" ;
                    cin>>ch;
                    switch(ch)
                       {
                            case 'a':  // добавление заказ
                                {
                                    Order *Temp = new Order;//создаем обьект класса Order
                                    Temp->AddOrder();//отправляем указатель на созданный обьект в метод добавление заказа
                                    delete Temp;//опустошаем указатель
                                }
                            break;

                            case 'e': // выход
                            break;

                            default:
                                cout<<"\a";
                            break;
                       }

                }while(ch!='e');
            break;

            case '2': //Manager
            do
            {
                system("cls");
                cout << " AnnualReport   'r',\n"
                     << " Add report     'o',\n"
                     << " Add product    'a',\n"
                     << " Product List   'l',\n"
                     << " Exit           'e':\n ";

                cin>>ch2;
                switch (ch2)
                {
                    case 'r': //просмотр годового отчета
                        {
                            //Автоматический Перещёт Доходов
                            ProfitRecord *Temp = new ProfitRecord;
                            Temp->InputProfit();
                            delete Temp;

                            //Вывод годового отчёта
                            ExpenseRecord *Temp2 = new ExpenseRecord;
                            Temp2->display();
                            system("pause");
                            delete Temp2;
                        }
                    break;

                    case 'o': //описание Расходов за год
                        {
                            //Ввод расходов за год по месяцам
                            ExpenseRecord *Temp = new ExpenseRecord;
                            Temp->InputExpense();
                            delete Temp;
                        }
                    break;

                    case 'a':
                        {
                            do{
                            system("cls");
                            cout << " Add Cake      'c',\n"
                                 << " Add bread     'b',\n"
                                 << " Add pastry    'p',\n"
                                 << " Go back       'e',\n";
                            cin>>chp;
                            switch (chp)
                            {
                                case 'c': //добавление торта в список продуктов
                                    {
                                        Cake *Temp = new Cake;
                                        Temp->addCake();
                                        delete Temp;
                                    }
                                break;

                                case 'b'://добавление хлеба в список продуктов
                                    {
                                        Bread *Temp = new Bread;
                                        Temp->addBread();
                                        delete Temp;
                                    }
                                break;

                                case 'p'://добавление конд изделий в список продуктов
                                    {
                                        Pastry *Temp = new Pastry;
                                        Temp->addPastry();
                                        delete Temp;
                                    }
                                break;

                                case 'e':
                                break;

                                default:
                                    cout<<"\a";
                                break;
                            }//конец switch (chp)
                            }while(chp != 'e');
                        }//конец 'a'
                    break;

                    case 'l': //вывод списка продуктов
                        {
                            system("cls");
                            Cake *Temp = new Cake;
                            Bread *Temp2 = new Bread;
                            Pastry *Temp3 = new Pastry;

                            cout << setiosflags(ios::left);//выравнивание по левой части
                            cout<< setw(3) << "No" << setw(15) << "Name" << setw(15) << "Weight" << setw(5) << "Price" <<endl;

                            Temp->CakeList();
                            Temp2->BreadList();
                            Temp3->PastryList();

                            delete Temp;
                            delete Temp2;
                            delete Temp3;
                            system("pause");
                        }
                    break;

                    case 'e':
                    break;

                    default:
                        cout<<"\a";
                    break;
               }//конец switch (ch2)
               system("cls");
            }while(ch2!='e');
            break;

            default:
                cout<<"\a";
            break;
        }//конец switch (menu)
        system("cls");
    }while(menu != '3');

    ListClear();
    ClearExpense();
    cout<<"\nAdieu!\n";
}
