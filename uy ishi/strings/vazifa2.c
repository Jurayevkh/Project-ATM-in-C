#include <stdio.h>

int main(){
   char soz2[100];
   printf("Enter here matn:");
   scanf("%[^\n]", soz2);

   char start1,end1;
   
   for (int i = 0;soz2[i]!='\0'; i++)
   {
       if(isalnum(soz2[i])){
        start1=i;
        break;
       }
   }

    for (int i = 0;soz2[i]!='\0'; i++)
   {
       if(isupper(soz2[i])){
        end1=i;
       }
   }
   
   for (int j = start1; j <end1; j++)
   {
       if(ispunct(soz2[j])){
           printf("%c", soz2[j]);
       }
   }
   puts("");
}