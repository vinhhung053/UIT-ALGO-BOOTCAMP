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
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=1000005;

int n,m;
ll a[N];
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
        a[0] = 0; a[n+1] = 0;
        ll tong  = 0;
        FOR(i,1,n) if(a[i] > a[i-1] && a[i] > a[i+1]) tong += a[i] - max(a[i-1],a[i+1]),a[i] = max(a[i+1],a[i-1]);
        FOR(i,1,n) tong += abs(a[i] - (a[i-1]));
        tong += a[n];
        cout << tong << endl;
    }



}
