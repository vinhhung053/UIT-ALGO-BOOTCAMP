#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod 1000000007LL
#define base 311LL
#define big  100000
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


const int N  = 200005;

ll n,k,x;
int a[N],d[N];

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
    while(q--)
    {
        cin >> n;
        FOR(i,1,n) cin >> a[i];
        ll res = 0;
        FOR(i,0,2*big) d[i] = 0;
        FOR(i,1,n)
        {
            int chay = a[i];
            while(chay < i+i)
            {
                int aj = chay - i;
                if(a[aj] * a[i] == chay && aj < i) res++;
                //res += d[chay - i];
                chay = chay + a[i];
            }
            //d[a[i]]++;
        }
        cout << res << endl;
    }


}
