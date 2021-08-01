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
    ll a,b;
    while(q--)
    {
        cin >> a >> b;
        if(a == b)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        if(a < b) swap(a,b);
        ll t = 0;
        if(__gcd(a,b) == a - b) t = 0;
        else t = a-b - b % (a-b);
        t = min(t,b %(a-b));
        cout << a - b << " " << t << endl;
    }


}
