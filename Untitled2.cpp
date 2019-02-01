#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//#include<boolian.h>
int main()
{
	char data[100],input[20],nothing[20]="nothing";
	 FILE *file;
	 file=fopen("data.txt","r");
	 if(file)
	 {
	 	fprintf(stderr, "data loaded successfully\n");
	 }
	 if( fgets (data, 60, file)!=NULL ) {
      /* writing content to stdout */
      puts(data);}
	  
	  fseek( file, 0, SEEK_SET );
	  if( fgets (data, 60, file)!=NULL ) {
      /* writing content to stdout */
      puts(data);}
	 
	 while(true)
	 {
	 		 printf("hello dear,how can i help you?\n");
	 		gets(input);
	 		if(!strcmp(input,"nothing")||!strcmp(input,"goodbye"))
	 		{
	 			printf("thank you and goodbye");
	 			return 0;
			 }
	 	if(!strcmp(input,"hello")||!strcmp(input,"hi"))
	 	{
	 		printf("hello how are you?");
		 }
		 if(!strcmp(input,"how are you"))
		 {
		 	printf("fine thanks\n");
		 }
	 	if(!strcmp(input,"todays weather"))
	 	{
	 		
		 }
	 }

	 
	 
	 	if( fgets (data, 60, file)!=NULL ) {
      /* writing content to stdout */
      puts(data);
   
}

	
}
