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

int n,k;
string st;
int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    int q = 1;
    while(q--)
    {
        cin >> n >> k;
        cin >> st;
        int len = n;
        int vt = -1;
        string res = "";
        FORD(i,len,1)
        {
            string s1 = st.substr(0,i);
            while(s1.length() < k) s1 = s1 + s1;
            s1 = s1.substr(0,k);
            //cout << s1 << endl;
            if(res == "" || res > s1) res = s1;
        }
        cout << res << endl;
    }



}
