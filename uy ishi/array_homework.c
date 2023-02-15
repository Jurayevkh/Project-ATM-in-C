#include <stdio.h>

//Jo'rayev Rustambek N10 guruhi (13:30)

int main(){
    //Birinchi misol
    int massiv[5]= {6,2,3,4,5};
    int index0;
    index0=massiv[0];
    for (int i = 1; i<5 ; i++)
    { 
        
        printf("%d ", massiv[i]);
             
    
         
    }
    printf("%d\n ", index0);
    
    
    //Ikkinchi misol
    int n;
    scanf("%d", &n);
    int seriya[7]={1,2,3,4,5,6,7};
    for (int i =n ; i <7; i++)
    {
        printf("%d ", seriya[i]);
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", seriya[i]);
    }

     puts("");
    //Uchinchi misol
    int arr[8]={1,2,3,4,5,6,7,8};
    for (int i = 3; i >= 0 ; i--)
       {
           printf("%d ", arr[i]);
       }
       
    for (int i = 4; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    //To'rtinchi misol
    int JuftToq[10];
    int juft=0,toq=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &JuftToq[i]);
        if(i%2==0){
           juft+=JuftToq[i];
        }else if(i%2!=0){
            toq+=JuftToq[i];
        }
    }

    toq-=juft;
    printf("%d\n", toq);

    //Beshinchi misol
    float birArr[5];
    float ikkiArr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Birinchi Array uchun:");
        scanf("%f", &birArr[i]);
        printf("Ikkinchi array uchun:");
        scanf("%f", &ikkiArr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%f ", (birArr[i]+ikkiArr[i])/2);
    }
    


    
    

}