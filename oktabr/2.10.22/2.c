#include <stdio.h>

int main(){
//     int n;
//     printf("Yil kiriting:");
//     scanf("%d", &n);
//     if(n%400==0 || n%4==0){
//         puts("Siz kiritgan yil kabisa yili ekan");
//     }else if(n%100==0){
//         puts("siz kiritgan son kabisa yili emas ekan");
//     }
//     else{
//         puts("siz kiritgan son kabisa yili emas");
//     }


int sekund,minut=0, soat=0,kun=0;
printf("Soni kiriting:");
scanf("%d", &sekund);
for(;sekund>=86400;sekund-=86400){
    kun++;
}
for(;sekund>=3600;sekund-=3600){
    soat++;
}for(;sekund>=60;sekund-=60){
    minut++;
}
printf("%dkun,%dsoat, %dminut, %dsekund\n",kun, soat,minut,sekund);

// for(int qator=5,i=1;i<=qator;i++){
//     for(int j=1;j<=qator;j++){
//         if(j==1 || j==qator || i==1 || i==qator){
//             printf("1 ");
//         }else if(j==2 || j==4 || i==2 || i==4){
//             printf("2 ");
//         }else{
//             printf("3 ");
//         }
        
//     }
//     puts("");
// }





}