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

bool ok[100005];
int n;
string st;

ll C(int k,int n)
{
    ll tich = 1;
    FOR(i,1,n) tich = (tich * i) % mod;
    FOR(i,1,k) tich = (tich * POW(i,mod-2,mod)) % mod;
    FOR(i,1,n-k)
        tich = (tich * POW(i,mod-2,mod)) % mod;
    return tich;
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
        cin >> st;
        st = " " + st;
        int dem0 = 0, demcap = 0;
        FOR(i,1,n)
        {
            while(st[i+1] == st[i] && st[i] == '1') demcap++,i+=2;
            if(st[i] == '0') dem0++;
        }
        cout << C(demcap,demcap + dem0) << endl;
        //cout << demcap << " " << dem0 << endl;
    }



}
