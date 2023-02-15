#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int null=0,other=0;

// void func(int son){
//     for (int i; son!=0; son/=10)
//     {
//        i=son%10;
//        if(i==0) null++;
//        else other++;
//     }
//     if(null>other) printf("[0]%d>%d\n",null,other);
//     else if(null<other) printf("[0]%d<%d\n",null,other);
//     else printf("[0]%d=%d\n",null,other);
// }

void func(int son){
     int before=0,after=0,plus=son;
     int i;
     for (; son!=0 ; son/=10)
     {
       i++;
     }
     son=plus;
     for (int j = 0; j <i/2;son/=10)
     {
      j=son%10;
      before+=j;
     }
     son=plus;
     for (int g = i/2;;son/=10)
     {
        g=son%10;
        after+=g;
     }

     if(before>after) printf("%d<%d",after,before);
     else if(after>before) printf("%d>%d",after,before);
     else  printf("%d=%d",after,before);

}


int main(){
//    int n;
//    printf("Sonni kiriting:");
//    scanf("%d",&n);
//    func(n);

// int n;
// printf("Arrayni uzunligi qancha-->");
// scanf("%d",&n);
// int arr[n],j;
// for (int i = 0; i<n; i++)
// {
//     scanf("%d",&arr[i]);
//     if(arr[i]==0) j=i;

// }
// printf("Before-->");
// for (int i = 0; i < j; i++)
// {
//    printf("%d",arr[i]);
// }
// puts("");
// printf("After-->");
// for (int i = j+1; i < n; i++)
// {
//    printf("%d",arr[i]);
// }
// puts("");


// int son;
// printf("Sonni kiriting:");
// scanf("%d",&son);
// func(son);


srand(time(NULL));
int n;
printf("N ni kiriting:");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
     arr[i]=rand()%5-46;
}
printf("Before-->");
for (int i = 0; i < n; i++)
{
   printf("%d ", arr[i]);
}
puts("");


for (int i = 0; i < n; i++)
{
   if(arr[i]%2==0){
      printf("%d", arr[i]);
   }
   else{
      printf(" ");
   }
}
puts("");













}