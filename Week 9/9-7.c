#include <stdio.h>
int main()
{
	char n[100];
  	int a = 0, b = 0, c = 0, d = 0;
  	int m;
  	gets(n);

    for(int i = 0; i <= 50; i++)
    {
      	m = n[i];
      	if(m == 0)
        {
            break;
        }
        else
        {
            if(m <= 90 && m >= 65)
            {
      	    	a++;
            }
            else if(m >= 97 && m <= 122)
            {
            	b++;
            }else if(m >= 48 && m <= 57)
            {
            	c++;
            }
            else
            {
            	d++;
            }
        }
    }
    printf("%d %d %d %d %d",a,b,c,d,a+b+c+d);
    return 0;
}
