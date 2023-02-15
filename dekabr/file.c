#include <stdio.h>

int main(){
    // FILE *ptr =fopen("musbat.txt","w"),*ptr2=fopen("manfiy.txt","w");
    // int arr[]={1,-2,3,-4,5,-6,7,-8,9,-10};
    // for (int i = 0; i < 10; i++)
    // {
    //     if(arr[i]<0){
    //         fprintf(ptr,"%d ", arr[i]);
    //     }else
    //     fprintf(ptr2,"%d ", arr[i]);

    // }

    // fclose(ptr);

    // char harf;
    // FILE *ptr =fopen("ism.txt", "r"),*ptr2=fopen("unli.txt", "w"), *ptr3=fopen("undosh.txt","w");
    // while ((harf=fgetc(ptr))!=EOF){
    //     if(harf=='a' || harf=='o' || harf=='u' || harf=='i' || harf=='e'){
    //         fprintf(ptr2, "%c", harf);
    //     }else{
    //         fprintf(ptr3,"%c", harf);
    //     }
    // }
    // {
     
    // }
    

     
    // fclose(ptr);
    // fclose(ptr2);
    // fclose(ptr3);
    
    
    char harf;
    int hisob=0;
    FILE *ptr =fopen("ism.txt", "r");
    while((harf=fgetc(ptr))!=EOF){
        if(harf>='A'&& harf<='Z'){
         hisob++;
        }
    }
    printf("%d\n", hisob);


    

}