#include <stdio.h>
#include<string.h>
int main()
{
    float a[1001];
    int i,k;
    float temp;

    for(i = 0; i <= 1000; i++){
        a[i] = 0.0f;
    }

    scanf("%d", &k);
    while(k--){
        scanf("%d%f", &i, &temp);
        a[i] += temp;
    }
    scanf("%d", &k);
    while(k--){
        scanf("%d%f", &i, &temp);
        a[i] += temp;
    }

    k = 0;
    for(i = 0; i <= 1000; i++){
        if(a[i]!=0.0){
                k++;
        }
    }
    printf("%d", k);

    if(k != 0)
        printf(" ");
    for(i=1000; i >= 0; i--){
        if(a[i]!=0.0){
            printf("%d ", i);
            printf("%0.1f", a[i]);
            k--;

            if(k != 0)
                printf(" ");
        }
    }
    return 0;
}