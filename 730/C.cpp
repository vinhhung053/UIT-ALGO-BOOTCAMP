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
typedef long double ld;
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;

inline ll POW(ll n, ll k, int p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}


const int N  = 1000005;

ld c,m,p,v;
ld tich = 1;
ld res = 0;
void thu(ld c, ld m, ld p, ld v, int dem)
{
    if(p == 0) return;
    res += tich * p * dem;
    //1
    if(c != 0)
    {
        tich = tich * c;
        ld tru = min(v,c);
        if(m > 1e-9 && p > 1e-9 ) thu(c - tru,m + tru / 2.0,p + tru / 2.0,v,dem + 1);
        else if(m> 1e-9 ) thu(c - tru, m + tru, p ,v,dem + 1);
        else if(p > 1e-9 ) thu (c - tru, m, p + tru , v, dem + 1);
        tich = tich / c;
    }
    //2

    if(m != 0)
    {
        tich = tich * m;
        ld tru = min(v,m);
        if(c > 1e-9  && p > 1e-9 ) thu(c + tru/2.0, m - tru, p + tru / 2.0 ,v, dem + 1);
        else if(c > 1e-9 ) thu(c + tru, m - tru, p ,v, dem + 1);
        else if(p > 1e-9 ) thu (c, m - tru, p + tru, v, dem + 1);

        tich = tich / m;
    }

}

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
        res = 0; tich = 1;
        cin >> c >> m >> p >> v;
        thu(c,m,p,v,1);
        cout << fixed << setprecision(16) <<  res << endl;
    }



}
