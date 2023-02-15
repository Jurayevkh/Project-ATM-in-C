#include <stdio.h>

int main(){
    char a;
    int qadam=25;
    printf("Harf kiriting:");
    scanf("%c", &a);
    switch (a)
    boshidan:
    {
    case 97 ... 109:
        a=a+qadam;
        if(a+qadam>'z'){
            qadam-=2;
            goto boshidan;
        }else{
            printf("%d\n", a);
        }
        break;

    boshidan2:
    case 110 ... 122:
       a=a-qadam;
       if(a-qadam<'a'){
           qadam+=2;
           goto boshidan2;
       }else{
           printf("%d\n", a);
       }
    
   
    }






    // if(a==97){
    //     printf("%c\n", a+25);
    // }else if(a==98){
    //     printf("%c\n", a+23)
    // }else if(a==99){
    //     printf("%c\n", a+21)
    // }else if(a==100){
    //     printf("%c\n", a+19)
    // }else if(a==101){
    //     printf("%c\n", a+17)
    // }else if(a==102){
    //     printf("%c\n", a+15)
    // }else if(a==103){
    //     printf("%c\n", a+13)
    // }else if(a==104){
    //     printf("%c\n", a+11)
    // }else if(a==105){
    //     printf("%c\n", a+9)
    // }else if(a==106){
    //     printf("%c\n", a+7)
    // }else if(a==107){
    //     printf("%c\n", a+5)
    // }else if(a==108){
    //     printf("%c\n", a+3)
    // }else if(a==109){
    //     printf("%c\n", a+1)
    // }e
    
    
}