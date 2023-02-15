#include <stdio.h>

int main(){
// int qator;
// printf("Nechta qator ustun bo'lsin:");
// scanf("%d",&qator);
// int arrtwo[qator][qator];
// for (int i = 0; i < qator; i++)
// {
//     for (int j = 0; j < qator; j++)
//     {
//         scanf("%d", &arrtwo[i][j]);
//     }
// }
// int hisoblovchi=0;
// for (int i = 0; i < qator; i++)
// {
//     for (int j = 0; j < qator; j++)
//     {
//        if(i==j || (i==qator-1 && j==0) || (j==qator-1 && i==0) || j+i==qator-1 || i+j==qator-1){
//           printf("%d  |", arrtwo[i][j]);
//           hisoblovchi+=arrtwo[i][j];
//        }
//     }
// }





//printf("Result-->%d\n",hisoblovchi);



int my_arr[10]={4,5,9,0,-1,2,34,2,8,-4};
int n,newarr[100];;
printf("Arraydan qaysi indexdagi soni o'chiray:");
scanf("%d", &n);
for (int i = 0; i < 10; i++)
{
  if(i==n){
     
  }else{
      newarr[i]=my_arr[i];
  }
}


   
for (int i = 0; i < 9; i++)
{
    printf("%d ", newarr[i]);
}



  







}