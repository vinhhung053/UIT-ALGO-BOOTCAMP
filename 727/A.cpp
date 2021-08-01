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

ll n,x,t;

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
    cin >> q;
    while(q--)
    {
        cin >> n >> x >> t;
        ll hon = t / x;
        ll res = 0;
        if(n >= hon) res = hon * (n-hon);
        hon = min(n,hon);
        if(hon > 0) res += (hon) * (hon-1)/2;
        cout << res << endl;



    }

}
