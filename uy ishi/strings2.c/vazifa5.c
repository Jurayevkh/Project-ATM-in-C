#include <stdio.h>
#include <ctype.h>

int main(){
    char matn[100];
    printf("matn kiriting:");
    scanf("%[^\n]",matn);

    for (int i = 0;matn[i]!='\0'; i++)
    {
       if(isspace(matn[i]))
        puts("");
       else
        printf("%c", matn[i]);
    }
    puts("");
    
}