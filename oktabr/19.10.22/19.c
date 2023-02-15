#include <stdio.h>

int main(){
//     int bir, ikki, uch, tort, besh;
//     printf("1-son:");
//     scanf("%d", &bir);
//     printf("2-son:");
//     scanf("%d", &ikki);
//     printf("3-son:");
//     scanf("%d", &uch);
//     printf("4-son:");
//     scanf("%d", &tort);
//     printf("5-son:");
//     scanf("%d", &besh);
// if(bir>ikki && bir>uch && bir>tort & bir>besh){
//      printf("%d kattasi\n", bir);
// }else if(ikki>uch && ikki>tort && ikki>besh){
//     printf("%d kattasi\n", ikki);
// }else if(uch>tort && uch>besh){
//     printf("%d kattasi\n", uch);
// }else if(tort>besh){
//     printf("%d kattasi\n", tort);
// }else{
//     printf("%d kattasi\n", besh);
// }


// int b_xona , i_xona, u_xona, t_xona;
// printf("4 xonali son kiriting: ");
// scanf("%1d%1d%1d%1d", &b_xona, &i_xona, &u_xona, &t_xona);
// if(b_xona!=i_xona && b_xona!=u_xona && b_xona!=t_xona){
//     printf("%d soni o'zgacha ekan\n", b_xona);
// }else if(i_xona!=b_xona && i_xona!=u_xona && i_xona!=t_xona){
//     printf("%d soni o'zgacha ekan\n", i_xona);
// }else if(u_xona!=i_xona && u_xona!=b_xona && u_xona!=t_xona){
//     printf("%d soni o'zgacha ekan\n" , u_xona);
// }else{
//     printf("%d soni o'zgacha ekan\n", t_xona);
// }

// switch (b_xona!=i_xona && b_xona!=u_xona && b_xona!=t_xona)
// {
// case 1:
//     puts("1 xonadagi son o'zgacha ekan");
//     break;
// case 0:
//     switch (i_xona!=b_xona && i_xona!=u_xona && i_xona!=t_xona)
//     {
//     case 1:
//         puts("2 xonadagi son o'zgacha ekan");
//         break;
//     case 0:
//      switch (i_xona!=b_xona && i_xona!=u_xona && i_xona!=t_xona)
//     {
//      case 1:
//         puts("3 xonadagi son o'zgacha ekan");
//         break;
//     case 0:
//         puts("4 xonadagi son o'zgacha ekan");
//         break;
//      }
//     }
// }


// int b, i,u;
// printf("1-son:");
// scanf("%d", &b);
// printf("2-son:");
// scanf("%d", &i);
// printf("3-son:");
// scanf("%d", &u);

// if(b<i && b<u){
//     printf("%d", b);
// }else if(i<u && i<b){
//     printf("%d", i);
// }else{
//     printf("%d", u);
// }

// if((b>i && i>u) || (b<i && i<u)){
//    printf("%d", i);
// }else if((i>b && u<b) ||(i<b && u>b)){
//     printf("%d", b);
// }else{
//     printf("%d", u);
// }

// if(b>i && b>u){
//     printf("%d\n", b);
// }else if(i>u){
//     printf("%d\n", i);
// }else{
//     printf("%d\n", u);
// }

int son1, son2;
printf("birinchi sonni kiriting: ");
scanf("%d", &son1);
printf("ikkinchi sonni kiriting: ");
scanf("%d", &son2);

switch (son1%son2==0)
{
case 1 :
    puts("correct");
    break;
case 0:
    puts("wrong");
    break;

}


































}