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

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,ll> ii;
typedef pair<ii,int> iii;
typedef pair<ii,ii> iiii;



template <typename T> inline void read(T &x)
{
    int am=0;char k;
    while(!(isdigit(k=getchar()))&&k!='-');
    if (k=='-') k=getchar(),am=1;
    x=k-48;
    while(isdigit(k=getchar())) x=x*10+k-48;
    if (am) x=-x;
}

template <typename T> inline void writep(T x)
{
    if (x>=10) writep(x/10);
    putchar(x%10+48);

}
template <typename T> inline void write(T x)
{
    if(x<0) putchar ('-'),x=-x;
    writep(x);
}
template <typename T> inline void writeln(T x)
{
    write(x);
    putchar('\n');
}

template <typename T> inline void writesp(T x)
{
    write(x);
    putchar(' ');
}


const int N=10020;

int n,m,xx,yy;
vector<int> a[N];
int cmt=0,number[N],low[N],trace[N],child[N],iscut[N];
int cau,khop;
void DFS(int u)
{
    cmt++;
    number[u]=low[u]=cmt;
    FOR(i,0,(int)a[u].size()-1)
    {
        int v=a[u][i];
        if(trace[u]==v) continue;
        if(number[v]==0)
        {
            trace[v]=u;
            child[u]++;
            DFS(v);
            low[u]=min(low[u],low[v]);
        }
        else low[u]=min(low[u],number[v]);
    }
}


void kq()
{
    int tong=0;
    FOR(v,1,n) if(trace[v])
    {
        int u=trace[v];
        if(low[v]>=number[v]) cau++;
        if(low[v]>=number[u])
            iscut[u]=iscut[u]|(child[u]>=2)|(trace[u]>0);
    }
    FOR(i,1,n) khop+=iscut[i];
    writesp(khop);
    writeln(cau);
}

int main()
{

   if (fopen("text.inp","r"))
   {
      freopen("text.inp","r",stdin);
      freopen("text.out","w",stdout);
   }
   else
   {
       //freopen("TRIPGAME.inp","r",stdin);
       //freopen("TRIPGAME.out","w",stdout);
   }
   read(n);read(m);
   FOR(i,1,m)
   {
       read(xx);read(yy);
       a[xx].push_back(yy);
       a[yy].push_back(xx);
   }
   FOR(i,1,n)
    if(number[i]==0) DFS(i);

    kq();






}
