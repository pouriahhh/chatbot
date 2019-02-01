#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<iostream>
//#include<boolian.h>
int main()
{
	char data[100],input[20];
	long long int sizein;
	char bookname[50];
	char writername[50];
	 FILE *file;
	// file=fopen("books.txt","r");
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
	 		fgets (data,1000 ,file);
	 		puts(data);
	 		
		 }
		 if(key==3)
	 	{
	 		printf("\n");
	 		file=fopen("venue.txt","r");
	 		fgets (data, 1000, file);
	 		puts(data);
	 		printf("\n");
		 }
		 	if(key==4)
	 	{
	 		printf("\n");
	 		file=fopen("times.txt","r");
	 		fgets (data,100000 ,file);
	 		puts(data);
	 		printf("\n");
		 }
	 	
	 	if(key==1)
	 	{	
	 		
	 		printf("\n");
	 		file=fopen("books.txt","r");
	 		
	 		
		 }
		 printf("i didnt got it!");
		 
		}
	 
}

