#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int prim[100],v[100],n,radn,i,j,k;
int main()
{
    f>>n;
    cout<<"n="<<n<<endl;
    for(i=1;i<=n;i++)
        v[i]=1;
    radn=(int)sqrt(n);
    for(i=2;i<=radn;)
    {
        while(v[i]==0)
        {
            i++;
        }
        k=k+1;
        prim[k]=i;
        for(j=i;j<=n;j=j+i)
        {
            v[j]=0;
        }
    }
    for(i=radn+1;i<=n;i++)
        if(v[i]==1)
        {
            k=k+1;
            prim[k]=i;
        }
    for(i=1;i<=k;i++)
        g<<prim[i]<<endl;
    f.close();
    g.close();
    return 0;
}
