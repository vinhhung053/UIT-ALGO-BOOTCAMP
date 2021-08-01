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
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N=1000005;

int n,m;
int a[N];
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
        FOR(i,1,n) cin >> a[i];
        int mn = INT_MAX;
        sort(a+1,a+n+1);
        FOR(i,1,n-1) if (abs(a[i] - a[i+1]) < mn) mn = abs(a[i] - a[i+1]);
        int mx = -1;
        FOR(i,1,n-1)
        {
            if (abs(a[i] - a[i+1]) == mn)
            {
                int d = 0;
                if(n-i-1 > 0) d += n - i - 1;
                if(a[n] >= a[1]) d++;
                if(i-1 > 0) d+= i-1;
                mx = max(mx,d);
            }
        }
        FOR(i,1,n-1)
         if (abs(a[i] - a[i+1]) == mn)
            {
                int d = 0;
                if(n-i-1 > 0) d += n - i - 1;
                if(a[n] >= a[1]) d++;
                if(i-1 > 0) d+= i-1;
                if(mx != d) continue;
                cout << a[i] << " ";
                FOR(j,i+2,n) cout << a[j] << " ";
                FOR(j,1,i-1) cout << a[j] << " ";
                cout << a[i+1] << endl;
                break;
            }
    }



}
