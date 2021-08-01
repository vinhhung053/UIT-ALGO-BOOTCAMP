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

int n,m,x;
int bit = 0;
struct mang
{
    int d[6] = {0};
    int vt;
};
mang a[N];

bool cmp(mang aa, mang bb)
{
    return aa.d[bit] < bb.d[bit];
}

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
        cin >> n;

        if(n % 2 == 0)
        {
            int a = n / 2;
            FOR(i,1,a-1) cout << 'a';
            cout << 'b';
            FOR(i,1,a) cout << 'a';
        }
        else if(n == 1)
        {
            cout << 'a';
        }
        else
        {
            int a = n / 2;
            FOR(i,1,a-1) cout << 'a';
            cout << 'b' << 'c';
            FOR(i,1,a) cout << 'a';
        }
        cout << endl;
    }



}
