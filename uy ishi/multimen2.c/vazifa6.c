#include <stdio.h>

int main(){
     int songi;
    printf("Stopni kiriting bro:");
    scanf("%d",&songi);
    int arr3[songi][songi];
    for (int i = 0; i < songi*songi; i++) scanf("%d", &arr3[0][i]);
    
    for (int i = 0; i < songi; i++){
        for (int j = 0; j < songi; j++){
            if(i==j || (i==songi-1 && j==0) || (j==songi-1 && i==0) || j+i==songi-1 || i+j==songi-1) printf(" * ");
            else printf(" %d ",arr3[i][j]);
        }
    puts("");
    }
}