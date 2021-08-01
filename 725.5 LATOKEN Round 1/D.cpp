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
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=1000005;

int n;
int d[N],d1[N];
int kt[N];
vector<int> a[N];
set<ii> g;
int q;
void solve(int u)
{
    //if(kt[u] == 1) return;
    kt[u] = 1;
    cout << "? " << u << endl;
    FOR(i,1,n) cin >> d[i];
    FOR(i,1,n)
    {
        if(d[i] == 1) a[u].push_back(i),kt[i] = 1;
    }
}

int main()
{
    cin >> n;
    q = (n+1)/2;
    int u = 1;
    kt[u] = 1;
    cout << "? " << u << endl;
    FOR(i,1,n) cin >> d1[i];
    FOR(i,1,n)
    {
        if(d1[i] == 1) a[u].push_back(i),kt[i] = 1;
    }
    int dem[2] = {0,0};
    int mx = 0;
    FOR(i,1,n) if(d1[i] != 0) dem[d1[i]%2]++;
    int tam = 0;
    if(dem[0] < dem[1]) tam = 0; else tam = 1;
    FOR(i,1,n) if(d1[i] % 2 == tam && d1[i] != 0) solve(i);
    cout << "!" << endl;
    FOR(u,1,n)
        FOR(i,0,(int)a[u].size()-1)
        {
            if(g.count(mp(u,a[u][i])) == 0 && g.count(mp(a[u][i],u)) == 0) cout << u << " " << a[u][i] << endl;
            g.insert(mp(u,a[u][i]));
        }


}
