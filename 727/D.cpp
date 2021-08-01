#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod 1000000007LL
#define base 311LL
#define big 500000
#define fi first
#define se second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define getbit(n, i) (((n) >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N  = 1000005;

int n,m;
ii a[N];

bool cmp(ii a,ii b)
{
    //return (a.fi - a.se < b.fi - b.se);
    return (a.se < b.se) || (a.se == b.se && a.fi < b.fi);
}

int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    int q;
    q = 1;
    while(q--)
    {
        cin >> n;
        FOR(i,1,n) cin >> a[i].fi >> a[i].se;
        sort(a+1,a+n+1,cmp);
        ll tong = 0,giam = 0,du = 0;
        FOR(i,1,n)
        {
            tong += a[i].fi;
        }
        ll res = 0;
        res += tong * 2;
        FORD(i,n,1)
            if(tong > a[i].se) res -= min(tong-a[i].se,a[i].fi), tong -= min(tong-a[i].se,a[i].fi);
        cout << res;

    }

}
