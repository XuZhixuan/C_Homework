#include <stdio.h>
#include <string.h>

void mystrrev(char a[])
{
  	char c;
  	int m = strlen(a);
  	for(int i  =0; i < m/2; i++)
    {
    	c = a[i];
      	a[i] = a[m - i - 1];
      	a[m - i - 1] = c;
    }
}
int main ()
{
	char a[128];
    gets(a);
  	mystrrev(a);
  	printf("%s",a);
  	return 0;
}
