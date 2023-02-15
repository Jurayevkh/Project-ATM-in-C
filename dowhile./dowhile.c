#include <stdio.h>
#include <math.h>

int main(){
    //  int a,b;
    //  scanf("%d", &a);
    //  scanf("%d", &b);
    //  do{
    //     if(a%2==0){ 
    //       printf("%d\n", (int)pow(a,2));
    //     }else{
    //         printf("%f\n", sqrt(a));
    //     }
    //     a+=1;
      
    //  }while (a<=b);


    // int son, jami=0;
    // scanf("%10d", &son);
    // do{
    //    jami=jami+son%10;
    //    son/=10;
    // }while(son!=0);
    
    // printf("%d\n", jami);
    
    // int x,n=1;
    // scanf("%d", &x);
    // do{
    //     if(x%n==0){
    //         printf("%d ", n);
    //         n+=1;
            
    //     }else{
    //         n+=1;
    //     }



    // }while(n<x+1);

    // int y, hisob=0;
    // scanf("%d", &y);
    // do{
    //     hisob=hisob+y%10;
    //     y/=10;
        
    // }while(y);
    
    // if(hisob%2==0){
    //         puts("Rustambek");
    //     }else{
    //         puts("Jo'rayev");
    //     }

 
    

    int i=1,j, natija=1;
    scanf("%d", &j);
    do{
        natija*=i;
        i+=1;
    }while(i<j+1);

    printf("%d\n", natija);
    

    
















}