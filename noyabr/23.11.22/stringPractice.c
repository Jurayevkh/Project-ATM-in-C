#include <stdio.h>
#include <ctype.h>

int main(){
    // char soz[100];
    // printf("So'z kiriting:");
    // scanf("%[^\n]",soz);
    // char unli[100];
    // char undosh[100];
    // int count1=0,count=0;
    // for (int i = 0; soz[i]!='\0' ; i++)
    // {

    //     if(soz[i]=='a'|| soz[i]=='u' || soz[i]=='i'|| soz[i]=='o'||soz[i]=='e'){
    //        unli[count]=soz[i];
    //        count++;
    //     }
    //     else{
    //        undosh[count1]=soz[i];
    //        count1++;
    //     }
    // }
    // printf("Unli Harflar--->");
    // for (int i = 0; unli[i] !='\0' ; i++)
    // {
    //     printf("%c",unli[i]);
    // }
    // puts("");
    // printf("Undosh Harflar--->");
    // for (int i = 0; undosh[i] !='\0' ; i++)
    // {
    //     printf("%c",undosh[i]);
    // }
    // puts("");


    // char soz1[100];
    // printf("So'z kiriting:");
    // scanf("%[^\n]",soz1);

    // for (int i = 0; soz1[i]!='\0' ; i++)
    // {
    //   if(isspace(soz1[i])){
    //      puts("");
    //   }else{
    //       printf("%c", soz1[i]);
    //   }
    // }


    char soz2[100],soz3[100];
    printf("Birinchi ma'lumotni kiriting:");
    scanf("%s", soz2);
    printf("Ikkinchi ma'lumotni kiriting:");
    scanf("%[ ^\n]", soz3);

    for (int i = 0; soz2[i] != '\0'||soz3[i]!='\0'; i++)
    {
      if(isdigit(soz2[i] || soz3[i])){
          if(soz2[i]>soz3[i]){
              printf("%c",soz2[i]);
          }else{
              printf("%c", soz3[i]);
          }
      }
    }
    

    

}