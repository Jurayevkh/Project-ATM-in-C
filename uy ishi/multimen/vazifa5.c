#include <stdio.h>

int main(){
     int stop;
     printf("Qator va ustun sonini kiriting:");
     scanf("%d",&stop);
     int arr3[stop][stop];
     for (int i = 0; i < stop; i++)
     {
       for (int j = 0; j < stop; j++)
       {
           scanf("%d",&arr3[i][j]);
       }
       
     }

     for (int i = 0; i < stop; i++)
     {
      for (int g = 0; g < stop; g++)
      {
         for (int j = 0; j < stop-g-1; j++)
         {
             if (arr3[i][j]>arr3[i][j+1]){
                int temp=arr3[i][j];
                arr3[i][j]=arr3[i][j+1];
                arr3[i][j+1]=temp;
            }
             
         }  
      }
         
         
         
         
     }

     for (int i = 0; i < stop; i++)
     {
         for (int j = 0; j < stop; j++)
         {
             printf(" %d ", arr3[i][j]);
         }
         puts("");
     }
     
     
   

}