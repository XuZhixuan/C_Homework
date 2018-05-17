#include <stdio.h>
int main ()
{
	int m,a,b;
  	int c = 0;
  	int d = 0;
  	int x[100];
  	scanf("%d",&a);
  	int g = a;
  	for(int i = 0; ;i++)
    {
    	a = a / 10;
      	c++;
      	if(a == 0)
        {
        break;
        }
    }
    m = c/3;
    x[0] = c - m * 3;

  	for(int i = 1; i <= m; i++)
    {
    	x[i] = x[i - 1] + 3;
    }

    a = g;
  	for(int i = 100000000; ;i/=10)
    {
    	b = a / i;
      	a = a % i;
		if(b != 0)
        {
          	d++;
        	printf("%d",b);
			for(int j = 0;j < m;j ++)
            {
            	if(d == x[j])
				{
					printf(",");
				}
            }
        }
        if(a == 0)
        {
            break;
        }
	}
    return 0;
}
