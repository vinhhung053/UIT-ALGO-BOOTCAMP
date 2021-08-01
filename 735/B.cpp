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
typedef pair<ll,char> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=1000020;

ll n,m,k;
ll a[N];
int bit = 0;


int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    int q;
    cin >> q;
    string st;
    while(q--)
    {
        cin >> n >> k;
        FOR(i,1,n) cin >> a[i];
        ll mx = LLONG_MIN;
        FORD(i,n,1)
            FORD(j,i-1,1)
            {
                    mx = max(mx, 1LL*i * j - 1LL*k * (a[i] | a[j]));
                    if(1LL*i * j - 1LL*k * a[i] <= mx) break;
            }
        cout << mx << endl;
    }



}
