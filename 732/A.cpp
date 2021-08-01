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

int n;
int a[N],b[N];

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
        FOR(i,1,n) cin >> b[i];
        int tong1 = 0,tong2 = 0;
        FOR(i,1,n) tong1 += a[i];
        FOR(i,1,n) tong2 += b[i];
        if(tong1 != tong2)
        {
            cout << -1 << endl;
            continue;
        }
        int tong = 0;
        FOR(i,1,n) tong += abs(a[i] - b[i]);
        cout << tong / 2 << endl;
        int i = 1, j = 2;
        while(1)
        {
            if(i < n && a[i] == b[i]) i++;
            if(i == n) break;
            FOR(j,i+1,n)
            {
                while(a[j] > b[j] && a[i] < b[i])
                {
                    a[j]--,a[i]++;
                    cout << j << " " << i << endl;
                }
                while(a[j]< b[j] && a[i] > b[i])
                {
                    a[j]++,a[i]--;
                    cout << i << " " << j << endl;
                }
            }
        }
    }



}
