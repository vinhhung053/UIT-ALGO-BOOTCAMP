#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define SET(a,x) memset((a),x,sizeof(a))
#define mod 1000000007LL
#define base 311LL
#define big  1000000
#define fi first
#define se second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define getbit(n, i) ((👎 >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N  = 1000005;

ll n,k;
ll res;



int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }

    int q;
    cin >> q;
    ll a,b;
    while(q--)
    {
        cin >> n >> k;
        ll Xor = 0;
        FOR(i,0,n-1)
        {
            cout << (i ^ Xor) << endl;
            cout.flush();
            int x;
            cin >> x;
            if(x == -1) while(1);
            Xor ^= (i ^ Xor);
            if(x == 1)
            {
                break;
            }

        }
    }


}
