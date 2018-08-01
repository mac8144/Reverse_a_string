#include<stdio.h>
#include<string.h>
int main()
{
	char st[50],t;
	int i,j,n;
	printf("Enter a string: ");
	scanf("%s",st);
	n=strlen(st);
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		t=st[i];
		st[i]=st[j];
		st[j]=t;
	}
	printf("Reversed string is %s",st);
	return 0;
}
