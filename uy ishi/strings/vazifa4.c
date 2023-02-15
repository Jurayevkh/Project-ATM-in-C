#include <stdio.h>

int main(){
    char soz3[100];
   printf("Enter here matn:");
   scanf("%[^\n]", soz3);

   char start3,end3;
   
   for (int i = 0;soz3[i]!='\0'; i++)
   {
       if(isdigit(soz3[i])){
        start3=i;
        
       }
   }

    for (int i = 0;soz3[i]!='\0'; i++)
   {
       if(isupper(soz3[i])){
        end3=i;
       }
   }
   
   for (int j = start3; j <end3; j++)
   {
       if(ispunct(soz3[j])){
           printf("%c", soz3[j]);
       }
   }
   puts("");
}