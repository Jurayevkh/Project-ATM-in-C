#include <stdio.h>



//Jo'rayev Rustambek N10 guruhi 13:30


int main(){

    //Birinchi uy ishi 
    int n,jami=0;
    printf("Son kiriting:");
    scanf("%d", &n); 
    int *pokazatel=&n;
    for (; n;n/=10)
    {
      jami=jami+n%10;
    }
    
    *pokazatel=jami;
    jami=0;

    if(*pokazatel>9){
       for (; *pokazatel;*pokazatel/=10 )
       {

        jami=jami+(*pokazatel%10);

       }

      printf("Jami>>%d\n",jami); 

    }else{
         
       printf("%d\n",*pokazatel);
        
    }
    

    //Ikkinchi uy ishi 
    int a;
    printf("Son kiriting:");
    scanf("%d",&a);
    int arr[100], b=0;
    for (;a;a/=10)
    { 
      arr[b]=a%10;
      b++;
    }
     
     arr[b]=arr[b-1];
     arr[b-1]=arr[0];
     arr[0]=arr[b];

     for (int i = 1; i <b-2; i++)
     {
      for (int j = 1; j <b-i-1; j++)

         {
          if(arr[j]>arr[j+1]){
              int zapas = arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=zapas;

          }
      }
     } 

    for (int i = 1; i < b; i++)
    {
      arr[0]*=10;
      arr[0]+=arr[i];
    }
    printf("%d ",arr[0]);
  




    }

    

    
       
    
    
    
    


