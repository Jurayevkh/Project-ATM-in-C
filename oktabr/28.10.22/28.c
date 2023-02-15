#include <stdio.h>

int main(){
 

    // for(int a=1, j=10; a<10; a++, j--){
    //     if(a==3 || a==7) continue;
    //     printf("%d %d\n",a,j);
    // }

    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            printf("%.2d*%d=%.2i  ",i,j,i*j);
        }
     puts("");  
    }

}