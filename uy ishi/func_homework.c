#include <stdio.h>
#include <math.h>
//Jo'rayev Rustambek N10 (13:30)guruhi 3.10.22 sana uy ishisi

//Birinchi uy ishi
int fact(int arg){
    int k=1;
    for(int n=1;n<=arg;n++){
        k*=n;
    }
    return k;
}

void firstHomeWork(int arg){
    int x,y,z;
    if(arg>99){
        x = arg /100;
        y = arg /10%10;
        z = arg % 100;
    }else if(arg>10){
        y = arg /10%10;
        z = arg % 100;
    }if(arg==fact(x)+fact(y)+fact(z)||arg==fact(y)+fact(z) || arg==fact(arg)){
        puts("1");
    }else{
        puts("0");
    }
}


//Ikkinchi uy ishi
void harf(char c)
{
    if(c>='a' && c<='z'){
        puts("true");
    }else{
        puts("false");
    }
}

//Uchinchi uy ishi 
void butunSon(int a, int b){
    a=pow(a,b);
    printf("%d\n", a);
}

//To'rtinchi uy ishi 
float engKattaSon(float a, float b, float c){
    if(a>b && a>c){
        return a;
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}

//Beshinchi uy ishi
void musbatOrManfiy(int a){
     if(a>0){
         puts("musbat son kiritdingiz");
     }else if(a<0){
         puts("Manfiy son kiritingdiz");
     }else{
         puts("0 musbat ham manfiy ham emas");
     }
}

//Oltinchi uy ishi 
void sonKiritish(int a){
    printf("Siz kiritgan son %d\n", a);
}

//Yettinchi uy ishi
void word(){
    puts("I hate programming");
}

int main(){
 
//Birinchi uy ishi(int main qismi)

firstHomeWork(146);

//Ikkinchi uy ishi(int main qismi)
harf('A');

//Uchinci uy ishi (int main  qismi)
butunSon(5,2);

//To'rtinchi uy ishi (int main qismi)

float u=engKattaSon(3.6,3,3.9);
printf("%f\n", u);

//Beshinchi uy ishi(int main qismi)
musbatOrManfiy(0);

//Oltinchi uy ishi (int main qismi)
sonKiritish(7);

//Yettinchi uy ishi(int main qismi)
word();


}