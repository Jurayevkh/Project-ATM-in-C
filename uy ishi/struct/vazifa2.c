#include <stdio.h>
#include <string.h>

struct aeroport
{
    char samalyot_turi[30];
    float sanasi;
    char qayerga[30];
    char qonishShahri[20];
    float soati;
};


int main(){
   struct aeroport samalyot[10];
   for (int i = 0; i < 10; i++)
   {
     printf("\t\t\t\t%d-Samalyot ma'lumotlarini kiriting\t\t\t\t\n",  i+1);
     printf("Samalyot turini kiriting:");
     scanf("%s", samalyot[i].samalyot_turi);
     printf("Samalyotning qayerga uchishini kiriting:");
     scanf("%s", samalyot[i].qayerga);
     printf("Samalyotning qo'nish shahrini kiriting:");
     scanf("%s", samalyot[i].qonishShahri);
     printf("Samalyotning uchish soatini kiriting:");
     scanf("%f", &samalyot[i].soati);
     printf("Samalyotning uchish sanasini kiriting:");
     scanf("%f", &samalyot[i].sanasi);
     puts("");
   }
   
   for (int i = 0; i < 10; i++)
   {
       if(samalyot[i].sanasi>=6.01 && samalyot[i].sanasi<=8.31){
           printf("\n\n\n\n\n\n\n%s Turidagi samolyot %.2f sanasida %s ga %s shahriga %.2f da uchadi\n\n\n\n\n",samalyot[i].samalyot_turi , samalyot[i].sanasi,samalyot[i].qayerga,samalyot[i].qonishShahri,samalyot[i].soati);
       }
   }
   
  

}