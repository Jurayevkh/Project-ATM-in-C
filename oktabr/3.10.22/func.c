#include <stdio.h>
// void a(int first, int second,int first1,int second2){
//     first=first+second;
//     first1=first1-second2;
//     printf("%d\n",first);
//     printf("%d\n",first1);
// }


//     int first,second,first1,second2;
//     printf("first:");
//     scanf("%d", &first);
//     printf("second:");
//     scanf("%d", &second);
//     printf("first1:");
//     scanf("%d", &first1);
//     printf("second2:");
//     scanf("%d", &second2);
//     a(first,second,first1,second2);


//Birinchi misol
int parametr(){
    int a=4*53;
    return a;
}

//Ikkinchi misol
int apple(){
    printf("Apple\n");
    int a=17;
    return a;
    
}

//Uchinchi misol
int qiymat(){
    int d=44;
    return d;
}

//To'rtinchi misol
float misol4(){
    int first=4;
    float second=5.6;
    second=first+second;
    printf("%f\n", second);
    return second;
}

//Beshinchi misol
int misol5(int a, int b){
    a=a%b;
    return a;
}

//Oltinchi misol
char element(char c){
    c=c+1;
    return c;
}

//Yettinchi misol
int misol7(float x,float y){
    x=x-y;
    if(x==y){
        int r=1;
        return r;
    }else{
        int t=0;
        return t;
    }
}

//Sakkiznchi misol
float misol8(float bir,float ikki){
    if(bir==ikki){
        int g=1;
        return g;
    }else{
        int m=0;
        return m;
    }
}

//To'qqizinchi misol
float misol9(float firstnum, float secondnum, float thirstnum){
    if(firstnum<secondnum && firstnum<thirstnum){
      return firstnum;
    }else if(secondnum<thirstnum){
        return secondnum;
    }else{
        return thirstnum;
    }
}

//O'ninchi misol
float misol10(float a,float b, float c){
    if(a!=b && a!=c && b!=c){
        int h=1;
        return h;
    }else{
        int x=0;
        return x;
    }
}

//O'n birinchi misol
int misol11(char g){
if(g>='a' && g<='z'){
    int y=1;
    return y;
}else{
    int t=0;
    return t;
}
}

//O'n ikkinchi misol
int misol12(int a,int b, int c, int d,int e){
    a=a+b+c+d+e;
    a=a/5;
    return a;
}
//O'n uchinchi misol
float misol13(float a, float b){
    a=a*2+b*2;
    return a;
}

//O'n to'rtinchi misol
char misol14(char a){
    if(a>='a' && a<='z'){
        a-=32;
        return a;
    }
    else{
        int j=puts("Harf kiritmadingiz");
        return j;
    }
    
}

//O'n beshinchi misol
void misol15(int a){
    for(int i=2;i<=a;i++){
        int hisob=0;
      for(int a=1; a<=i; a++){
          if(i%a==0)
          hisob++;
      }

   if(hisob==2){
    puts("1");
    }
    else{
    puts("0");
    }

}

}


//O'n oltinchi misol
void misol16(float a, float b){
if(a+b>=10 && a+b<=20){
    puts("1");
}else{
    puts("0");
}

}


int main(){
//Birinchi
int f=parametr();
printf("%d\n", f);

//Ikkinchi
int b = apple();
printf("%d\n", b);

//Uchinchi
int y= qiymat();
printf("%d\n", y);

//To'rtinchi
float u=misol4();
printf("%f\n",u);

//Beshinchi
int birinchi,ikkinchi;
scanf("%d", &birinchi);
scanf("%d", &ikkinchi);
misol5(birinchi,ikkinchi);
int i=misol5(birinchi,ikkinchi);
printf("%d\n",i);

//Oltinchi
char p=element(65);
printf("%c\n", p);

//Yettinchi
int w=misol7(10,5);
printf("%d\n", w);

//Sakkizinchi
int s=misol8(12,10);
printf("%d\n", s);

//To'qqizinchi
float e=misol9(4,3,9);
printf("%f\n", e);

//O'ninchi
int l=misol10(2,9,3);
printf("%d\n", l);

//O'n birinchi
int v=misol11('n');
printf("%d\n", v);

//O'n ikkinchi
int c=misol12(76,45,32,13,43);
printf("%d\n", c);

//O'n uchinchi
float n=misol13(2,2.6);
printf("%f\n", n);

//O'n to'rtinchi
char k=misol14('r');
printf("%c\n", i);

//O'n beshinchi
misol15(3);

//O'n oltinchi
misol16(4.5, 7);

}