#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i , j;
    double total = 0, resultado;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        resultado = pow(2*i -1, 2*i-1)/pow(2*i,2*i);
        if(i%2 == 0 || i == 1)
        {
            total = resultado + total;

        }
        else
        total = resultado * total;

    }
    printf("%lf\n", total);
    return 0;
}
