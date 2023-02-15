#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char soz[100];
    printf("So'z kiriting: ");
    scanf("%[^\n]", soz);
    char davomUchun[100];
    
    for (int i = 0; soz[i]!='\0'; i++)
    {
      if ((soz[i]=='o' && soz[i+1]!='\'') || (soz[i]=='O' && soz[i+1]!='\''))
      {
        strcpy(davomUchun,soz+i+1);
        strcpy(soz+i+1, "'");
        strcpy(soz+i+2,davomUchun);
      }

    }

    printf("%s\n",soz);
    
    

}