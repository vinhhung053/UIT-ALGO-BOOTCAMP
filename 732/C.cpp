#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod  998244353LL
#define base 311LL
#define big  1000000
#define fi first
#define se second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define getbit(n, i) ((👎 >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=100020;

int n,m;
int a[N];
int d1[N][2],d2[N][2];

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
        FOR(i,1,100000)
            FOR(j,0,1) d1[i][j] = 0, d2[i][j] = 0;
        FOR(i,1,n) d1[a[i]][i%2]++;
        sort(a+1,a+n+1);
        FOR(i,1,n) d2[a[i]][i%2]++;
        int kt = 1;
        FOR(i,1,100000)
            if(d1[i][0] != d2[i][0] || d1[i][1] != d2[i][1])
                kt = 0;
        if(kt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }



}
