#include <math.h>
#include <stdio.h>

int main()
{
    double x;
    int N;
    scanf("%d", &N);
    while (N--) {
        scanf("%lf", &x);
        printf("%.2lf\n", 1.0 / pow(cos(x), 3.0));
    }
}
/**************************************************************
	Problem: 1206
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

