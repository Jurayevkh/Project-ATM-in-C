#include <stdio.h>

int main(){

    // char soz[10];
    // printf("%s\n", soz);
    // for (int i = 0; i < 10; i++)
    // {
    //     if(soz[i]=='\0'){
    //         printf("\\0");
    //     }
    //     printf("%c", soz[i]);
    // }
    // puts("");
    // scanf("%s", soz);
    // for (int i = 0; i < 10; i++)
    // {
    //     if(soz[i]=='\0'){
    //         printf("\\0");
    //     }
    //     printf("%c", soz[i]);
    // }


    // char soz[100];
    // scanf("%[^\n]", soz);
    // int count=0;
    // for (int i = 0; i < soz[i]!='\0'; i++)
    // {
    //    if(soz[i]>='a' && soz[i]<='z')
    //    count++;
    // }

    // printf("%d ta harf mavjud\n",count);


    // char soz1[100];
    // scanf("%[^\n]", soz1);
    // int count1=0;
    // for (int i = 0; i < soz1[i]!='\0'; i++)
    // {
    //    if(soz1[i]>='0' && soz1[i]<='9')
    //    count1++;
    // }

    // printf("%d ta raqam mavjud\n",count1);
    

    // char soz2[100];
    // scanf("%[^\n]", soz2);
    // int count2=0;
    // for (int i = 0; i < soz2[i]!='\0'; i++)
    // {
    //    if(soz2[i]==' ')
    //    count2++;
    // }

    // printf("%d ta probel mavjud\n",count2);
    
    // char soz3[100];
    // scanf("%[^\n]", soz3);
    // int count3=0, count4=0;
    // for (int i = 0; i < soz3[i]!='\0'; i++)
    // {
    //    if(soz3[i]>='0' && soz3[i]<='9')
    //    count3++;
    //    else if(soz3[i]>='a' && soz3[i]<='z')
    //    count4++;
    // }

    // printf("%d ta raqam %d harf mavjud\n",count3, count4);

    // char soz5[100];
    // scanf("%[^\n]", soz5);
    // int count5=0;
    // for (int i = 0; i < soz5[i]!='\0'; i++)
    // {
    //    if(soz5[i]>='A' && soz5[i]<='Z')
    //    count5++;
    // }

    // printf("%d ta harf mavjud\n",count5);
   
    // char soz6[100];
    // scanf("%[^\n]", soz6);
    // int count6=0;
    // for (int i = 0; i < soz6[i]!='\0'; i++)
    // {
    //    if(soz6[i]>='a' && soz6[i]<='z')
    //    count6++;
    // }

    // printf("%d ta harf mavjud\n",count6);
   
    
    // char soz7[100];
    // scanf("%[^\n]", soz7);
    // int count7=0,count8=0;
    // for (int i = 0; i < soz7[i]!='\0'; i++)
    // {
    //    if(soz7[i]>='A' && soz7[i]<='Z')
    //    count7++;
    //    else if(soz7[i]>='a' && soz7[i]<='z')
    //    count8++;
    // }
    // int zapas=count7;
    // count7=count8;
    // count8=zapas;

    // printf("%d ta katta harf %d ta kichik harf mavjud\n",count7,count8);
   
       
    // char soz6[100];
    // scanf("%[^\n]", soz6);
    // for (int i = 0; i < soz6[i]!='\0'; i++)
    // {
    //    if(soz6[i]>='a' && soz6[i]<='z')
    //    soz6[i]=soz6[i]-32;
    //    else if(soz6[i]>='A' && soz6[i]<='Z')
    //    soz6[i]=soz6[i]+32;
    // }
   
    //  printf("%s", soz6);
   
    // char soz6[100];
    // scanf("%[^\n]", soz6);
    // for (int i = 0; i < soz6[i]!='\0'; i++)
    // {
    
    //    if(soz6[i]>='A' && soz6[i]<='Z')
    //    soz6[i]='*';
    // }

    // printf("%s", soz6);
   
//    char soz6[100];
//     scanf("%[^\n]", soz6);
//     for (int i = 0; i < soz6[i]!='\0'; i++)
//     {
    
//        if(soz6[i]>='a' && soz6[i]<='z')
//        soz6[i]='*';
//     }

//     printf("%s", soz6);
   
char soz6[100];
    scanf("%[^\n]", soz6);
    for (int i = 0; i < soz6[i]!='\0'; i++)
    {
    
       if(soz6[i]>='A' && soz6[i]<='Z')
       soz6[i]='*';
    }

    printf("%s", soz6);
   

}