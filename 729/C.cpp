#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod 1000000007LL
#define base 311LL
#define big  1000000
#define fi first
#define se second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define getbit(n, i) ((👎 >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N  = 5000005;

ll n;
ll res;

int nt[N];

int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int q;
    cin >> q;
    int i = 2;
    while(i <= sqrt(big))
    {
        while(nt[i] != 0) i++;
        FOR(j,2,big/i)
        if(nt[i*j]== 0)
            nt[i*j] = i;
        nt[i] = i;
        i++;
    }

    while(q--)
    {
        cin >> n;
        ll tich = 1,res = 0 ,luu = 0;
        FOR(i,2,1000)
        //if(nt[i] == 0)
        {
            tich = tich * i / __gcd(tich,1LL*i);
            if(luu == n) break;
            ll dem = n / tich;
            dem = n - dem - luu;
            luu += dem;
            res += (1LL*dem*i) % mod;
            res %= mod;
        }
        //cout << luu << endl;
        cout << res << endl;

//        ll rr = 0;
//        FOR(i,1,n)
//            FOR(j,1,n+1)
//            if(i % j != 0)
//            {
//                rr += j;
//                break;
//            }
//        cout << rr << endl;
    }


}
