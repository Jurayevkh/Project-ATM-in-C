#include <stdio.h>

int main(){
    int son[3];
    int a;
    //scanf("%d", son+3); //Sonning 0 indexiga 3 qiymat o'nga yurish

    // int sonlar[2][4]; //2 ta qutining ichida yana 4 quti bor deganday
    // int sonlar2[3][3]={1};//0 chi qatorni 0 indexiga 1 qo'yadi qogani 0 bo'ladi
    // int sonlar3[2][3]={1,2,3,4,5,6}; //{} qavs ichidagi qiymatlarni asosiy quti soni qarab taqsimlab beradi va ichidagi qutilarga joy to'lguncha qo'yadi agar joy qolib ketsa 0 bilan to'ldiradi
    // int sonlar4[3][5]=({1,2,3,4,5},{1,2,3,4,5})

    // int arr[5][4];

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    // }

    // int ozgaruvchi=arr[0][0];

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //        if(arr[i][j]>ozgaruvchi){
    //            ozgaruvchi=arr[i][j];
    //        }
    //     }
        
    // }
   
    
    // printf("%d\n", ozgaruvchi);

    

    //  int arr[3][3];
    //  int ustun_hisob=0;
    //  for (int i = 0; i < 3; i++)
    //  {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    //  }

    //  for (int i = 0; i < 3; i++)
    // {
    //     int ustun_hisob=0;
    //     printf("%d-qator:", i+1);
    //     for (int j = 0; j < 3; j++)
    //     {
    //        ustun_hisob=ustun_hisob+arr[i][j];
    //     }
    //     printf("%d\n",ustun_hisob);
    //     ustun_hisob=0;
        
    // }

    //  int arr[4][3];
    //  int ustun_hisob=0;
    //  for (int i = 0; i < 4; i++)
    //  {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    //  }

    //  for (int i = 0; i < 3; i++)
    // {
    //     int ustun_hisob=0;
    //     printf("%d-ustun:", i+1);
    //     for (int j = 0; j < 4; j++)
    //     {
    //        ustun_hisob=ustun_hisob+arr[j][i];
    //     }
    //     printf("%d\n",ustun_hisob);
    //     ustun_hisob=0;
        
    // }
    
    //  int arr[3][3];
    //  int ustun_hisob=0;
    //  for (int i = 0; i < 3; i++)
    //  {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    //  }

    //  for (int i = 0; i < 3; i++)
    // {
    //     int max;
    //     printf("%d-qator:", i+1);
    //     for (int j = 0; j < 3; j++)
    //     {

    //      if(arr[i][j]<arr[i][j+1]){
    //         max=arr[i][j+1];
    //      }else if(arr[i][j]>arr[i][j+1]){
    //          max=arr[i][j];
    //      }

    //     }
    //     printf("Max--->%d\n",max);
    
        
    // }

    //  int arr[4][3];
    //  for (int i = 0; i < 4; i++)
    //  {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    //  }

    //  for (int i = 0; i < 3; i++)
    // { 
    //     int max;
    //     printf("%d-ustun:", i+1);
    //     for (int j = 0; j < 4; j++)
    //     {
    //       if (arr[j][i]<arr[j][i])
    //       {
    //         max=arr[j][i+1];
    //       }else if(arr[j][i]>arr[j][i+1]){
    //           max=arr[j][i];
    //       }
          
    //     }
    //     printf("%d\n",max);
       
        
    // }


    
    // int arr[4][3];
    //  int ustun_hisob=0,qator=1;
    //  for (int i = 0; i < 4; i++)
    //  {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
        
    //  }
    //  int max=arr[0][0];
    //  for (int i = 0; i < 4; i++)
    //  {
    //     int sum=0;
    //    for (int j = 0; j <3; j++)
    //    {
    //        sum+=arr[i][j];
    //    }
    //    if(sum>max){
    //        max=sum;
    //        qator=i+1;
    //    }
       
    //  }
     
    
    
    //  printf("%d qator Max %d\n",qator,max);

    

 
     int n;
     printf("Son kiriting:");
     scanf("%d", &n);
     int newarr[n][n];
     for (int i = 0; i < n*n; i++)
     {
         scanf("%d",newarr[i]);
     }
     for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
             if(i==j){
                 printf("%d\n", newarr[i][j]);
             }else{
                 printf("");
             }
         }
         
     }
     






}