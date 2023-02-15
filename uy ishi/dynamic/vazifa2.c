#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    /*-12 dan 26 gacha random sonlar bilan N ta elementdan iborat int seriyani to'ldiring
    va ushbu seriyadagi manfiy qiymatli sonlarni nolga musbat sonlar 1 ga almashtiring va natijani
    chiqaring
    */

    srand(time(NULL));
    int n;
    printf("N ni kiriting:");
    scanf("%d", &n);
    int *ptr=calloc(n, sizeof(int));
    for (int i = 0; i <n; i++)
    {
       ptr[i]= rand()%26-12; 
    }
    for (int i = 0; i < n; i++)
    {
        if(ptr[i]<0){
           printf(" {%d} ", ptr[i]);
           ptr[i]=0;
        }
        else{
           printf(" {%d} ", ptr[i]);
           ptr[i]=1; 
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    puts("");
    
        
}