#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod  99824435312111LL
#define base 311LL
#define big  1000000
#define fi first
#define se second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define getbit(n, i) ((n >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll,char> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, ll p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


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
        cin >> n >> m;
        if(n > m)
        {
            cout << 0 << endl;
            continue;
        }
        int vt = 0;
        ll tong = 0;
        FOR(i,0,30)
            if(getbit(n,i) == 0)
            {
                vt = i;
                tong += POW(2,i);
                if(tong + n > m) break;
            }
        FORD(i,30,0)
            if(getbit(n,i) == 0)
            {
                if(tong + n - POW(2,i) > m) tong -= POW(2,i);
            }
        cout << tong << endl;
    }



}
