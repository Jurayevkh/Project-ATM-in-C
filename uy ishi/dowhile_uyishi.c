#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Jo'rayev Rustambek N10 guruhi (13:30).
int main(){
    //Ikkinchi dastur
    int n,b,o;
    printf("Son kiriting");
    scanf("%d", &n);
    o=n%10;
    while(n){
       b=n%10;
       n/=10;
    }

    if(b>o){
        printf("%d\n", b);
    }else{
        printf("%d\n", o);
    }
   
    
   // Uchinchi dastur
    int x, i=1, jami=0;
    printf("son kiriting:");
    scanf("%d", &x);
    do{
        jami+=i;    
        i+=1;
        
    }while(i<=x);

    printf("%d\n", jami);
    
   // To'rtinchi dastur
    int random, qadam=0, yigindi=0, kopaytma=1; 
    srand(time(NULL));
    random = rand();
    printf("Random son: %d\n", random);
    while(random){
        yigindi+=random%10;
        kopaytma*=random%10;
        random/=10;
    }
    
    
    printf("Ye'gindi:%d\nKo'paytma:%d\n", yigindi, kopaytma );
    
   // Beshinchi dastur
    int rand1, rand2, j,k, bosqich=0;
    srand(time(0));
    rand1 = rand();
    rand2 = rand();
    printf("%d\n", rand1);
    printf("%d\n", rand2);
      j=rand1%10;
      k=rand2%10;
    if(j>k){
        do{
          printf("Rustam\n");
          bosqich+=1;
        }while(bosqich<j);
    }else{
        do{
            printf("Rustam\n");
            bosqich+=1;
        }while(bosqich<k);
    }

    

    //Oltinchi dastur
    int birinchi , ikkinchi,z=1;
    printf("Birinchi sonni kiriting:");
    scanf("%d", &birinchi);
    printf("Ikkinchi sonni kiriting:");
    scanf("%d", &ikkinchi);
    if(birinchi<=0 && ikkinchi<=0){
        puts("Siz kiritgan sonlar orasida natural emasi bor!!!");
    }else{
        do{
            z*=birinchi;
            ikkinchi-=1;
        }while(ikkinchi);

        printf("%d\n", z);
    }
//Birinchi dastur
    int q=1, w=0; 
    while(w!=10){
        w+=1;
        printf("%d*%d=%d\n",q,w,q*w);
    if(w==10){
        w=0;
        q+=1;
        printf("\n");
    }
    if(q==11){
       return 0;
    }


    }
    
}