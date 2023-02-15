#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void maxNum(int arr[],int uzunlik){
    int a;
    for (int i = 0; i < uzunlik; i++)
    {
        if(a<arr[i]){
            a=arr[i];
        }
    }
    printf("MaxNumber------>%d\n",a);
    
}

void juftNumber(int arr[],int uzunlik){
    for (int i = 0; i < uzunlik; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d", arr[i]);
        }
        
    }
    
}

void printArr(int arr[],int uzunlik){
    for (int i = 0; i < uzunlik; i++)
    {
        printf("%d  ", arr[i]);
    }
    puts("");
    juftNumber(arr,10);
    //maxNum(arr,10);
}

void sArr(int arr[],int uzunlik){
     srand(time(NULL));
     for (int i = 0; i < uzunlik; i++)
     {
         arr[i]=rand()%52-46;
     }
     printArr(arr,10);
     
}





int main(){
    // srand(time(0));
    // int arr[10]={};

    // for (int i = 0; i < 10; i++)
    // {
    //     int a=rand()%31+15;
    //     if(a%2!=0){
    //         a++;
    //     }
    //     arr[i]=a;
 
    //     printf("%d ", arr[i]);
        // arr[i] = rand()%31+15;
        // 
    //}

    // int massiv[10]={1,2,3,4,5,6,7,8,9,10};
    // sArr(massiv,10);
    
    int n;
    scanf("%d", &n);
    int firstArr[n];
    sArr(firstArr,10);
    

















}