#include<stdio.h>

int main(){
    FILE *ptr =fopen("text.txt","r+");
    char harf,soz[50];
    int count=0,i=0;
    while ((harf=fgetc(ptr))!=EOF)
    {
       i++;
       if(harf==' ') count++;
       if(count==4) {
        fscanf(ptr,"%s",soz);
        break;
        }
    }

    for (int i = 0; i < count-1; i++)
    {
         if(soz[i]>soz[i+1]){
             char zapas=soz[i];
             soz[i]=soz[i+1];
             soz[i+1]=zapas;
            }
    }
    rewind(ptr);
    fseek(ptr,i,SEEK_CUR);
    fprintf(ptr,"%s",soz);
}