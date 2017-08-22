# thenmozhi
#include <stdio.h>
int main()
{
    int n, i, kavin= 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        kavin += i;   // kavin = kavin+i;
    }

    printf("kavin = %d",kavin);

    return 0;
}
