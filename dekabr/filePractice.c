#include <stdio.h>

void choice(int ch, int year,int price){
    int yil;
    if(ch==1){
        printf("Yilini kiriting:");
        scanf("%d", &yil);
        if(yil==year){
            printf("Sizga mos mashinga topildi:")
        }
    }
}

int main(){
    // FILE *ptr = fopen("car.txt", "r"), *ptr2=fopen("car_a.txt","w"), *ptr3=fopen("car_b.txt", "w");
    int narx,yili;
    char name[20];
    char color[15];
    // while (fgetc(ptr)!=EOF)
    // {
    //   fscanf(ptr,"%s %d %s %d", name, &narx,color, &yili);
    //   if(narx>150000){
    //       fprintf(ptr2,"Name:%s\nPrice:%d\nColor:%s\nYear:%d\n\n", name, narx,color,yili);
    //   }else{
    //       fprintf(ptr3,"Name:%s\nPrice:%d\nColor:%s\nYear:%d\n\n", name, narx,color,yili);
    //   }
    // }


    //Ikkinchi misol
    FILE *ptr = fopen("car.txt", "r");
    int ch;
    fscanf(ptr,"%s %d %s %d",name,&narx,color,&yili);
    printf("1.Mashina izlash yili bilan\n2.Mashina izlash narxi bilan\n3.Mashina qo'shish\n4.Chiqish\nEnter here choice:");
    scanf("%d",&ch);
    choice(ch,yili,narx);





}