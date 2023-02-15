#include <stdio.h>

void tartib(int array[],int n){
     for(int i=1; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    
    
}




int main(){
    //Ikkinchi dastur
   int a[] = {88, 85, 96, 81, 39, 12, 4, 56, 2, 13, 31, 51, 54,
    21, 5, 48, 28, 57, 40, 44, 55, 74, 80, 94, 17, 61, 47, 1, 10, 
    27, 83, 42, 36, 75, 3, 65, 45, 24, 15, 25, 14, 30, 41, 53, 34, 
    11, 93, 86, 32, 26, 97, 7, 98, 50, 38, 68, 59, 64, 63, 76, 91, 
    52, 71, 43, 35, 18, 79, 87, 29, 58, 78, 22, 95, 49, 90, 67, 89, 
    69, 62, 9,99, 6, 19, 8, 70, 84, 77, 37, 72, 46, 16, 23, 73, 
    92, 60, 66, 20}; //<-----------bu sonlar orasida 33,82 ,100 sonlari yo'q


    int son=0;
    for (int i = 0; i < 100; i++)
    {
            if(son>=100) break;
          son++;
          tartib(a,100);
          if(son!=a[i]){
              //printf("Tushib qoldirilgan son: %d\n", son);
            son++;
    }
    }

    //Uchinchi dastur

   
    
   //Beshinchi dastur
   












}