#include <stdio.h>

int main(){

// int n;
// printf("Xonalar sonini kiriting:");
// scanf("%d", &n);
// int massiv[n];
// for (int i = 0; i < n; i++)
// {
//     printf("Son kiriting:");
//     scanf("%d" ,&massiv[i]);
// }
// if(n%2==0){
//     int a=n/2;
//     int first_overall, second_overall;
//     for (int i = 0; i < a; i++)
//     {
//         first_overall+=massiv[i];
//     }
//     for (int i = a; i < n; i++)
//     {
//         second_overall+=massiv[i];
//     }

//     if(first_overall==second_overall)puts("true");
//     else puts("false");
    
    

// }else if(n%2!=0){
//     int b=n/2;
//     printf("%d\n", b);
//     int overall1=0,overall2=0;
//     for (int i = 0; i < b; i++)
//     {
//         overall1+=massiv[i];
//     }
//     for (int i = b+1; i < n ; i++)
//     {
//         overall2+=massiv[i];
//     }
//     if (overall1==overall2) puts("true");
//     else if(overall1!=overall2) puts("false");
    
    
    
// }




// int a=0,b=0;
// scanf("%d %d", &a,&b);
// for (int i = a-b; i <= a+b; i++)
// {   
//     printf("%d ", i);
// }


int a,b;
scanf("%d %d", &a,&b);
for (int i = a; i <= b; i++)
{
    if(i%2==0){
        printf("%d\n", i*(-1));
    }else{
        printf("%d\n", i);
    }

}
















}