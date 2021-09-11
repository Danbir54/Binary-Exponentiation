#include<bits/stdc++.h>
using namespace std;

long long binpow( long long a , long long b , long long m)
{
    if( b == 0) return 1;

    long long res = binpow( a , b / 2  , m);
    if( b % 2)
        return res * res * a %m ;
    else
        return res * res %m;
}
long long binpow2(long long a , long long b , long long m)
{
    a %= m;
    long long res = 1;

    while(b > 0)
    {
        if(b & 1)
            res = res *  a %m;
        a = a * a %m;
        b >>= 1;
    }
    return res;
}
int main()
{
    while(1)
    {
        int t ; cin >> t;
        if(t == 0)break;
        while(t--)
        {
            long long a, b , m;
            cin >> a >> b >> m;
            long long k = binpow2(a , b , m);
            cout << k << endl;
        }
    }

    return 0;
}
