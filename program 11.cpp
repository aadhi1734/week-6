//capitalize first letter of each word...
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char ch[]="aadhi keshava reddy";
	for(i=0;ch[i]!='\0';i++)
	{
		if(i==0)
		{
			if(ch[i]>='A' && ch[i]<='Z');
			else
			ch[i]-=32;
	    }
		else if(ch[i]==' ')
		{
			if(ch[i+1]>='A' && ch[i+1]<='Z' );
			else
			ch[i+1]-=32;
		}
		
	}
	for(i=0;ch[i]!='\0';i++)
	printf("%c",ch[i]);
	return 0;
}
