#include<stdio.h>

int main(){
    FILE *ptr =  fopen("file.txt", "r");
    char harf[50];
    int count=0,i=0;
    while (!feof(ptr))
    {
        i++;
        fscanf(ptr,"%s",harf);
        if(harf[0]>='A'&&harf[0]<='Z'){
           if(i==4)continue;
           else count++;
        }

    }
     printf("Fayl ichida %d ta katta harf bilan boshlangan so'z bor\n", count);
}