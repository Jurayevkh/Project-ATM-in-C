#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n;
    printf("N ni kiriting:");
    scanf("%d", &n);
    int arr[n];
    int *ptr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = rand()%6+5;
    }
    printf("Avval--> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    puts("");
    int index,index2;
    for (int i = 0; i < n+1; i++)
    {
       for (int j = i+1; j< n+1; j++)
       {
         if(ptr[i]>ptr[j]){

         }else{

         }
       }
    }
    int zapas=ptr[index];
    ptr[index]=ptr[index2];
    ptr[index2]=ptr[zapas];

    printf("Keyin--> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    puts("");


    int n;
    scanf("Hexni yozing%x",&n);
    printf("%d\n",n);


}