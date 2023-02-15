#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    // char first[100];
    // char second[100];
    // char yangi[100];
    // int count=0,index=0;
    // printf("Birinchi so':");
    // scanf("%[^\n]",first);
    // printf("Ikkinchi so'z:");
    // scanf("%s", second);
    
    // printf("first--->%lu second--->%lu\n", strlen(first),strlen(second));

    // if(strlen(first)>strlen(second)){
    //  for (int i = 0; first[i]!='\0'; i++)
    //  {
    //    if(count%2==0){
    //        yangi[index]=first[index];
    //    }else{
    //        yangi[index]=second[index];
    //    }
    //    count++;
    //    index++;
    //  }
     
    // }

    // else if(strlen(first)<strlen(second)){
    //  for (int i = 0; second[i]!='\0'; i++)
    //  {
    //    if(count%2==0){
    //        yangi[index]=first[index];
    //    }else{
    //        yangi[index]=second[index];
    //    }
    //    count++;
    //    index++;
    //  }
     
    // }

    // printf("%s", yangi);
    // puts("");


//Ikkinchi misol
// char soz1[100],soz2[100];
// printf("Birinchi gap: ");
// scanf("%[^\n]",soz1);
// printf("harflarni yozing: ");
// scanf("%s",soz2);
// int count1=0;

// for (int i = 0; soz1[i]!='\0' ; i++)
// {
//     if(soz1[i]=='*'){
//         soz1[i]=soz2[count1];
//         count1++;
//     }

// }

// printf("%s\n", soz1);


//Uchinchi misol
char firstInput[100];
char secondInput[100];
char result[100];
printf("First Input:");
scanf("%[^\n]", firstInput);
printf("Second Input:");
scanf("%s",secondInput);

strncpy(result,firstInput,firstInput+strlen(firstInput)/2);
strcpy(result+strlen(result), secondInput+strlen(secondInput));
printf("%s\n", result);


//To'rtinchi misol
// char name[100];
// char lastName[100];
// char newLastName[100];
// printf("Ismingiz nima: ");
// scanf("%[^\n]", name);
// printf("Familiyangiz nima: ");
// scanf("%s", lastName);

// strcat(name,"ov");
// for (int i = 0; lastName[i]!='\0'; i++)
// {
//     if(lastName[i+2]!='\0'){
//         newLastName[i]=lastName[i];
//     }
// }

// printf("Ism-->%s\n Familiya %s \n", newLastName ,name);



}