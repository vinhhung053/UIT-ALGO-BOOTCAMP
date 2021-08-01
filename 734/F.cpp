#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod 998244353LL
#define base 311LL
#define big 500000
#define fi first
#define se second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define getbit(n, i) (((n) >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=105;

int n,m;
char a[N][N];
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
        FOR(i,1,n)
            FOR(j,1,m)
            {
                cin >> a[i][j];
                if(a[i][j] == 'R') a[i][j] = 0;
                else if(a[i][j] == 'W') a[i][j] = 1;
                else a[i][j] = -1;
            }
        int kt1 = 1,kt2= 1;
        FOR(i,1,n)
            FOR(j,1,m)
            if((i+j) % 2 != a[i][j] && a[i][j] !=-1) kt1 = 0;
        FOR(i,1,n)
            FOR(j,1,m)
            if((i+j+1) % 2 != a[i][j] && a[i][j] !=-1) kt2 = 0;
        if(kt1)
        {
            cout << "YES" << endl;
            FOR(i,1,n)
            {
                FOR(j,1,m) if((i+j) % 2 == 0) cout << "R";
                else cout << "W";
                cout << endl;
            }
        }
        else
        if(kt2)
        {
            cout << "YES" << endl;
            FOR(i,1,n)
            {
                FOR(j,1,m) if((i+j+1) % 2 == 0) cout << "R";
                else cout << "W";
                cout << endl;
            }
        }
        else cout << "NO" << endl;
    }



}
