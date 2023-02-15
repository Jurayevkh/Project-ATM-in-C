#include <stdio.h>

int main(){
    FILE *ptr =fopen("text.txt","r");
    char harf,soz[50];
    int count=0;
    while ((harf=fgetc(ptr))!=EOF)
    {
       if(harf==' ') count++;
       if(count==4) fscanf(ptr,"%s",soz);
    }

    for (int i = 0; i < count-1; i++)
    {
         if(soz[i]>soz[i+1]){
             char zapas=soz[i];
             soz[i]=soz[i+1];
             soz[i+1]=zapas;
            }
    }
    printf("\n\n%s\n\n",soz);



}