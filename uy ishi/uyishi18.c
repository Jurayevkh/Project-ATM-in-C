#include <stdio.h>

int main(){
    // Uy ishi Jo'rayev Rustambek N10 guruhi (13:30)

//Birinchi dastur
int h, j;
printf("Birinchi sonni kiriting: ");
scanf("%d", &h);
printf("Ikkinchi sonni kiriting: ");
scanf("%d", &j);

switch (h>j)
{
case 1:
    printf("%d eng kattasi\n", h);
    break;
case 0:
    printf("%d eng kattasi\n", j);
    break;

}

//Ikkinchi dastur
int kun , oy;
printf("kunni kiriting: ");
scanf("%d", &kun);
printf("Oyni kiriting: ");
scanf("%d", &oy);


switch (oy)
{ 
case 1:
    printf("%d-Yanvar\n", kun);
    break;
case 2:
    printf("%d-Fevral\n", kun);
    break;
case 3:
    printf("%d-Mart\n", kun);
    break;
case 4:
    printf("%d-Aprel\n", kun);
    break;
case 5:
    printf("%d-May\n", kun);
    break;
case 6:
    printf("%d-Iyun\n", kun);
    break;
case 7:
    printf("%d-Iyul\n", kun);
    break;
case 8:
    printf("%d-Avgust\n", kun);
    break;
case 9:
    printf("%d-Sentyabr\n", kun);
    break;
case 10:
    printf("%d-Oktyabr\n", kun);
    break;
case 11:
    printf("%d-Noyabr\n", kun);
    break;
case 12:
    printf("%d-Dekabr\n", kun);
    break;
default:
    puts("Bunday sana mavjud emas");
    break;
   }


//Uchinchi dastur
int son5,yuzlar, onlar, birlar;
printf("1 dan 999 gacha son kiriting: ");
scanf("%d", &son5);
yuzlar = son5/100;
onlar = son5/10%10;
birlar = son5%10;

if (yuzlar==1){
 printf("Bir yuz");
 }
else if (yuzlar==2){
 printf("Ikki yuz");}
else if (yuzlar==3){
 printf("Uch yuz");}
else if (yuzlar==4){
 printf("To'rt yuz");}
else if (yuzlar==5){
 printf("Besh yuz");}
else if (yuzlar==6){
 printf("Olti yuz");}
else if (yuzlar==7){
 printf("Yetti yuz");}
else if (yuzlar==8){
 printf("Sakkiz yuz");}
else if (yuzlar==9){
 printf("To'qqiz yuz");}

if (onlar==1){
 printf(" O'n ");
}
else if (onlar==2){
    printf(" Yigirma ");
}
else if (onlar==3){
    printf(" O'ttiz ");
}
else if (onlar==4){
    printf(" Qirq ");
}
else if (onlar==5){
    printf(" Ellik ");
}
else if (onlar==6){
    printf(" Oltmish ");
}
else if (onlar==7){
    printf(" Yetmish ");
}
else if (onlar==8){
    printf(" Sakson ");
}
else if (onlar==9){
    printf(" To'qson ");
}

if (birlar==1){
    printf("bir\n");
}
else if (birlar==2){
    printf("ikki\n");
}
else if (birlar==3){
    printf("Uch\n");
}
else if (birlar==4){
    printf("To'rt\n");
}
else if (birlar==5){
    printf("Besh\n");
}
else if (birlar==6){
    printf("Olti\n");
}
else if (birlar==7){
    printf("Yetti\n");
}
else if (birlar==8){
    printf("Sakkiz\n");
}
else if (birlar==9){
    printf("To'qqiz\n");
}
 

//To'rtinchi dastur
char element;
printf("Harf kiriting: ");
scanf(" %c", &element);

if (element=='a'){
    printf("A\n");
}else if(element=='b'){
    printf("B\n");
}
else if(element=='c'){
    printf("C\n");
}else if(element=='d'){
    printf("D\n");
}else if(element=='e'){
    printf("E\n");
}else if(element=='f'){
    printf("F\n");
}else if(element=='g'){
    printf("G\n");
}else if(element=='h'){
    printf("H\n");
}else if(element=='i'){
    printf("I\n");
}else if(element=='j'){
    printf("J\n");
}else if(element=='k'){
    printf("K\n");
}else if(element=='l'){
    printf("L\n");
}else if(element=='m'){
    printf("M\n");
}else if(element=='n'){
    printf("N\n");
}else if(element=='o'){
    printf("O\n");
}else if(element=='p'){
    printf("P\n");
}else if(element=='q'){
    printf("Q\n");
}else if(element=='r'){
    printf("R\n");
}else if(element=='s'){
    printf("S\n");
}else if(element=='t'){
    printf("T\n");
}else if(element=='u'){
    printf("U\n");
}else if(element=='v'){
    printf("V\n");
}else if(element=='w'){
    printf("W\n");
}else if(element=='x'){
    printf("X\n");
}else if(element=='y'){
    printf("Y\n");
}else if(element=='z'){
    printf("Z\n");
}

if (element=='A'){
    printf("a\n");
}else if(element=='B'){
    printf("b\n");
}
else if(element=='C'){
    printf("c\n");
}else if(element=='D'){
    printf("d\n");
}else if(element=='E'){
    printf("e\n");
}else if(element=='F'){
    printf("f\n");
}else if(element=='G'){
    printf("g\n");
}else if(element=='H'){
    printf("h\n");
}else if(element=='I'){
    printf("i\n");
}else if(element=='J'){
    printf("j\n");
}else if(element=='K'){
    printf("k\n");
}else if(element=='L'){
    printf("l\n");
}else if(element=='M'){
    printf("m\n");
}else if(element=='N'){
    printf("n\n");
}else if(element=='O'){
    printf("o\n");
}else if(element=='P'){
    printf("p\n");
}else if(element=='Q'){
    printf("q\n");
}else if(element=='R'){
    printf("r\n");
}else if(element=='S'){
    printf("s\n");
}else if(element=='T'){
    printf("t\n");
}else if(element=='U'){
    printf("u\n");
}else if(element=='V'){
    printf("v\n");
}else if(element=='W'){
    printf("w\n");
}else if(element=='X'){
    printf("x\n");
}else if(element=='Y'){
    printf("y\n");
}else if(element=='Z'){
    printf("z\n");
}


}

