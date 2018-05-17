#include <stdio.h>
int main()
{
	char m[100];
  	int n;
  	int a = 0,b = 0,c = 0;

  	for(int i = 0;;i++)
    {
        scanf("%c",&m[i]);
      	if(m[i] == '*')
        {
        	n = i;
          	b = 1;
        }
      	if(b == 1)
        {
        	c++;
        }
      	if(c == 2)
        {
          break;
        }
    }
  	for(int k = 0;k<n;k++)
    {
    	if(m[k] == m[n+1])
        {
        	a = k;
          	break;
        }
    }

  	printf("%d",a+1);
}
