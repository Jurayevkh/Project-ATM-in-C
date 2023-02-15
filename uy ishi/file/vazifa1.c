#include <stdio.h>

int main(){
    FILE *ptr = fopen("text.txt","r"), *ptr2=fopen("text1.txt","w"), *ptr3=fopen("text2.txt","w");
    char harf,arr[20];
    int i=0,count=0;
    while ((harf=fgetc(ptr))!=EOF)
    {
       if(i%2==0) fprintf(ptr2,"%c", harf);
       else{
           arr[count]=harf;
           count++;
       }
       i++;
    }
    for (int i = count-1; i>=0; i--)
    {
       fprintf(ptr3,"%c", arr[i]);
    }




}