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

                        }
                    break;

                    case 'o': //описание Расходов за год
                        {
                            //Ввод расходов за год по месяцам

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


    cout<<"\nAdieu!\n";
}
