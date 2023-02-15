#include <stdio.h>

void recursiveOsish(int a, int b){
     if(a>b) return;
     printf("%d ", a);
     puts("");
     a++;
     recursiveOsish(a,b);
}

void recursiveKamayish(int a, int b){
     if(a<b) return;
     printf("%d ", a);
     puts("");
     a--;
     recursiveKamayish(a,b);
}


int main(){
    int a,b;
    printf("Startni kiriting: ");
    scanf("%d", &a);
    printf("Stopni kiriting: ");
    scanf("%d", &b);
    a>b ? recursiveKamayish(a,b) : recursiveOsish(a,b);
   
}