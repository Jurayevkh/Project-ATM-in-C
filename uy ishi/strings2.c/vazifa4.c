#include <stdio.h>
#include <ctype.h>

int main(){
    char matn[100];
    printf("Input here matn:");
    scanf("%[^\n]",matn);
    int count=0;

    for (int i = 0; matn[i]!='\0'; i++)
    {
      if(ispunct(matn[i])){
          count++;
      }
    }
    
    printf("Spets Belgilar-->%d ta\n", count);
 



}