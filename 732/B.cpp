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
string st1[N],st2[N];
int d1[N][266],d2[N][266],ok[N];

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
        cin >> n >> m;
        FOR(i,1,n) cin >> st1[i];
        FOR(j,0,m-1)
            FOR(i,'a','z') d1[j][i] = 0, d2[j][i] = 0;
        FOR(i,1,n)
            FOR(j,0,m-1) d1[j][st1[i][j]]++;
        FOR(i,1,n-1) cin >> st2[i];
        FOR(i,1,n-1)
            FOR(j,0,m-1) d2[j][st2[i][j]]++;
        FOR(i,1,n) ok[i] = 1;
        FOR(i,1,n)
            FOR(j,0,m-1)
            {
                d1[j][st1[i][j]]--;
                int kt = 1;
                FOR(ch,'a','z')
                {
                    if(d1[j][ch] != d2[j][ch])
                    {
                        kt = 0;
                        break;
                    }
                }
                if(kt == 0) ok[i] = 0;
                 d1[j][st1[i][j]]++;
            }
        FOR(i,1,n) if(ok[i])
        {
            cout << st1[i] << endl  ;
            fflush(stdout);
            break;
        }

    }



}
