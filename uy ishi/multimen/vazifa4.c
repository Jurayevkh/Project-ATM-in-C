#include <stdio.h>

int main(){
    int diapazon;
   printf("Stopni kiriting:");
   scanf("%d", &diapazon);
   int massiv[diapazon][diapazon];
   for (int i = 0; i < diapazon; i++)
   {
      for (int j = 0; j < diapazon; j++)
      {
          if(i==0 || j==0 || i==diapazon-1 || j==diapazon-1){
              printf("X");
          }
          else{
              printf(" ");
          }

      }
              puts("");
      
   }
}