#include <stdio.h>

int main(){

    //Birinchi dastur
    // int n, qiymat=1, juft=0,toq=0;
    // printf("Stopni kiriting:");
    // scanf("%d", &n);
    // while (qiymat<=n)
    // {
    //     if(qiymat%2==0){
    //         juft+=qiymat; 
    //     }else if(qiymat%2!=0){
    //         toq+=qiymat;
    // }
    // qiymat+=1;
    // }

    // if(juft>toq){
    //     printf("Juft katta :%d\n", juft);
    // }else{
    //     printf("Toq katta :%d\n", toq);
    // }
    
    
    // //Ikkinchi dastur
    // int a, b , juftlar=0, toqlar=0;
    // printf("Startni kiriting:");
    // scanf("%d", &a);
    // printf("Stopni kiriting:");
    // scanf("%d", &b);
    // while (a<=b)
    // {
    //    if(a%2==0){
    //        juftlar+=1;
    //    }else if(a%2!=0){
    //        toqlar+=1;
    //    }
    // a+=1;
    // }
    
    // printf("Bu sonlar orasida %d ta juft, %d ta toq mavjud\n", juftlar,toqlar);
    

    //Uchinchi dastur
    int x, qadam=0;
    printf("Son kiriting:");
    scanf("%d", &x);
    while (x!=0){
        qadam+=1;
        x/=10;
    }
    
    printf("Siz kiritgan son %d xonadan iborat\n", qadam);


    //To'rtinchi dastur
    int y;
    printf("Son kiriting: ");
    scanf("%d", &y);
    if(y<0){
        puts("Siz manfiy son kiritibsiz, manfiy son mumkin emas");
    }
    while(y>10)
        {
            y/=10;
        }
        
    printf("%d\n", y);
    


    //Beshinchi dastur
    char c=65;
    while(c<91){
        printf("%c\n", c);
        c+=1;
    }


}