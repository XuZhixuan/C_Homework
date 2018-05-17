#include <stdio.h>
int isprime (int a)
{
	int f = 1;	
  	if(a>2)
    {
    	for(int i = 2; i < a; i++)
        {
        	if(a % i == 0)
            {
            	f=0;
              	break;
            }
        }
    }
  	return f;
}
int main()
{
	int n;
  	int v = 0;
  	scanf("%d",&n);
  	for(int i = 2; i <= n-2; i++)
    {
		if(isprime(i) == 1 && isprime(i + 2)==1)
        {
        	v++;
        }
    }
    printf("%d",v);
    return 0;
}
