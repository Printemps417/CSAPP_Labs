#include<iostream>
#include<cstring>

using namespace std;
const int N=510,INF=0x3f3f3f3f;
int n,m;
int g[N][N],d[N],st[N];


void prim()
{
    int sum=0;
    memset(d,0x3f,sizeof d);        //初始化
    d[1]=0;
    for(int i=0;i<n;i++)        //循环n次
    {
        int t=0;
        for(int j=1;j<=n;j++)       //找出距离连通部分距离最小的顶点
            if(!st[j] and (d[j]<d[t] or !t))
                t=j;
        st[t]=1;        //将该点加入连通部分
        sum+=d[t];
        if(d[t]==INF)       //如果距离连通部分距离最小的顶点距离仍然是INF就说明图不连通，跳出循环。
        {
            cout<<"impossible"<<endl;
            return;
        }
        for(int j=1;j<=n;j++)       //遍历该点的所有的边，更新距离
            if(!st[j] and d[j]>g[t][j])
                d[j]=g[t][j];
    }
    cout<<sum<<endl;
}

int main()
{
    cin>>n>>m;
    memset(g,0x3f,sizeof g);
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        g[a][b]=g[b][a]=min(g[a][b],c);     //可能有重边，我们只存最小的边权
    }

    prim();
    return 0;
}
