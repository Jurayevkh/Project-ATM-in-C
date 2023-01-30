#include <stdio.h>

int main(){
    int parol=1111, tanlov1, kiritish_parol, imkoniyat=0, balans=30000, o_tanlov, summa, next, bankomat_puli=2000000;
    char karta;

    printf("\n\nKartangizni kiriting(kiritgandan so'ng k tugmasini bosin)\n\nВведите вашу карту (нажмите k после ввода)\n\nEnter your card (press k after entering):");
    scanf("%c", &karta);
    switch (karta=='k')
    {
    case 1:
        printf("\n\n\tTilni tanlang\n\tВыберите язык\n\tSelect a language:\t\n\n1.O'zbek tili\t\n2.русский язык\t\n3.English:");
        scanf("%d", &tanlov1);
        switch (tanlov1==1)
        {
        case 1:
              printf("\t\nParolingizni kiriting:");
              scanf("%d", &kiritish_parol);
              paroltekshirish:
              if(kiritish_parol==parol){
                  goto menyu;
              }else{
                  printf("Noto'g'ri parol , qaytadan kiriting:");
                  scanf("%d", &kiritish_parol);
                  imkoniyat+=1;
                  if(imkoniyat>=2){
                      printf("bloklandingiz!!!!\n");
                      return 0;
                  }else{
                      goto paroltekshirish;
                  }

              }

            menyu:
            operatsiyalar:
            printf("\t\n   Operatsiyalarni tanlang:\n1.Pul yechish\n2.Balans\n3.Pul solish\n");
            scanf("%d", &o_tanlov);
            switch (o_tanlov==1)
            {
            case 1:
                printf("\nSummani kiriting:");
                scanf("%d", &summa);
                switch (summa<=balans)
                {
                case 1:
                    balans=balans-summa;
                    printf("\n\tOperatsiya Muvaffaqiyatli tugatildi , sizni hisobingizda %d so'm pul qoldi\n", balans);
                    puts("\tYana Operatsiya bajarasizmi!!!\n(1.Ha\n2.Yo'q)");
                    scanf("%d", &next);
                    if(next==1){
                        goto operatsiyalar;
                    }else if(next==2){
                        puts("---------------------");
                        puts("| Marhamat Chekingiz |");
                        puts("|Sizning hisobingizda|");
                      printf(" %d summa qoldi      \n", balans);
                        puts("---------------------");
                    }else{
                        puts("Tushunarsiz Buyruq");
                    }
                case 0:
                  if(summa>balans){
                   printf("\n\n\nsizning hisobingizda buncha summa yo'q\nMarhamat kartangiz\n");
                   break;
                }
                }

                break;

            case 0:
               switch (o_tanlov==2)
               {
               case 1:
                   printf("\nSizning hisobingizda %d so'm pul bor ekan.\n", balans);
                   puts("Yana boshqa operatsiyalardan foydalanasizmi! \n(1.Ha/2.Yo'q)");
                   scanf("%d", &next);
                   if(next==1){
                        goto operatsiyalar;
                    }else if(next==2){
                        puts("------------------------------------------------------------------");
                        puts("| Bankomatimidan foydalanganingiz uchun rahmat , salomat bo'ling |");
                        puts("------------------------------------------------------------------");
                    }else{
                        puts("Tushunarsiz Buyruq");
                    }
                   break;
               case 0 :
                  switch (o_tanlov==3)
                  {
                  case 1:
                      puts("Pulingiz qiymatini kiriting:");
                      scanf("%d", &summa);
                      if(summa<=bankomat_puli){
                          bankomat_puli=bankomat_puli-summa;
                          puts("-------------------------------------");
                          puts("Operatsiya Muvaffaqiyatli tugatildi");
                        printf("Hisobingiz %d summaga to'ldirildi\n", summa);
                        printf("Sizda hozirda jami %d so'm mavjud\n", balans+summa);
                          puts("-------------------------------------");
                          puts("\n\n\n\n\tYana boshqa operatsiyalardan foydalanasizmi! \n(1.Ha/2.Yo'q)");
                          scanf("%d", &next);
                          if(next==1){
                           goto operatsiyalar;
                          }else if(next==2){
                          puts("------------------------------------------------------------------");
                          printf("Sizning hisobingiz %d so'mga to'ldirildi\n", summa);
                          printf("Jami pulingiz: %d\n", balans+summa);
                          printf("Bankomat hisobida %d so'm qoldi\n", bankomat_puli);
                          puts("------------------------------------------------------------------");
                          }
                          }else if (summa>bankomat_puli){
                           puts("Kechirasiz bizda buncha pul yo'q");
                           puts("\n\n\n\n\tYana boshqa operatsiyalardan foydalanasizmi! \n(1.Ha/2.Yo'q)");
                          scanf("%d", &next);
                          if(next==1){
                           goto operatsiyalar;
                          }else if(next==2){
                          puts("------------------------------------------------------------------");
                          printf("Sizning hisobingiz %d so'mga to'ldirildi\n", summa);
                          printf("Jami pulingiz: %d", balans+summa);
                          printf("Bankomat hisobida %d so'm qoldi\n", bankomat_puli);
                          puts("------------------------------------------------------------------");
                          }
                          }else{
                              puts("Tushunarsiz buyruq");
                          }

                  }
                 break;
                }

            }
            break;

        case 0:
            switch (tanlov1==2)
            {
            case 1:
              printf("\t\nВведите пароль:");
              scanf("%d", &kiritish_parol);
              paroltekshirish2:
              if(kiritish_parol==parol){
                  goto menyu2;
              }else{
                  puts("Неверный пароль, пожалуйста, введите еще раз:");
                  scanf("%d", &kiritish_parol);
                  imkoniyat+=1;
                  if(imkoniyat>=2){
                      printf("вы заблокированы!!!!\n");
                      return 0;
                  }else{
                      goto paroltekshirish2;
                  }

              }

            menyu2:
            operatsiyalar2:
            printf("\t\n Выберите операции:\n1. Вывод средств\n2. Баланс\n3. Депозит\n");
            scanf("%d", &o_tanlov);
            switch (o_tanlov==1)
            {
            case 1:
                printf("\nВведите сумму:");
                scanf("%d", &summa);
                switch (summa<=balans)
                {
                case 1:
                    balans=balans-summa;
                    printf("\n\tОперация успешно завершена, на вашем счету осталось %d сумов\n", balans);
                    puts("\tВы бы повторили операцию!!!\n(1.Да\n2.Нет)");
                    scanf("%d", &next);
                    if(next==1){
                        goto operatsiyalar2;
                    }else if(next==2){
                        puts("---------------------");
                        puts("| Спасибо за ваш чек |");
                        puts("|В вашем аккаунте    |");
                      printf("|Осталось %d суммы   |\n", balans);
                        puts("---------------------");
                    }else{
                        puts("Непонятная команда");
                    }
                default:
                   printf("\n\n\nВ вашем аккаунте нет этой суммы\nВаша кредитная карта\n");
                   break;
                }

                break;

            case 0:
               switch (o_tanlov==2)
               {
               case 1:
                   printf("\nУ вас на счету %d сумов.\n", balans);
                   puts("Используете ли вы какие-либо другие операции! \n(1.Да/2.Нет)");
                   scanf("%d", &next);
                   if(next==1){
                        goto operatsiyalar2;
                    }else if(next==2){
                        puts("------------------------------------------------------------------");
                        puts("| Спасибо за использование моего банкомата и будьте здоровы      |");
                        puts("------------------------------------------------------------------");
                    }else{
                        puts("Непонятная команда");
                    }
                   break;
               case 0 :
                  switch (o_tanlov==3)
                  {
                  case 1:
                      puts("Введите стоимость ваших денег:");
                      scanf("%d", &summa);
                      if(summa<=bankomat_puli){
                          bankomat_puli=bankomat_puli-summa;
                          puts("-------------------------------------");
                          puts("Операция завершена успешно");
                        printf("Ваш счет был пополнен на %d сумму\n", summa);
                        printf("В настоящее время у вас есть %d сумов\n", balans+summa);
                          puts("-------------------------------------");
                          puts("\n\n\n\n\tИспользуете ли вы какие-либо другие операции! \n(1.Да/2.Нет)");
                          scanf("%d", &next);
                          if(next==1){
                           goto operatsiyalar;
                          }else if(next==2){
                          puts("------------------------------------------------------------------");
                          printf("Ваш счет пополнен на %d сумов\n", summa);
                          printf("Ваша общая сумма денег составляет %d\n", balans+summa);
                          printf("На счету банкомата осталось %d сум\n", bankomat_puli);
                          puts("------------------------------------------------------------------");
                          }
                          }else if (summa>bankomat_puli){
                           puts("Извините, у нас нет столько денег");
                           puts("\n\n\n\n\tИспользуете ли вы какие-либо другие операции! \n(1.Да/2.Нет)");
                          scanf("%d", &next);
                          if(next==1){
                           goto operatsiyalar2;
                          }else if(next==2){
                          puts("------------------------------------------------------------------");
                          printf("Ваш счет пополнен на %d сумов\n", summa);
                          printf("Ваша общая сумма денег: %d", balans+summa);
                          printf("На счету банкомата осталось %d сум\n", bankomat_puli);
                          puts("------------------------------------------------------------------");
                          }
                          }else{
                              puts("Непонятная команда");
                          }
                  }
                  }
            }
                 break;
                  case 0:
                   switch(tanlov1=3){
                       case 1:
                          printf("\t\nEnter password:");
              scanf("%d", &kiritish_parol);
              paroltekshirish3:
              if(kiritish_parol==parol){
                  goto menyu3;
              }else{
                  puts("Wrong password, please enter again:");
                  scanf("%d", &kiritish_parol);
                  imkoniyat+=1;
                  if(imkoniyat>=2){
                      printf("you are blocked!!!!\n");
                      return 0;
                  }else{
                      goto paroltekshirish3;
                  }
               }
              }

            menyu3:
            operatsiyalar3:
            printf("\t\n Select Operations:\n1. Withdrawals\n2. Balance\n3. Deposit\n");
            scanf("%d", &o_tanlov);
            switch (o_tanlov==1)
            {
            case 1:
                printf("\nEnter the amount:");
                scanf("%d", &summa);
                switch (summa<=balans)
                {
                case 1:
                    balans=balans-summa;
                    printf("\n\tOperation completed successfully, you have %d soums left in your account\n", balans);
                    puts("\tYou would repeat the operation!!!\n(1.Yes\n2.No)");
                    scanf("%d", &next);
                    if(next==1){
                        goto operatsiyalar3;
                    }else if(next==2){
                        puts("---------------------");
                        puts("|      check         |");
                        puts("|In your account     |");
                      printf("|%d amount left      |\n", balans);
                        puts("---------------------");
                    }else{
                        puts("Incomprehensible command");
                    }
                default:
                   printf("\n\n\nYour account does not have this amount\nYour credit card\n");
                   break;
                }

                break;

            case 0:
               switch (o_tanlov==2)
               {
               case 1:
                   printf("\nYou have %d soums in your account.\n", balans);
                   puts("Are you using any other operations! \n(1.Yes/2.No)");
                   scanf("%d", &next);
                   if(next==1){
                        goto operatsiyalar3;
                    }else if(next==2){
                        puts("------------------------------------------------------------------");
                        puts("|       Thank you for using my ATM and stay healthy              |");
                        puts("------------------------------------------------------------------");
                    }else{
                        puts("Incomprehensible command");
                    }
                   break;
               case 0 :
                  switch (o_tanlov==3)
                  {
                  case 1:
                      puts("Enter the value of your money:");
                      scanf("%d", &summa);
                      if(summa<=bankomat_puli){
                          bankomat_puli=bankomat_puli-summa;
                          puts("-------------------------------------");
                          puts("Operation completed successfully");
                        printf("Your account has been topped up by %d amount\n", summa);
                        printf("You currently have %d sums\n", balans+summa);
                          puts("-------------------------------------");
                          puts("\n\n\n\n\tAre you using any other operations! \n(1.Yes/2.No)");
                          scanf("%d", &next);
                          if(next==1){
                           goto operatsiyalar3;
                          }else if(next==2){
                          puts("------------------------------------------------------------------");
                          printf("Your account has been replenished with %d soums\n", summa);
                          printf("Your total money is %d\n", balans+summa);
                          printf("%d soums left on the ATM account\n", bankomat_puli);
                          puts("------------------------------------------------------------------");
                          }
                          }else if (summa>bankomat_puli){
                           puts("Sorry we don't have that much money");
                           puts("\n\n\n\n\tAre you using any other operations! \n(1.Yes/2.No)");
                          scanf("%d", &next);
                          if(next==1){
                           goto operatsiyalar3;
                          }else if(next==2){
                          puts("------------------------------------------------------------------");
                          printf("Your account has been replenished with %d soums\n", summa);
                          printf("Your total money: %d", balans+summa);
                          printf("%d soums left on the ATM account\n", bankomat_puli);
                          puts("------------------------------------------------------------------");
                          }
                          }else{
                              puts("Incomprehensible command");
                          }
                          break;
                default:
                puts("Tushunarsiz buyruq berdingiz\nНепонятная команда\nUnclear command");
                break;
                   }
               }
            }
            break;
        }
        break;


    }
  }

}