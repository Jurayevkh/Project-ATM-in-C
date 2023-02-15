#include <stdio.h>

int main(){
//    puts("#------------------------------------------ #");
//    puts("#Hurmatli Rustambek Jo'rayev                # "); 
//    puts("#Sizni palonchiyevlar to'yi munosabati bilan#");
//    puts("#6:00 da nahorgi oshga taklif qilamiz       #");     
//    puts("#-------------------------------------------#");

// puts("*   *");
// puts(" * *");
// puts("  *");
// puts(" * *");
// puts("*   *");

// printf("%3d\n", 45);


// 
// int yosh;
// printf("Yoshingizni kiriting: ");
// scanf("%d", &yosh);
// printf("Sizning 2 yildan keyingi yoshingiz %i\n", yosh+2);



// int son;
// printf("son kiriting: ");
// scanf("%d", &son);
// printf("siz kiritgan soning kvadrati : %d " , son^2);


// int a,b,c;
// printf("birinchi sonin kiriting:");
// scanf("%d",&a);
// printf("ikkinchi sonni kiriting: ");
// scanf("%d", &b);
// c=a;
// a=b;
// b=c;
// printf("%d %i", a ,b);


//Uyga vazifa Jo'rayev Rustambek N10 guruhi (13:30)

//Birinchi dastur
int a, birlik, yuzlik, onlik;
printf("3xonali son kiriting: ");
scanf("%3d", &a);
yuzlik = a/100;
onlik=a/10%10;
birlik=a%10;
printf("%d\n", yuzlik+onlik+birlik);

//Ikkinchi dastur
int number,number1, number2;
printf("2 xonali son kiriting: ");
scanf("%2d", &number);
number1=number/10;
number2=number%10;
printf("%i%d=number\n", number2 , number1);


//Uchinchi dastur
int qiymat , bir, yuz, on;
    printf("3 xonali son kiriting: ");
    scanf("%3d", &qiymat);
    yuz=qiymat/100;
    on=qiymat/10%10;
    bir=qiymat%10;
    printf("Yuzlar:%d\nO'nlar:%i\nBirlar:%d\n", yuz,on,bir);
//To'rtinchi dastur
int son;
printf("Son kiriting: ");
scanf("%d", &son );
printf("%i\n", son*5);

//Beshinchi dastur
int birinchi , ikkinchi;
printf("Birinchi sonni kiriting: ");
scanf("%d", &birinchi);
printf("Ikkinchi sonni kiriting: ");
scanf("%i", &ikkinchi);
printf("%d+%d=%i\n", birinchi, ikkinchi ,birinchi+ikkinchi);
printf("%d-%d=%i\n", birinchi, ikkinchi,birinchi-ikkinchi);
printf("%d*%d=%i\n", birinchi, ikkinchi,birinchi*ikkinchi);
printf("%d/%d=%i\n", birinchi, ikkinchi,birinchi/ikkinchi);
printf("%d%%%d=%i\n", birinchi, ikkinchi,birinchi%ikkinchi);

//Oltinchi dastur
int k=1,r=2,l=3,m=4,n=5,p=6,y=7,v=8,j=9,w=10;
printf("%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n", k,k,k*k,k,r,k*r,k,l,k*l,k,m,k*m,k,n,k*n,k,p,k*p,k,y,k*y,k,v,k*v,k,j,k*j,k,w,k*w,r,k,r*k,r,r,r*r,r,l,r*l,r,m,r*m,r,n,r*n,r,p,r*p,r,y,r*y,r,v,r*v,r,j,r*j,r,w,r*w,l,k,l*k,l,r,l*r,l,l,l*l,l,m,l*m,l,n,l*n,l,p,l*p,l,y,l*y,l,v,l*v,l,j,l*j,l,w,l*w,m,k,m*k,m,r,m*r,m,l,m*l,m,m,m*m,m,n,m*n,m,p,m*p,m,y,m*y,m,v,m*v,m,j,m*j,m,w,m*w,n,k,n*k,n,r,n*r,n,l,n*l,n,m,n*m,n,n,n*n,n,p,n*p,n,y,n*y,n,v,n*v,n,j,n*j,n,w,n*w);
printf("%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n\n\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n%d*%d=%d\n", p,k,p*k,p,r,p*r,p,l,p*l,p,m,p*m,p,n,p*n,p,p,p*p,p,y,p*y,p,v,p*v,p,j,p*j,p,w,p*w,y,k,y*k,y,r,y*r,y,l,y*l,y,m,y*m,y,n,y*n,y,p,y*p,y,y,y*y,y,v,y*v,y,j,y*j,y,w,y*w,v,k,v*k,v,r,v*r,v,l,v*l,v,m,v*m,v,n,v*n,v,p,v*p,v,y,v*y,v,v,v*v,v,j,v*j,v,w,v*w,j,k,j*k,j,r,j*r,j,l,j*l,j,m,j*m,j,n,j*n,j,p,j*p,j,y,j*y,j,v,j*v,j,j,j*j,j,w,j*w,w,k,w*k,w,r,w*r,w,l,w*l,w,m,w*m,w,n,w*n,w,p,w*p,w,y,w*y,w,v,w*v,w,j,w*j,w,w,w*w);


}


