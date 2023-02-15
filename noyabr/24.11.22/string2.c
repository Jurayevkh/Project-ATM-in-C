#include <stdio.h>
#include <string.h>

int main(){
    char ism[100];
    char familiya[100];
    char natija[100];
    printf("Ismingiz nima:");
    scanf("%s", ism);
    printf("Familiyangiz nima:");
    scanf("%s", familiya);
    
    strncpy(natija+strlen(natija)/2,ism, strlen(ism)/2);
    strncpy(natija, familiya+strlen(familiya)/2,natija);

    printf("%s", natija);
    


}