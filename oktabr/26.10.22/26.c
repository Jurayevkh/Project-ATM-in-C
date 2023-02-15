#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     int taxmin, imkoniyat=5 , komp_ochko=0, i_ochko=0;
     char harf;
     boshidan:
     srand(time(0));
     taxmin = rand()%26+97;
     printf("%c\n", taxmin);
     printf("Harfni kiriting:");
     scanf(" %c", &harf);
     switch (harf)
     {
     case 65 ... 90:
         harf=harf+32;
         break;
     }
     if(harf==taxmin){
        imkoniyat-=1;
        i_ochko+=1;
        printf("Siz topdingiz sizga 1 ochko sizda %d ochko mavjud\n", i_ochko);
     }else if(harf!=taxmin){
         imkoniyat-=1;
         komp_ochko+=1;      
         printf("Noto'g'ri topa olmadingiz menga 1 ochko menda %d ochko bor\n", komp_ochko);
     
         }
        if(imkoniyat==0){
            printf("O'yin tugadi menda %d ochko sizda %d ochko\n", komp_ochko, i_ochko);
            if(komp_ochko>i_ochko){
                puts("Men yutdim");
                return 0;
            }
            else{
                puts("Siz yutdingiz");
                return 0;
            }
        }
     goto boshidan;    
     
     

    


























}