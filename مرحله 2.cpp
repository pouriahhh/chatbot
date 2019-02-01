#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//#include<boolian.h>
int main()
{
	char data[100],input[20];
	long long int sizein;
	 FILE *file;
	 file=fopen("data.txt","r");
	 if(file)
	 {
	 	fprintf(stderr, "data loaded successfully\n");
	 }
	/* if( fgets (data, 60, file)!=NULL ) {
     //  writing content to stdout 
      puts(data);}
	  
	  fseek( file, 0, SEEK_SET );
	  if( fgets (data, 60, file)!=NULL ) {
      // writing content to stdout 
      puts(data);}*/
	 
	 while(true)
	 {
	 		 printf("hello dear,how can i help you?\n");
	 		gets(input);
	 		sizein=strlen(input);
	 		
	 		while(fgets (data, sizein+1, file)!=NULL)
	 		{printf("data:%s\n",data);
	 			fgets (data, sizein+1, file);
	 			puts(data);
	 			if(!strcmp(input,data))
	 			{printf("peyda shod");
	 				fgets (data, 30, file);
	 				puts (data);
	 				return 0;
				 }
	 			
	 		
			 }
	 		
	 		
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
