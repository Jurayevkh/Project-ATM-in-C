// int, short      %d, %i
// float           %f
//char             %c
//double           %f
//long int         %ld %li
//long double      %Ld
//long long        %lld

 #include <stdio.h>
// int main(){
//     int a = 654, b,c,d;
//     b = a/100;
//     c = a/10%10;
//     d = a%10;
//     a = (d*100) + (c*10)+ b;
//     printf("BU %i bo'ladi \n", a);
// }

int main() {
    int a = 751;
    a = ((a%10)*100)+((a / 10%10)*10)+(a/100);
    printf("%i\n", a);
}