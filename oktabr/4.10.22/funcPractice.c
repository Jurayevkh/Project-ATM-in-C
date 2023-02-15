#include <stdio.h>

// void xontaxta(int razmer)
// {
//     for(int i=1;i<=razmer;i++){
//         for(int j=1;j<=razmer;j++){
//             if(j==1 || j==razmer || i==1 || i==razmer){
//                 printf("1");
//             }else{
//                 printf("0");
//             }
            
//         }
//      puts("");
//     }
// }
void tt(int razmer)
{
    for(int i=1;i<=razmer;i++){
        for(int j=1;j<=razmer;j++){
            if(j==1 || j==razmer || i==1 || i==razmer || j==i || i+j==razmer+1){ 
                printf(" 1 ");
            }
            else{
                printf("   ");
            }
            
        }
     puts("");
    }
}



int main(){
    // int a;
    // scanf("%d", &a);
    // xontaxta(a);


    int a;
    scanf("%d", &a);
    tt(a);


}