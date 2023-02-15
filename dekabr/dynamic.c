#include <stdio.h>
#include <stdlib.h>

int main(){
    // int n;
    // printf("N ni kiriting:");
    // scanf("%d", &n);

    // int *ptr = malloc(n*4);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }
    // int sum=0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum+=ptr[i];
    // }
    // printf("Sum-->%d\n", sum);
    
    
    // int n;
    // printf("N ni kiriting: ");
    // scanf("%d", &n);

    // int *pointer=malloc(n*4);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &pointer[i]);
    // }
    // int max=0;
    // for (int i = 0; i < n; i++)
    // {
    //    if (max<pointer[i])
    //    {
    //    max=pointer[i];
    //    }
    // }
    // printf("Max-->%d\n", max);
    
    // int n;
    // printf("N ni kiriting:");
    // scanf("%d", &n);

    // int *ptr = malloc(n*4);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }
    // int max=0;
    // int min=ptr[0];
    // for (int i = 0; i < n; i++)
    // {
    //    if (max<ptr[i]) max=ptr[i];
    //    if(min>ptr[i]) min=ptr[i];
    // }
    // min+=max;
    // printf("Yeg'indi-->%d\n", min);
    

    // int n,arr[2];
    // printf("N ni kiriting: ");
    // scanf("%d", &n);
    // int *ptr2=malloc(arr[2*4]);
    // arr[0]=0;
    // arr[1]=0;
    // int *pointer=malloc(n*4);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &pointer[i]);
    // }
    // for (int i = 0; i <n; i++)
    // {
    //     if(pointer[i]%2==0){
    //         ptr2[0]+=pointer[i];
    //     }else{
    //         ptr2[1]+=pointer[i];
    //     }
    // }
    // printf("Juft-->%d Toq-->%d", ptr2[0], ptr2[1]);

   
    int n;
    printf("N ni kiriting:");
    scanf("%d", &n);

    int *ptr = calloc(n,4);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    int son=ptr[0];
    for (int i = 1; i < n; i++)
    {
        if(son>ptr[i]){
            int zapas=ptr[i];
            ptr[i]=son;
            ptr[i-1]=zapas;
        }else{
            son=ptr[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }puts("");
    

    
}