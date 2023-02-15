#include <stdio.h>

int main(){
    // int jami=0,son;
    // FILE *ptr = fopen("sonlar.txt","r");
    // while(!feof(ptr))
    // {
    //      fscanf(ptr, "%d",&son);
    //      jami+=son;
    // }
    // printf("%d\n", jami);
   //fclose(ptr);

   int n;
   FILE *ptr = fopen("sonlar.txt","w");
   printf("Nechta son kiritasiz? :");
   scanf("%d", &n);
   int son;
   for (int i = 1; i <=n; i++)
   {
      printf("%d-sonni kiriting: ", i);
      scanf("%d",&son);
      fprintf(ptr,"%d ",son);
   }
   fclose(ptr);
   FILE *juft=fopen("juft.txt","w"),*toq=fopen("toq.txt","w");
   ptr=fopen("sonlar.txt","r");
   int son1;
   while ((fscanf(ptr,"%d", &son1))!=EOF)
   {
       son1%2==0 ? fprintf(juft,"%d ",son1) : fprintf(toq,"%d ",son1);
   }
   fclose(juft);
   fclose(toq);

//    juft=fopen("juft.txt","r"),toq=fopen("toq.txt","r");

//    printf("Juft sonlar-->");

//    int jSon,toq[15];
//    while(!feof(juft))
//    {
//      fscanf(juft,"%d",&jSon);
//      printf("%d",jSon);
//    }

//    printf("Toq sonlar-->");
//    while (!feof(toq))
//    {
//        scanf(toq,"%d",)
//    }















}