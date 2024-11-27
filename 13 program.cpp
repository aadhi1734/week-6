//this program prints given string in dictionary order;;;;
#include<stdio.h>
int main()
{
	char ch[]="keshava";
	int i,j;
	char small;
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=i+1;ch[j]!='\0';j++)
		{
			if(ch[j]<ch[i])
			{
				small=ch[j];
				ch[j]=ch[i];
				ch[i]=small;
			}
		}
	}
	for(i=0;ch[i]!='\0';i++)
	printf("%c",ch[i]);
	return 0;
}
