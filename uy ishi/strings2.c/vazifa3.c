#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char s[100];  
    int  count=0,n;
    printf("Enter  here bir balo : ");
    scanf("%[^\n]",s);
     
	n=strlen(s); 

    for(int i=0;i<n;i++)  
    {
     	count=1;
      if(s[i]){
 		  for(int j=i+1;j<n;j++)  
	      {   
	        if(tolower(s[i])==tolower(s[j]))
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' %dta \n",s[i],count);
        }  
 	}   
    
}