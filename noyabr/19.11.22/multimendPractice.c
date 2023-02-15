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
    
    //Ikkinchi misol
    int chegara;
    printf("Stopni kiriting bro:");
    scanf("%d",&chegara);
    int massiv[chegara][chegara];
    for (int i = 0; i < chegara*chegara; i++)
       scanf("%d", &massiv[0][i]);
    
    int count=0;
    for (int i = 0; i < chegara; i++){
        for (int j = 0; j < chegara; j++)
        {
             if(i>j){
                 printf("%d",massiv[i][j]); 
                 count=count+massiv[i][j];
             } 
        }
    }
        
    
    printf("\nResult:%d\n", count);
    
    //Uchinchi misol
    int stop;
    printf("Stopni kiriting bro:");
    scanf("%d",&stop);
    int seriya[stop][stop];
    for (int i = 0; i < stop*stop; i++)
       scanf("%d", &massiv[0][i]);
    
    int jami=0;
    for (int i = 0; i < stop; i++)
        for (int j = 0; j < stop; j++)
            if(j>i){
                 printf("%d",massiv[i][j]); 
                 jami=jami+massiv[i][j];
             } 
    
        
    
    printf("\nResult:%d\n", jami);
    

   //To'rtinchi misol
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

    //Beshinchi misol
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

    //Oltinchi misol
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

    //Sakkizinchi misol
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