#include<stdio.h>
#include<string.h>
int main()
 {
	char str[] = "Shu bh   am";
	int n = strlen(str);
	int j=0;
	printf("String Before Spaces: %s\n",str);	
	for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[j++] = str[i]; 
                               
    str[j] = '\0';
	printf("String After Spaces: %s",str);
 }
