#include <stdio.h>

int main(){
     int chegara;
    printf("Stopni kiriting bro:");
    scanf("%d",&chegara);
    int massiv[chegara][chegara];
    for (int i = 0; i < chegara*chegara; i++)
       scanf("%d", &massiv[0][i]);
    
    int count=0;
    for (int i = 0; i < chegara; i++){
        for (int j = 0; j < chegara; j++)
        {
             if(i>j){
                 printf("%d",massiv[i][j]); 
                 count=count+massiv[i][j];
             } 
        }
    }
        
    
    printf("\nResult:%d\n", count);
}