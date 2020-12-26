#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void printb(unsigned int v)
{
    unsigned int mask = (int)1 << 10;
    do
        putchar(mask & v ? '1' : '0');
    while (mask >>= 1);
}

int main()
{

    ll N;
    cin >> N;

    for (int i = 0; i < (1 << N); i++)
    {
        printf("%d ", i);
        printb(i);
        printf("\n");
    }
}