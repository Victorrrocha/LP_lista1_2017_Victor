#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int n, i;
    double total = 0, resultado;
    cin >> n;
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

    cout << total << endl;
    return 0;
}
