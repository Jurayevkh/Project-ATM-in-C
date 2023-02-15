#include <stdio.h>
#include <ctype.h>

int main(){

   //Birinchi misol
//    char soz[100];
//    printf("Enter here matn:");
//    scanf("%[^\n]", soz);

//    char start,end;
   
//    for (int i = 0;soz[i]!='\0'; i++)
//    {
//        if(isalnum(soz[i])){
//         start=i;
//         break;
//        }
//    }

//     for (int i = 0;soz[i]!='\0'; i++)
//    {
//        if(islower(soz[i])){
//         end=i;
//        }
//    }
   
//    for (int j = start; j <end; j++)
//    {
//        if(ispunct(soz[j])){
//            printf("%c", soz[j]);
//        }
//    }
//    puts("");
   

    //Ikkinchi misol
//     char soz2[100];
//    printf("Enter here matn:");
//    scanf("%[^\n]", soz2);

//    char start1,end1;
   
//    for (int i = 0;soz2[i]!='\0'; i++)
//    {
//        if(isalnum(soz2[i])){
//         start1=i;
//         break;
//        }
//    }

//     for (int i = 0;soz2[i]!='\0'; i++)
//    {
//        if(isupper(soz2[i])){
//         end1=i;
//        }
//    }
   
//    for (int j = start1; j <end1; j++)
//    {
//        if(ispunct(soz2[j])){
//            printf("%c", soz2[j]);
//        }
//    }
//    puts("");


  //Uchinchi misol
//   char soz3[100];
//    printf("Enter here matn:");
//    scanf("%[^\n]", soz3);

//    char start2,end2;
   
//    for (int i = 0;soz3[i]!='\0'; i++)
//    {
//        if(isupper(soz3[i])){
//         start2=i;
//        }
//    }

//     for (int i = 0;soz3[i]!='\0'; i++)
//    {
//        if(islower(soz3[i])){
//         end2=i;
//        }
//    }
   
//    for (int j = start2; j <end2; j++)
//    {
//        if(ispunct(soz3[j])){
//            printf("%c", soz3[j]);
//        }
//    }
//    puts("");
    

    //To'rtinchi misol
//     char soz3[100];
//    printf("Enter here matn:");
//    scanf("%[^\n]", soz3);

//    char start3,end3;
   
//    for (int i = 0;soz3[i]!='\0'; i++)
//    {
//        if(isdigit(soz3[i])){
//         start3=i;
        
//        }
//    }

//     for (int i = 0;soz3[i]!='\0'; i++)
//    {
//        if(isupper(soz3[i])){
//         end3=i;
//        }
//    }
   
//    for (int j = start3; j <end3; j++)
//    {
//        if(ispunct(soz3[j])){
//            printf("%c", soz3[j]);
//        }
//    }
//    puts("");


//Beshinchi misol
// char soz5[100];
// printf("Enter matn:");
// scanf("%[^\n]",soz5);
// char unli;
// int indeks=0;

// for (int i = 0;soz5[i]!='\0'; i++)
// {
//     if(soz5[i]!='a'|| soz5[i]!='u' || soz5[i]!='i'|| soz5[i]!='o'||soz5[i]!='e'){
//         soz5[indeks]=soz5[i];
//     }
//     else{
//     unli=soz5[i];
//     indeks++;
//     }
//     soz5[indeks]=unli;
   

// }

// for (int i = 0; soz5[i]!='\0'; i++)
// {
//     printf("%c", soz5[i]);
// }
// puts("");

//oltinchi misol
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