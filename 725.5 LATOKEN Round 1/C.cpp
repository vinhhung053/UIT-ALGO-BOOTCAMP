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
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=1000005;

int n,m;
int a[N],b[N];
int fa[N];
int dinhgoc(int u)
{
    if(fa[u] > 0) return fa[u] = dinhgoc(fa[u]);
    return u;
}

void hopnhat(int u,int v)
{
    u = dinhgoc(u);
    v = dinhgoc(v);
    if(u == v) return;
    if(fa[u] < fa[v]) swap(u,v);
    fa[u] += fa[v];
    fa[v] = u;
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
        cin >> n;
        FOR(i,1,n) cin >> a[i];
        FOR(i,1,n) cin >> b[i];
        FOR(i,1,n) fa[i] = -1;
        FOR(i,1,n) hopnhat(a[i],b[i]);
        int dem = 0;
        FOR(i,1,n) if(fa[i]<0) dem++;
        cout << POW(2,dem,mod) << endl;
    }



}