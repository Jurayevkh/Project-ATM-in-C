#include <stdio.h>

int main(){
    char soz3[100];
   printf("Enter here matn:");
   scanf("%[^\n]", soz3);

   char start2,end2;
   
   for (int i = 0;soz3[i]!='\0'; i++)
   {
       if(isupper(soz3[i])){
        start2=i;
       }
   }

    for (int i = 0;soz3[i]!='\0'; i++)
   {
       if(islower(soz3[i])){
        end2=i;
       }
   }
   
   for (int j = start2; j <end2; j++)
   {
       if(ispunct(soz3[j])){
           printf("%c", soz3[j]);
       }
   }
   puts("");
}