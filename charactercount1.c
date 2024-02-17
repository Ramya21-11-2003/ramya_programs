#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char string[100][100]; 
    int count;
    int i,j,length; 
    char ch[5];
    printf("enter a sentence:");
    gets(string);
    length=strlen(string);
    printf("enter the letter that repeated many times:");
    scanf("%s",ch);
    for( i=0; i<length; i++)
     { 
      for(j=i;j<length;j++)
      {
        if(string[i][j]==ch[0])  
            count++;  
        }
    }  
    printf("Total number of characters in a string: %d\n",length);
    printf("no of times %s repeated:%d",ch,count);  
    return 0;  
}  
