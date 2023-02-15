#include <stdio.h>

int sum(int son){
    if(son==1){
        return 1;
    }
    return son+sum(son-1);
}

int main(){
  printf("%d\n", sum(5));
}