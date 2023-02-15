#include <stdio.h>

void equal(int *list1, int *list2, int uz);
void tartib(int *list1, int uz);

int main(){
   int n=5, firstArr[]={3,2,4,1,5},secondArr[]={5,5,3,2,1};
   int *pointer1=firstArr;
   int *pointer2=secondArr;
   tartib(pointer1,n);
   tartib(pointer2,n);
   equal(pointer1,pointer2,n);


   int a=1;
   for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j < 5; j++)
       {
        printf("+---");
       }
       printf("+\n");
       
   }

   for (int j = 0; j < 5; j++)
   {
       /* code */
   }
   
   





}

void equal(int *list1, int *list2, int uz){
     for (int i = 0; i < uz; i++)
     {
         if(*(list1+i)==*(list2+i)){
             continue;
         }
         else if (*(list1+i)>*(list2+i) || *(list1+i)<*(list2+i)){
            puts("false");
            break;
         }
         puts("true");
     }

     
}



void tartib(int *list1, int uzunlik){
    for(int i=0; i<uzunlik; i++){
        for(int j=0; j<uzunlik-i-1; j++){
            if (list1[j]>list1[j+1]){
                int temp=list1[j];
                list1[j]=list1[j+1];
                list1[j+1]=temp;
            }
        }
    }
}