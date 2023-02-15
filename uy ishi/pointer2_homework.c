#include <stdio.h>

//Jo'rayev Rustambek N10 guruhi 13:30 15.11.2022 sana uy ishisi

void sort(int arr[],int uzunlik);
void inputNumber(int uzunlik,int arr[]);
void print(int arr[], int n);
void changeNumbers(int *Num);
void coupleOdd(int arr[],int n);
void fibonaci(int diapazon);

int main(){
   
   //Birinchi misol 
   printf("\n\n\n\n\t\t\t-------------Birinchi dastur-------------\n");
   printf("\tHaqiqiy son toifali pointer orqali float tipidagi sonning butun qismini chiqarish.\n");
   float value;
   printf("\n\n\tEnter here value ->");
   scanf("%f", &value);
   int pointer=value;
   printf("%d\n",(int)pointer);







   //Ikkinchi misol
   int n;
   printf("\n\n\n\n\t\t\t-------------Ikkinchi dastur-------------\n");
   printf("\tButun toifali pointer orqali int serianing maksimal va minimal qiymatlarini almashtirish(Funksiya orqali ^).\n");
   printf("\n\n\tChegarani kiriting ->");
   scanf("%d",&n);
   int arrNumbers[n];
   inputNumber(n,arrNumbers);
   sort(arrNumbers,n);
   int zapas=arrNumbers[0];
   arrNumbers[0]=arrNumbers[n-1];
   arrNumbers[n-1]=zapas;
   print(arrNumbers,n);








   //Uchinchi misol
   int qiymat;
   printf("\n\n\n\n\t\t\t-------------Uchinchi dastur-------------\n");
   printf("\tIkki xonali sonning raqamlari o'rnin almashtirib qo'yuvchi function tuzish.\n");
   printf("\n\n\tIkki xonali son kiriting ->");
   scanf("%d", &qiymat);
   int *ptr=&qiymat;
   changeNumbers(ptr);





   //To'rtinchi misol
   int diapazon;
   printf("\n\n\n\n\t\t\t-------------To'rtinchi dastur-------------\n");
   printf("\tInt array ning juft elementlarini 2 ga ko'paytirib qo'yuvchi va toq elementlaridan 5 ni ayiruvchi funksiya tuzish.\n");
   printf("\n\n\tEnter stop here ->");
   scanf("%d",&diapazon);
   int massiv[diapazon];
   inputNumber(diapazon,massiv);
   coupleOdd(massiv,diapazon);
   print(massiv,diapazon);
   


   //Beshinchi misol
   
  printf("\n\n\n\n\t\t\t-------------Beshinchi dastur-------------\n");
   printf("\tBerilgan chegaraga qadar fibonaci sonlarni chiqarish.\n");
  int chegara;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("\n\n\tEnter here stop: ");
  scanf("%d", &chegara);
  printf("%d %d ", t1, t2);

  for (; nextTerm <= chegara;) {
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }





}


void sort(int arr[],int uzunlik){
   for(int i=0; i<uzunlik; i++){
        for(int j=0; j<uzunlik-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void inputNumber(int uzunlik, int arr[]){
   for (int i = 0; i < uzunlik; i++)
   {
     printf("%d-indeksga qiymat->",i);
     scanf("%d", &arr[i]);
   }
   
}

void print(int arr[], int n){
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   puts("");
}

void changeNumbers(int *Num){
   int result=0;
   result=*Num/10+((*Num%10)*10);
   printf("%d ",result);
   puts("");
}

void coupleOdd(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      if(arr[i]%2==0){
         arr[i]=arr[i]*2;
      }else{
         arr[i]=arr[i]-5;
      }
   }
   
}

