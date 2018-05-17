#include <stdio.h>
int isprime (int a)
{
	int f = 1;	
  	if(a > 2)
    {
    	for(int i = 2;i < a;i++)
        {
        	if(a % i == 0)
            {
            	f = 0;
              	break;
            }
        }
    }
  	return f;
}
int main ()
{
	int a[100];
  	int n;
  	int v = 0;
  	int u = 0;
    for(int k = 0; ; k++)
    {
  		scanf("%d",&a[k]);
    	if(a[k] == 0)
        {
          	n = k;
          	break;
        }
    }
    for(int m = 0; m < n; m++)
    {
  	    if(isprime(a[m]) == 1)
        {
            u++;
        }
    }
  	for(int j = 0;j < n; j++)
    {
      	if(isprime(a[j]) == 1)
        {
        	printf("%d",a[j]);	
        	v++;
        	if(v<u){printf(" ");}
        }
    }
}
