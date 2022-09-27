#include<stdio.h>
int main()
{
	char str[30],rev[30];
	int i,j,count=0;
	printf("enter the word or num:");
	scanf("%s",str);
	while(str[count]!=0)
	{
		count++;
	}
	j=count-1;
	for(i=0;i<count;i++)
	{
		rev[i]=str[j];
		j--;
	}
	printf("string after reverse:%s",rev);
	return 0;	
}
