#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
  {
	char str[] = "#Shubh27am";
	int uprCase=0, lwrCase=0, number=0, special=0;
	int n = strlen(str);
	for(int i=0;i < n; i++)
	 {
		if(str[i]>='A' && str[i] <= 'Z')
		uprCase++;
	
		else if(str[i]>='a' && str[i] <= 'z')
		lwrCase++;
	
		else if(str[i] >= '0' && str[i] <= '9')
		number++;
	
		else
		special++;
	 }
	printf("\n The String is: %s",str);
	printf("\n Count of Upper Case Chars Are: %d",uprCase);
	printf("\n Count of Lower Case Chars Are: %d",lwrCase);
	printf("\n Count of Numbers in String is: %d",number);
	printf("\n Countof Special Chars in String is: %d",special);
	return 0;
  }

