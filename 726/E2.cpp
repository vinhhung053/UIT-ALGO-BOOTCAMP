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

int n,m,k;
string st;

vector<int> z_func(string &st) {
    int n = st.size(), l = 0, r = 0;
    vector<int> z(n);
    z[0] = n;
    FOR(i,1,n-1)
    {
        if(i > r)
        {
            l = r = i;
            while(r < n && st[r-l] == st[r]) r++;
            z[i] = r-l;
            r--;
        }
        else
        {
            int k = i-l;
            if(z[k] < r - i + 1) z[i] = z[k];
            else
            {
                l = i;
                while(r < n && st[r - l] == st[r]) r++;
                z[i] = r - l;
                r--;
            }
        }
    }
    return z;
}


int main()
{
    if (fopen("text.inp","r"))
    {
       freopen("text.inp","r",stdin);
       freopen("text.out","w",stdout);
    }
    int q;
    cin >> n >> k >> st;
    auto z = z_func(st);
    //FOR(i,0,n-1) cout << z[i] << " ";
    FOR(i,1,n-1)
    {
        ll f = z[i];
        if(f + i < n)
        {
            if(st[f] < st[i+f])
                while (n > i) st.pop_back(), --n;
        }
        else
        {
			while (n > i) st.pop_back(), --n;
        }
    }
    string t = "";
	while (t.length() < k) t += st;
	cout << t.substr(0, k) << '\n';
}
