#include <stdio.h>
#include <math.h>

//Jo'rayev Rustambek N10 guruhi (13:30)for uy ishi


int main(){
//Birinchi dastur
int k, hona=0,armstrong=0, h,g,z;
printf("Armstrong uchun son kiriting :");
scanf("%d", &k);
h=k;
for(;k!=0;k/=10){
    hona++;
}
g=h;
for(;g!=0;){
    z=g%10;
    armstrong=armstrong+((int)pow(z,hona));
    g/=10;
}
if(armstrong==h){
    puts("Armstrong");
}else{
    puts("Armstrong emas");
}
printf("%d\n", armstrong);

//Ikkinchi dastur
int birinchi, ikkinchi, ekub;
printf("Birinchi sonni kiriting:");
scanf("%d", &birinchi);
printf("Ikkinchi sonni kiriting:");
scanf("%d", &ikkinchi);
printf("%d-ning bo'luvchilari->", birinchi);
for(int i=1;i<=birinchi;i++){
    if(birinchi%i==0){
        printf("%d ",i);
    }
    if(birinchi%i==0 && ikkinchi%i==0){
        ekub=i;
    }
}
puts("");
printf("%d-ning bo'luvchilari->", ikkinchi);
for(int i=1;i<=ikkinchi;i++){
    if(ikkinchi%i==0){
        printf("%d ",i);
    }
}
puts("");

printf("EKUB--->%d\n", ekub);

Uchinchi dastur 
int son1, son2;
printf("1-son:");
scanf("%d", &son1);
printf("2-son:");
scanf("%d", &son2);
for(;son1%son2 || son2%son1;){
    boshidan:
    if(son1>=son2){
        if(son1%son2==0){
        printf("EKUK--->%d\n",son1);
        break;
        }else{
             son1=son1+son1;
             goto boshidan; 
    }
   
    
    boshidan2:
    if(son2>son1){
        if(son2%son1==0){
        printf("EKUK---->%d\n",son2);
        }else if(son2%son1!=0){
        son2+=son2;
        goto boshidan2;
        }
    }
  }
}

 
 

//To'rtinchi dastur
int k_son , jami=0;
printf("Son!:");
scanf("%d", &k_son);
for(int i=1;i<k_son; i++){
    if(k_son%i==0){
        jami+=i;
    }
    
}
if(jami==k_son){
    printf("Mukammal son chunki %d soni %d soniga teng\n", jami,k_son);
}else{
    printf("Mukammal emas chunki %d soni %d soniga teng emas\n", jami,k_son);
}


//Beshinchi dastur
int tanlov, summa=0;
char tanlov2;
printf("Mahsulotlardan birini tanlang:\n1.Uzum - 15.000\n2.Anor - 5.000\n3.Anjir-30.000\n");
boshidan3:
printf("Enter here:");
scanf("%d", &tanlov);
printf("Yana mahsulot olasizmi?(h/y):");
scanf(" %c", &tanlov2);
switch (tanlov)
{
case 1:
    summa+=15000;
    break;

case 2:
    summa+=5000;
    break;
case 3:
    summa+=30000;
    break;
}
for(;tanlov2=='h';){
  goto boshidan3;
}
if(tanlov2=='y'){
      printf("Sizdan %d so'm\n", summa);
  }


//Oltinchi dastur
int son4,teskari=0,son5=0;
printf("Enter here son:");
scanf("%d", &son4);
son5=son4;
for(int birlar=0,onlar=0,yuzlar=0 ; son4!=0 ; ){
    birlar=son4%10;
    son4/=10;
    onlar=son4%10;
    son4/=10;
    yuzlar=son4%10;
    son4/=10;
    teskari=birlar*100+onlar*10+yuzlar;
    if(teskari==son5){
    printf("palindrome\n");
}else{
    printf("not palindrome\n");
}

}



}