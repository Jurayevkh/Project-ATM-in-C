#include <stdio.h>

int main(){
    int end;
    printf("Stopni kiriting bro:");
    scanf("%d",&end);
    int arr5[end][end];
    for (int i = 0; i < end*end; i++) scanf("%d", &arr5[0][i]);

    for (int i = 0; i < end; i++){
        for (int j = 0; j < end; j++){
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) printf(" * ");
            else printf(" %d ",arr5[i][j]);
        }
    puts("");
    }
}