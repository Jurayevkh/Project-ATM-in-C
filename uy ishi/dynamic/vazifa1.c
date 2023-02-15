#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    /*-46 dan 5 gacha random sonlar bilan N ta elementdan iborat int seriyani to'ldiring
    va ushbu seriyadagi faqat toq qiymatli sonlarni bo'sh qoldirib chiqaring
    Input n=5 array= 1 -23 -30 -43 3
    Output:   30  2*/
    srand(time(NULL));
    int n;
    printf("N ni kiriting:");
    scanf("%d", &n);
    int *ptr = calloc(n,4);
    printf("Input-->");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = rand()%5-46;

    }
    
    for (int i = 0; i < n; i++)
    {
        if(ptr[i]%2)
           printf(" ");
        else
        printf("%d ", ptr[i]);
    }
    
    


}