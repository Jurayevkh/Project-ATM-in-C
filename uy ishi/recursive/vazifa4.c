#include <stdio.h>
int hisob=0;

void isPrime(int i,int son){
    if(i>son) return;
    if(son%i==0) hisob++;
    i++;
    isPrime(i,son);
}

int main(){
    int son,i=1;;
    printf("Son kiriting: ");
    scanf("%d", &son);
    isPrime(i,son);
    if(hisob>2){
        puts("Tub son emas");
    }else{
        puts("Tub son");
    }
}