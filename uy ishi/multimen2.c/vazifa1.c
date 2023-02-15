#include <stdio.h>

int main(){
     int n;
    printf("Chegarani kiriting:");
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n*n; i++)
       scanf("%d", &arr[0][i]);

    int null, hisob;
    for (int i = 0; i < n*n; i++)
    {
        if(arr[0][i]==0) null++;
        else hisob++;
    }

    if(null>=hisob) puts("Sparse matrix");
    else puts("None sparse");
}