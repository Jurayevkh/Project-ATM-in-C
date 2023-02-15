#include <stdio.h>

void Nrecursive(int i,int jami,int a){
    if(i<=a){
        jami+=i;
        i++;
    }
    else{
        printf("%d\n", jami);
        return;
    }
    Nrecursive(i,jami,a);
}

int main(){
    int n,jami=0,i=1;
    printf("N ni kiriting: ");
    scanf("%d", &n);
    Nrecursive(i,jami,n);
}