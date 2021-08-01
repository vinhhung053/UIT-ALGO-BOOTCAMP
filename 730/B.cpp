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

ll a[N];

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

    while(q--)
    {
        cin >> n;
        FOR(i,1,n)
        {
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        if(a[n] > a[1]) a[n]--,a[1]++;
        ll tong = 0;
        FOR(i,1,n) tong += a[i];
        FOR(i,1,n) a[i] = tong / n;
        FOR(i,1,tong%n) a[i]++;
//        FOR(i,1,n) cout << a[i] << " ";cout << endl;
        ll res = 0;
        tong = a[1];
        FOR(i,2,n)
            res += tong - 1LL*(i-1) * a[i] ,tong += a[i];
        cout << res << endl;
    }


}
