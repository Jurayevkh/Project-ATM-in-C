#include <stdio.h>

int main(){
    int oxiri, largest, smallest,smalloc1,smalloc2,largloc1,largloc2;
  printf("Qator va ustun uchun son kiriting:");
  scanf("%d",&oxiri);


  int arr6[oxiri][oxiri];

  for(int i=0;i<oxiri;i++)
  {
    for(int j=0;j<oxiri;j++)
    {
      scanf("%d", &arr6[i][j]);
    }
  }


  largest=arr6[0][0];
  smallest=arr6[0][0];

  for(int i=0;i<oxiri;i++)
  {
    for(int j=0;j<oxiri;j++)
    {
      if(largest<arr6[i][j])
      {
        largest=arr6[i][j];
        largloc1=i;
        largloc2=j;
      }

      if(smallest>arr6[i][j])
      {
        smallest=arr6[i][j];
        smalloc1=i;
        smalloc2=j;
      }
    }
  }

  for (int i = 0; i < oxiri; i++)
  {
    for (int j = 0; j < oxiri; j++)
    {
        if(i==smalloc1 || i==largloc1 || j==smalloc2 || j==largloc2){
         
         arr6[smalloc1][smalloc2]=largest;
         arr6[largloc1][largloc2]=smallest;
        }
    }
    
  }
  
 printf("Natija:\n");
  for(int i=0;i<oxiri;i++)
  {
    for(int j=0;j<oxiri;j++)
    {
      printf("%d ",arr6[i][j]);
    }
    printf("\n");
  }

}