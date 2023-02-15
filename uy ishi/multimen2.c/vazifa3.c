#include <stdio.h>

int main(){
     int stop;
    printf("Stopni kiriting bro:");
    scanf("%d",&stop);
    int massiv[stop][stop];
    for (int i = 0; i < stop*stop; i++)
       scanf("%d", &massiv[0][i]);
    
    int jami=0;
    for (int i = 0; i < stop; i++)
        for (int j = 0; j < stop; j++)
            if(j>i){
                 printf("%d",massiv[i][j]); 
                 jami=jami+massiv[i][j];
             } 
    
        
    
    printf("\nResult:%d\n", jami);
}