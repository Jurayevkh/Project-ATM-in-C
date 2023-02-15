#include <stdio.h>

void splitNum(int son){
   if(son==0)return;
   int num=son%10;
   splitNum(son/10);
   printf("%d ", num);
}

int main(){
    int son;
    printf("Son kiriting: ");
    scanf("%d", &son);
    splitNum(son);
}