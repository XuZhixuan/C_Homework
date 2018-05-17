#include <stdio.h>
int main()
{
	char m;

    for(int i = 0;;i++)
    {
    	scanf("%c",&m);
      	if(m <= 90 && m>= 65)
        {
      		if(m == 'Z' || m == 'X' || m == 'Y')
        	{
                m += 9;
            }
   	   		else
        	{
                m += 35;
            }
        }
        else if(m >= 97 && m <= 122)
        {
        	if(m == 'x' || m == 'y' || m == 'z')
            {
                m -= 55;
            }
          	else
            {
                m -= 29;
            }
        }
        else
        {
            break;
        }        
      	printf("%c",m);
    }
    return 0;
}
