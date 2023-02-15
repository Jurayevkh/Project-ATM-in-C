#include <stdio.h>

typedef struct team
{
  char davlati[20];
  char name[20];
  int year;
  char trener[20];
  struct player
  {
      char name[20];
      int age;
      char position[20];
      int number;
  };

}t;



int main(){
    t psg={"Fransiya","Paris-saint-germen",1917,"Kristof-Galte"};
    t barsa={"Ispaniya","Barselona",1900,"Xavi"};
    t real={"Ispaniya","Real-madrid",1890,"Carlo-Anchelloti"};
    struct player psg1={"Kylian Mbappe",21,"Striker", 10};
    struct player psg2={"Lionel Messi",37,"Striker", 30};
    struct player psg3={"Neymar Jr",35,"Striker", 8};

    if(player3.age>20){
        printf("%s %d %s %d", psg3.name , psg3.age , psg3.position ,psg3.number);
    }


}