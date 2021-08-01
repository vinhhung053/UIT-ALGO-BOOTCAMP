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


const int N  = 5000005;

ll n,a,b;
ll res;

int nt[N];

int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int q;
    cin >> q;

    while(q--)
    {
        cin >> n >> a >> b;
        if(b == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        if(a == 1)
        {
            if((n-1) % b == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
            continue;
        }
        deque<int> de;
        de.push_back(1);
        int kt = 0;
        while(de.size())
        {
            int tam = de.front();
            de.pop_front();
            if(tam > mod) continue;
            if(1LL*tam * a < mod) de.push_back(tam*a);
            if(n >= tam && (n - tam) % b == 0)
            {
                kt = 1;
                break;
            }
        }
        if(kt == 1) cout << "Yes" << endl;
        else cout << "No" << endl;


    }


}
