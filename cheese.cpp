#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
const int MAXN=1010;
using namespace std;
struct cir
{
    double x,y,z;
    bool operator<(const cir &cpr)const
    {
        return z<cpr.z;
    }
}p[MAXN];
bool fnd=0;
int n;
double h,r;
bool vis[MAXN];

double dist(double x1,double y1,double z1,double x2,double y2,double z2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
}

void dfs(cir now,int num)
{
    if(now.z+r>=h)
    {
        fnd=1;
        return;
    }
    vis[num]=1;
    for(int i=1;i<=n;i++)
    {
        if(fnd)
            return;
        if(!vis[i]&&dist(now.x,now.y,now.z,p[i].x,p[i].y,p[i].z)<=r*2)
            dfs(p[i],i);
    }
}

int main()
{
    freopen("cheese.in","r",stdin);
    freopen("cheese.out","w",stdout);
    int T;
	scanf("%d",&T);
    while(T--)
    {
        memset(vis,0,sizeof(vis));
        memset(p,0,sizeof(p));fnd=0;
        scanf("%d%lf%lf",&n,&h,&r);
        for(int i=1;i<=n;i++)
            scanf("%lf%lf%lf",&p[i].x,&p[i].y,&p[i].z);
        sort(p+1,p+n+1);
        for(int i=1;i<=n;i++)
            if(p[i].z-r<=0)
                dfs(p[i],i);
        if(fnd)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
