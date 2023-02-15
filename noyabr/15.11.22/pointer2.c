#include <stdio.h>

int main(){
    // int arr[5]={1,2,3,4,5};
    // int *pointer=arr;
    // for (int i = 1; i < 5; i++)
    // {
    //     *pointer=*pointer+arr[i];
    // }
    // printf("%d\n",*pointer);


     int n;
     printf("Input here stop bro:");
     scanf("%d", &n);
     //int *ptr=n;
     int seriya[n];
     for (int i = 0; i < n; i++)
     {
         scanf("%d", seriya+i);
     }
     int *korsatkich=seriya;
     int zapas=0;
     zapas=korsatkich[0];
     korsatkich[0]=korsatkich[n-1];
     korsatkich[n-1]=zapas;
     puts("Results:");
     for (int i = 0; i < n; i++)
     {
       printf("%d",*(korsatkich+i));
     }
     puts("");





    // char c;
    // printf("Enter here alpha:");
    // scanf(" %c", &c);
    // *ptr=c;
    // if(*ptr>'a')
    





}