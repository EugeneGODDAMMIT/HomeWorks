#include <stdio.h>

float binpow (float a, int n) {
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return binpow (a, n-1) * a;
	else {
		int b = binpow (a, n/2);
		return b * b;
	}
}
float powerr(float a,int n)
{
    if (n >= 0)
    {
        return binpow(a,n);
    }
    else 
    {
        return 1/binpow(a,-n);
    }
}



int main()
{
    float c = powerr(5,-2);
    printf("%f\n", c);

    return 0;
}
