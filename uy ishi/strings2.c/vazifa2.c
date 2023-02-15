#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
   char gap[100];
   printf("Gap kiriting--> ");
   scanf("%[^\n]", gap);
   gap[0]=toupper(gap[0]);
   strcat(gap,".");

   printf("%s\n", gap);


}