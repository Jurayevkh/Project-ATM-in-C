#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Jo'rayev Rustambek N10 guruhi (13:30) 8.11.22 sana uy ishisi

void howMany(int arr,int uzunlik){
    for (int i = 0; i < uzunlik; i++)
    {
        int hisoblagich;
        for (int j = 0; j < uzunlik; j++)
        {
            if(arr[i]==arr[j]){
            hisoblagich++;
        }
    }
    printf("%d---->%d",i,hisoblagich);
    }
}    


// void testArr(int arr[],int uzunlik){
// for (int j = 0; j < uzunlik; j++)
// {   int yangiArr[uzunlik];
//     int hisoblagich=0;
//     for (int i = 0; i <=uzunlik; i++)
//     {
      
//         // if(j==i){
//         //     i++;
//         // }
//         if(arr[i]==0){
//             j=0;
//             i++;
//         }
       
//         if(arr[j]==arr[i]){
//            hisoblagich++;
//         //    printf("%d ", arr[j]);

       
//          }
//         if(hisoblagich>=2){
//         if(arr[j]!=yangiArr[i])
//         {
//         yangiArr[uzunlik]=arr[j];
//         printf("%d ", arr[j]);
//         }
//          for (int i = 0; i < uzunlik; i++)
//          {
//            if(arr[j]==yangiArr[i]){
//               continue;
//            }
//         }
       
//         }
//     }
    
    
// }

// }

void inputArr(int arr[],int uzunlik){
    int i=0;
    for (; i < uzunlik; i++)
    {
        printf("Son kiriting:");
        scanf("%d", &arr[i]);
    }
    howMany(arr,uzunlik);

    
} 










int main(){

    
    //Ikkinchi uy ishi
    // int n;
    // printf("Qutilar sonini kiriting:");
    // scanf("%d", &n);
    // int massiv[n];
    // inputArr(massiv,n);
    


    //Uchinchi uy ishi
    int for_input;
    printf("Chegarani kiriting:");
    scanf("%d",&for_input);
    int toplam[for_input];
    inputArr(toplam,for_input);
    
    
}