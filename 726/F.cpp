#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod 998244353LL
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


const int N=1000005;

int n,m,xx,yy;
vector<int> e[N];
ll a[N],b[N];
int d[N],h[N];

bool dfs(int u,int trc)
{
    d[u] = 1;
    FOR(i,0,(int)e[u].size()-1)
    {
        int v = e[u][i];
        if(d[v] == 0)
        {
            h[v] = h[u] ^ 1;
            if (dfs(v,u)) return 1;
            a[u] -= a[v];
        }
        else if(h[u] == h[v]) return 1;
    }
    if(trc == 0 && !a[u]) return 1;
    return 0;
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
        cin >> n >> m;
        FOR(i,1,n) cin >> a[i];
        FOR(i,1,n) cin >> b[i];
        FOR(i,1,n) e[i].clear(),d[i] = 0,h[i] = 0;
        FOR(i,1,m)
        {
            cin >> xx >> yy;
            e[xx].push_back(yy);
            e[yy].push_back(xx);
        }
        ll tong = 0;
        FOR(i,1,n) tong += a[i]-b[i],a[i] -= b[i];
        if(abs(tong) % 2 == 1) cout << "NO" << endl;
        else
        {
            if(dfs(1,0)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }



}
