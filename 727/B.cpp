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
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N  = 100005;

ll n,q,l,r;
string st;
int f[N][30];

int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    cin >> n >> q;
    cin >> st;
    st = " " + st;
    FOR(i,1,n)
        FOR(j,'a','z') f[i][j-'a'] += f[i-1][j-'a'] + (st[i] == j);

    while(q--)
    {
        ll tong = 0;
        cin >> l >> r;
        FOR(i,'a','z') tong += (f[r][i-'a'] - f[l-1][i - 'a']) *(i - 'a' +1);
        cout << tong << endl;
    }


}
