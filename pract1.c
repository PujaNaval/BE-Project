#include<stdio.h>
//#include<fstream.h>
#define MAX_FILE_NAME 100
int main()
{
	FILE *fp; 
	int count=0;
	char filename[MAX_FILE_NAME];
	char c;
	printf("enter the filename");
	scanf("%s",filename);
	fp=fopen(filename,"r");
	if(fp=='\0')
	{
		printf("file can't open");
		return 0;
	}
 for(c=getc(fp);c!='\0';c=getc(fp))
	{if(c=='n')
	count++;}
fclose(fp);
	printf("file has %d lines", count);
	return 0;
	
}
