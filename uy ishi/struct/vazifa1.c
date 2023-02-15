#include <stdio.h>

struct talaba
{
    char ism[20];
    int yosh;
    float stipendiyasi;
    int baholar[5];
};


int main(){
   int n;
   printf("Nechta talaba bor:");
   scanf("%d", &n);
   
   struct talaba talabalar[n];
   for (int i = 0; i < n; i++)
   {
       printf("%d-talabaning ismini kiriting:",i+1);
       scanf("%s",talabalar[i].ism);
       printf("%d-talabaning yoshini kiriting:",i+1);
       scanf("%d", &talabalar->yosh);
       printf("%d-talabaning stipendiyasi qancha:",i+1);
       scanf("%f", &talabalar->stipendiyasi);
       for (int j = 0; j < 5; j++)
       {
           printf("%d-fandan necha baho olgan",j+1);
           scanf("%d", &talabalar->baholar[j]);
       }
       int jami=0;
       for (int i = 0; i < 5; i++)
       {
        jami+=talabalar->baholar[i];
       }
       jami/=5;
       if(jami>=4){
           printf("\n\n%d-talabaning ma'lumotlari: Ismi: %s %d yoshda %.0f ming stipendiya oladi \n O'rtacha bahosi %d\n\n\n",
           i+1, talabalar->ism ,talabalar->yosh, talabalar->stipendiyasi, jami);
       }
   }


  
   
   
   
}