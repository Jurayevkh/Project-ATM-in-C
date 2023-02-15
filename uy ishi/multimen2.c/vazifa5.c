#include <stdio.h>

int main(){
    int oxiri;
    printf("Stopni kiriting bro:");
    scanf("%d",&oxiri);
    int arr2[oxiri][oxiri];
    for (int i = 0; i < oxiri*oxiri; i++) scanf("%d", &arr2[0][i]);

    for (int i = 0; i < oxiri; i++){
        for (int j = 0; j < oxiri; j++){
            if(i==0 || i==oxiri-1 || j==0 || j==oxiri-1) printf(" %d ", arr2[i][j]);
            else printf(" * ");
        }
    puts("");
    }

}