#include <stdio.h>

int main(){
     int n;
   printf("Qator va ustun sonini kiriting:");
   scanf("%d",&n);
   int arr[n][n];
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < n; j++)
       {
           scanf("%d",&arr[i][j]);
       }
       
   }
   int hisob=0;
   printf("Number:\n");
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {   
           
           if((i+1==n-1 && j+1==n-1) || (i==n-1 && j==0) || (j==n-1 && i==0)){
              printf(" * ->[%d]",arr[i][j]);
              hisob+=arr[i][j];
           }
           else printf(" ");
        
       }
        puts("");
       
   }
  
       printf("\nResults %d\n", hisob);
         
     
     
}