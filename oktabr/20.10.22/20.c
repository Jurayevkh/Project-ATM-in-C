#include <stdio.h>

int main(){
//     int son=1, jami=0;

//     metka:
//     if(son%2==0){
//         jami = jami+son;
       
//     }
     

//     son+=1;
//     if(son<11){
//         goto metka;
//     }
//  printf("%d\n", jami);
    
int a, b, toqlar=0, juftlar=0;
printf("birinchi nishondagi sonni kiriting;");
scanf("%d", &a);
printf("ikkinchi nishondagi sonni kiriting:");
scanf("%d", &b);

belgi:
if(a%2==0){
    juftlar+=a;
    a+=1;
    if(a<=b){
        goto belgi;
    }
}else if(a%2==1){
    toqlar+=a;
    a+=1;
    if(a<=b){
        goto belgi;
    }
}
printf("juftlar yig'indisi: %d\n", juftlar);
printf("toqlar yig'indisi: %d\n", toqlar);  
















}



//nimadur+=32 //nimadur = nimadur+32 qisqartmasi
//nimadur-=31 //nimadur = nimadur-32 qisqartmasi 