#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *ptr = fopen("text.txt","r"), *ptr2=fopen("matn2.txt","w"), *ptr3=fopen("matn3.txt","w");
    char symbol;
    while ((symbol=fgetc(ptr))!=EOF)
    {
        if(tolower(symbol)=='a'|| tolower(symbol)=='u'||tolower(symbol)=='i'|| tolower(symbol)=='o'|| tolower(symbol)=='e'){
            fprintf(ptr2 ,"%c",symbol);
        }else{
            fprintf(ptr3,"%c",symbol);
        }
    }



}
