#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void palindrome(char str[])
 {
	// We go from Left To Right
	int l = 0;
	int r = strlen(str) - 1;
	while(r > l)
	{
	   if(str[l++] != str[r--])
	   {
		printf("\n String %s Is Not Palindrome \n",str);
		return;
	   }
	}
	printf("\n String %s Is Palindrome \n",str);
	
 }

int main()
 {
	char str[] = "ABBA";
	palindrome(str);
	return 0;
 }

