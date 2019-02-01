#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<iostream>
//#include<boolian.h>
int main()
{
	char data[100],input[20];
	long long int sizein;
	 FILE *file;
	 file=fopen("books.txt","r");
	 if(file)
	 {
	 	fprintf(stderr, "data loaded successfully\nwelcome to the online library\n\n");
	 }
	 
	  while(true)
	 {	int key=0;
	 	printf("how can i help you dear?\n");
	 	printf("1.i want to find a book!\n");
	 	printf("2.about us!\n");
	 	printf("3.our venue\n");
	 	printf("4.opening times\n");
	 	scanf("%d",&key);
	 	if(key==2)
	 	{
	 		printf("\n");
	 		file=fopen("aboutus.txt","r");
	 		fgets (data, 30, file);
	 		puts(data);
	 		
		 }
		 if(key==2)
	 	{
	 		printf("\n");
	 		file=fopen("aboutus.txt","r");
	 		fgets (data, 30, file);
	 		puts(data);
		 }
	 	
	 	
		}
	 
}

