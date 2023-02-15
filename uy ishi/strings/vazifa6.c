#include <stdio.h>

int main(){
char ism[100];
char familiya[100];
printf("Ism kiriting:");
scanf("%s", ism);
printf("Familiya kiriting:");
scanf("%s", familiya);

for (int i = 0; ism[i]!='\0' || familiya[i]!='\0'; i++)
{

ism[i]=ism[i]+familiya[i];
familiya[i]=ism[i]-familiya[i];
ism[i]=ism[i]-familiya[i];
 
}
for (int i = 0; ism[i]!='\0'; i++)
{  
printf("%c", ism[i]);
}
printf(" ");

for (int i = 0; familiya[i]!='\0'; i++)
{
 printf("%c", familiya[i]);
   
}
 puts("");

}