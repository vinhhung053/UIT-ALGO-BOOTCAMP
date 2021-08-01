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

int dao(int a, int k) {
    int res = 0, p = 1;
    while (a)
    {
        int r = (k - a % k) % k;
        a /= k;
        res += p * r;
        p *= k;
    }
    return res;
}

ll X(int a,int b)
{
    ll tong = 0;
    ll mu = 0;
    int aaa = a,bbb = b;
    while(a || b)
    {
        int aa = a% k;
        int bb = b % k;
        tong += POW(k,mu)* ((a+b) % k);
        mu++;
        a = a / k;
        b = b / k;
    }
//    cout << endl << aaa <<  " " << bbb << " " <<  tong << endl;
    return tong;
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
    ll a,b;
    while(q--)
    {
        cin >> n >> k;
        ll Xor = 0;
        FOR(i,0,n-1)
        {
            ll tam = i;
            if(i%2 == 1) tam = dao(i,k);
            cout << X(Xor,tam) << endl;
//          cout << (i^Xor) << endl;
            cout.flush();
            int x;
            cin >> x;
            if(x == -1) while(1);
            Xor = X(X(Xor,tam),dao(Xor,k));
//          Xor = (Xor^(i^Xor));
            if(x == 1)
            {
                break;
            }
        }
    }



}
