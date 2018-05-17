#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getValue(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return c - 'a' + 10;
    }
    else if(c >= '0' && c <= '9')
    {
        return c - '0';
    }
}
long long myAtoI(char *str, int n, long long radix)
{
    long long number = 0;
    int i;
    long long tmp = 0;
    long long r = 1;

    for(i = n - 1; i >= 0; i--)
    {
        number += getValue(str[i]) * r;
        r *= radix;
    }

    return number;
}

long long findLowRadix(char *s)
{
    int len = strlen(s);
    long long low = 0;
    long long num = 0;
    long long i;

    for(i = len - 1; i >= 0; i--)
    {
        num = getValue(s[i]);
        if(num + 1 > low)
        {
            low = num + 1;
        }
    }

    return low;

}

int compare(char *s, long long radix, long long target)
{
    long long len = strlen(s);
    long long m = 1;
    long long num = 0;
    long long sum = 0;
    long long i;

    for(i = len - 1; i >= 0; i--){
        num = getValue(s[i]);
        sum += num*m;
        m *= radix;
        if(sum > target)
        {
            return 1;
        }
    }

    if(sum > target)
    {
        return 1;
    }
    else if(sum < target)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

long long binarySearch(char *s, long long low, long long high, long long target)
{
    long long mid = low;
    long long tmp;

    while(low <= high){
        tmp = compare(s, mid, target);
        if(tmp > 0)
        {
            high = mid - 1;
        }
        else if(tmp < 0)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = (low + high)/2;
    }

    return -1;
}

int main()
{
    char a[11];
    char b[11];
    long long radix, radix1, radix2;
    long long least, most;
    long long number1, number2;
    long long res;
    int tag;
    int i, j;

    scanf("%s%s%d%lld", a, b, &tag, &radix);
    if(tag == 1){
        radix1 = radix;
        number1 = myAtoI(a, strlen(a), radix1);
        least = findLowRadix(b);
        most = (number1 + 1 > least + 1)?(number1 + 1):(least + 1);
        res = binarySearch(b, least, most, number1);

    }else if(tag == 2){
        radix2 = radix;
        number2 = myAtoI(b, strlen(b), radix2);
        least = findLowRadix(a);
        most = (number2 + 1 > least + 1)?(number2 + 1):(least + 1);
        res = binarySearch(a, least, most, number2);

    }

    if(res == -1){
        printf("Impossible");
    }else{
        printf("%lld", res);
    }
    printf("\n");
    return 0;
}