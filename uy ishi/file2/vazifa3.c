#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr =  fopen("text.txt", "r");
    char harf[50];
    int count=0;
    while (!feof(ptr))
    {
        fscanf(ptr,"%s",harf);
        if(harf[0]>='A'&&harf[0]<='Z')
            count++;
    }
     printf("Fayl ichida %d ta katta harf bilan boshlangan so'z bor\n", count);

}