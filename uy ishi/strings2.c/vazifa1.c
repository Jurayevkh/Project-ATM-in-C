#include <stdio.h>

int main(){
    char name[100];
    char lastName[100];
    printf("Ismingizni kiriting: ");
    scanf("%[^\n]", name);
    printf("Familiyangizni kiritng:");
    scanf("%s",lastName);
    int index=1;

    for (int i = 0; name[i]!='\0' && lastName[i]!='\0'; i++)
    {
        if(i%2==0 && index%2==1){
            char zapas=name[i];
            name[i]=lastName[index];
            lastName[index]=zapas;
        }
        index++;
    }

    printf("%s %s\n",name, lastName);
    
}