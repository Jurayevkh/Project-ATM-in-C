#include<stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    // FILE *ptr = fopen("matn.txt","w+");
    // fputs("osmon3ag1 bo1a1ar ",ptr);
    // char harf;
    // int sum=0;
    // rewind(ptr);
    // while((harf=fgetc(ptr))!=EOF)
    // {
    //     if(isdigit(harf)){
    //     sum+=harf-48;
    //     }
    // }
    // printf("Obshiy sum --%d--\n",sum);

    // FILE *ptr=fopen("text.txt","r"),*write=fopen("matn.txt","w");
    // int n;
    // char harf[400];
    // printf("N ni kiriting:");
    // scanf("%d", &n);
    // while (!feof(ptr))
    // {
    //    fgets()
    //    for (int i = 0; i <n; i++)
    //    {
    //        fprintf(write,"%c",harf);
    //    }

    // }

    FILE *ptr=fopen("text.txt","r"),*birlik=fopen("birlar.txt","w"),*ikkilik=fopen("ikkilar.txt","w"),*uchlik=fopen("uchlar.txt","w");
    char harf[5];
    while (!feof(ptr))
    {
        fscanf(ptr,"%s",harf);
       if(strlen(harf)==3) fprintf(uchlik,"%s ",harf);
       else if(strlen(harf)==2) fprintf(ikkilik,"%s ",harf);
       else if(strlen(harf)==1) fprintf(birlik,"%s ",harf);

    }




}