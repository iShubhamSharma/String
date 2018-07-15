#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a, const void *b);

void repetition(char *str, char *data, int last, int index)	
 {

	int len = strlen(str);
	for (int i=0; i<len; i++ )
        {
        data[index] = str[i] ;
 
        if (index == last)
            printf("%s\n", data);
        else 
            repetition(str, data, last, index+1);
        }
 }

void sortRepetition(char *str)
 {
	int len = strlen(str);
	char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
	data[len] = '\0';
	qsort(str, len, sizeof(char), compare);
 
        repetition(str, data, len-1, 0);
 
        free(data);
 }

int compare(const void *a, const void *b)
 {	
	 return ( *(char *)a - *(char *)b );
 }

int main()
 {
	char str[] = "ABC";
	printf("The Permutations of %s are: \n",str);
	sortRepetition(str);
	return 0;

 }
