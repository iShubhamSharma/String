#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char *x,char *y)
  {
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;	
  }

void permutation(char *str, int i,int n)
  {
	int j;
	if(i==n)
	printf("%s\n",str);

	else
	{
	     for(j = 0; j <= n; j ++)
		{
			swap((str+i),(str+j));
			permutation(str,i+1,n);
			swap((str+i),(str+j));
		}		
	}
  }

int main()
 {
	char str[30];
	printf("\n Enter a String: ");
	scanf("%s",str);
	int n = strlen(str);
	printf("\n Permutaions of %s are: \n",str); 
	permutation(str, 0, n - 1);
	return 0;
 }
