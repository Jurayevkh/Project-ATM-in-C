#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr =fopen("text.txt","r"), *ikkilik=fopen("ikkilik.txt","w");
    char harf;
    int son;
    while ((harf=fgetc(ptr))!=EOF)
    {
        fprintf(ikkilik,"%d",son);
    }

}
