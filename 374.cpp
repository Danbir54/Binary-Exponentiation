#include<bits/stdc++.h>
using namespace std;

long long binpow( long long a , long long b , long long c)
{
    if( b == 0)return 1;
    if(b & 1)
    {
        long long x = a % c;
        long long y = (binpow(a , b - 1 , c)) % c;
        return x * y % c;
    }
    long long q = (binpow(a , b/2 , c)) % c;
    return q * q % c;

}

int main()
{
    while(1)
    {
        int t ; cin >> t;
        if(t == 0)break;
        while(t--)
        {
            long long B , P  , M; cin >> B >> P >> M;
            long long k = binpow(B , P , M);
            cout << k << endl;
        }
    }
    return 0;
}
