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


const int N=600005;

ll n,m,x,y;
ii luu[2];
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
        cin >> n >> m >> x >> y;
        vector<ii> g;
//        g.push_back(mp(50,1 ));
//        g.push_back(mp(1 ,1000000000LL));
        g.push_back(mp(1,1));
        g.push_back(mp(1,m));
        g.push_back(mp(n,1));
        g.push_back(mp(n,m));
        g.push_back(mp(n-x+1,m-y+1));
        g.push_back(mp(n-x+1,y));
        g.push_back(mp(x,m-y+1));
        g.push_back(mp(x,y));
        g.push_back(mp(x,y));
        g.push_back(mp(y,x));
        ll mx = -1,tongkc = 0;

        FOR(i,0,2)
            FOR(j,i+1,3)
            {
                tongkc = abs(x - g[i].fi) + abs(y - g[i].se) + abs(g[i].fi - g[j].fi) + abs(g[i].se - g[j].se)
                     +   abs(x - g[j].fi) + abs(y - g[j].se);
                if(mx < tongkc) mx = max(mx,tongkc),luu[0] = g[i],luu[1] = g[j];
            }
        //cerr << mx << endl;
        cout << luu[0].fi << " " << luu[0].se << " " << luu[1].fi << " " << luu[1].se << endl;
    }



}
