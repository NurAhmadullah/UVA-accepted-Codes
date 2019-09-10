#include <bits/stdc++.h>
using namespace std;
#define MOD 10000000000007
typedef long long lli;

int main()
{
    lli t, l, m, n, ti=1;
    cin >> t;

    while (t--)
    {
        cin >> l >> m >> n;
        lli npr = 1;
        for (lli i = l*l ; i>(l*l-m) ; i--)
        {
            npr = ((npr * i)%MOD);
        }
        lli sum = npr;
        for (lli i = (l*l-m) ; i>(l*l-n) ; i--)
        {
            npr = ((npr * i)%MOD);
            sum = ((sum + npr)%MOD);
        }
        cout << "Case " << ti++ << ": " << sum << endl;
    }
}
