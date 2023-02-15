#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void inputArr(int arr[],int uzunlik){
    for (int i = 0; i < uzunlik; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}


int main(){
    // int n;
    // scanf("%d",&n);
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i]=rand()%n;
    //     printf("%d ", arr[i]);
    // }
    // puts("");
    // for (int i = 0; i < n-1; i++)
    // {
    //   for (int j = 0; j <n-i-1; i++)
    //   {
    //       if(arr[j]<arr[j+1]){
    //           int zapas = arr[j];
    //           arr[j]=arr[j+1];
    //           arr[j+1]=zapas;
    //       }
    //   }
      
    // }

    // printArr(arr,n);


    // int massiv[10]={1,3,10,-2,5,4,9,3};
    // int m;
    // scanf("%d",&m);
    
   
    // for (int i = 0; i < m-1; i++)
    // {
    //   for (int j = 0; j <=m-i-1; j++)
    //   {
    //       if(massiv[j]>massiv[j+1]){
    //           int zapas = massiv[j];
    //           massiv[j]=massiv[j+1];
    //           massiv[j+1]=zapas;
    //       }
    //   }
    // }
    
    //     printf("Max-----> %d\nMin---> %d\n",massiv[m],massiv[0]);

    // printArr(massiv,m);
    
    // int diapazon=0;
    // printf("chegarani kiriting:");
    // scanf("%d", &diapazon);
    // int seriya[diapazon];
    // inputArr(seriya,diapazon);
   
    // for (int i = 0; i < diapazon-1; i++)
    // {
    //   for (int j = 0; j <=diapazon-i-1; i++)
    //   {
    //       if(seriya[j]<seriya[j+1]){
    //           int zapas = seriya[j];
    //           seriya[j]=seriya[j+1];
    //           seriya[j+1]=zapas;
    //       }
    //   }
    // printArr(seriya,diapazon);

      
    // }
    // for (int i = 1; i <=diapazon ; i++)
    // { 
    // if(seriya[diapazon-1]!=seriya[diapazon-i-1]){   
    //   printf("eng kattsi-->%d\nundan keyingi--->%d\n",seriya[diapazon-1],seriya[diapazon-i-1]);
    //   break;
    // }else if(seriya[diapazon-1]==seriya[diapazon-i-1]){
    //     printf("ikkinchi katta son yo'q\n");
    //     break;
    // }

    // }



    int n;
    scanf("%d", &n);
    int qoldiq[100];
    int j=0;
    for (int i = 2; n != 1;j++)
    {
        qoldiq[j]=n%i;
        n=n/2;

    }
    printf("1 ");
    for (int a=j-1; a!=-1; a--) 
    {
          printf("%d ",qoldiq[a]);
    }
    

   

    



    
}
