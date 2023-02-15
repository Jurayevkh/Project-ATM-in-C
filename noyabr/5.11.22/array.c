#include <stdio.h>



int main (){
    // int arr[10];
    // int natija=0;
    // for(int i=0;i<10;i++){
    //     scanf("%d", &arr[i]);
    //     if(arr[i]%2==0){
    //        natija+=arr[i];
    //     }
    // } 
    
    // printf("%d\n", natija);
  

    // int toqArr[10];
    // for(int i=0;i<10;i++){
    //     scanf("%d", &toqArr[i]);
    //     if(toqArr[i]%2!=0){
    //         printf("%d ", toqArr[i]);
    //     }
    // }
    
    // int jamiArr[10];
    // int natija2=1;
    // for(int i=0;i<10;i++){
    //     scanf("%d", &jamiArr[i]);
    //     natija2*=jamiArr[i];
    // }
    // printf("%d\n", natija2);

    // int toqJuftArr[10];
    // int juftNatija=0;
    // int toqNatija=0;
    // for(int i=0;i<10;i++){
    //     scanf("%d", &toqJuftArr[i]);
    //     if(toqJuftArr[i]%2==0){
    //         juftNatija+=toqJuftArr[i];
    //     }else{
    //         toqNatija+=toqJuftArr[i];
    //     }
    // }
    // printf("Juft------->%d\n",juftNatija);
    // printf("Toq------->%d\n",toqNatija);
    
    // int engKatta[5];
    // for(int i;i<5;i++){
    //    scanf("%d", &engKatta[i]);
       
    // }

    // int toqIndex[5];
    // int natija3=0;
    // for (int i = 0; i < 6; i++)
    // {
    //     scanf("%d", &toqIndex[i]);
    //     if(i%2!=0){
    //         natija3+=toqIndex[i];
    //     }
    // }
    // printf("%d\n", natija3);

    int toqToManfiy[5];
    for (int i = 0; i < 6; i++){
        scanf("%d", &toqToManfiy[i]);
        if(i%2!=0){
            if(toqToManfiy[i]>0){
                printf("%d\n", toqToManfiy[i]*-1);
            }else{
                printf("%d\n", toqToManfiy[i]);
            }
        }
    }
    




}