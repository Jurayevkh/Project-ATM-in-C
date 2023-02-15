#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void resultsArr(int arr[],int uzunlik){
    int results[uzunlik];
    int index=0;
    for (int i = 0; i < uzunlik; i+=2)
    {
      if(i+1!=uzunlik){
      results[index]=arr[i]+arr[i+1];
      printf("%d ",results[index]);
      index++;
      }
      else{
          printf("%d",arr[i]);
      }
    }
    puts("");
    
}

void printArr(int arr[], int uzunlik){
    printf("Random----->");
    for (int i = 0; i <= uzunlik; i++)
    {
    } 
    arr[1]=arr[10]-arr[0];
    printf("Natija--->%d",arr[1]);
    puts("");
}

void forInput(int uzunlik){
    int arr[uzunlik];
    for (int i = 0; i < uzunlik; i++)
    { 
        printf("Input here number--->");
        scanf("%d",&arr[i]);
    }
    resultsArr(arr,uzunlik);
}

void bubblesort(int arr[],int uzunlik){
    for (int i = 0; i <uzunlik-1; i++)
     {
      for (int j = 0; j <uzunlik-i-1; j++)

         {
          if(arr[j]<arr[j+1]){
              int zapas = arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=zapas;
            printf("%d ", arr[j]);

          }
      }
     }

}

void ToqAndJuft(int arr[], int uzunlik){
    int juft=0;
    int toq=0;
    for (int i = 0; i <uzunlik; i++)
    {
       if(i%2==0){
          juft+=arr[i];
       }else{
           toq+=arr[i];
       }
    }
    if(juft>toq){
        juft=juft-toq;
        printf("Juft---->%d \n",juft);
    }else if(toq>juft){
        toq=toq-juft;
        printf("Toq---->%d\n",toq);
    }
    
}

void randomNumber(int arr[],int uzunlik){
    srand(time(0));
    for (int  i = 0; i < uzunlik; i++)
    {
        arr[i]=rand()%10;
    }
    puts("");
    bubblesort(arr,uzunlik);
}


int main(){
    // int n;
    // printf("Chegarani kiriting:");
    // scanf("%d", &n);
    // forInput(n);

    int arr[10];
    randomNumber(arr,10);








}