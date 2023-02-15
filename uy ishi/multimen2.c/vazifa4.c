#include <stdio.h>

int main(){
    int diapazon;
    printf("Stopni kiriting bro:");
    scanf("%d",&diapazon);
    int toplam[diapazon][diapazon];
    for (int i = 0; i < diapazon*diapazon; i++) scanf("%d", &toplam[0][i]);

    for (int i = 0; i < diapazon; i++){
        for (int j = 0; j < diapazon; j++){
            if((i==0 && j==diapazon-1) || (diapazon-j==1 && i!=diapazon-1) || (i+j==j && i!=j))
              printf(" * ");
            else printf(" %d ", toplam[i][j]);
        }
    puts("");
    }
}