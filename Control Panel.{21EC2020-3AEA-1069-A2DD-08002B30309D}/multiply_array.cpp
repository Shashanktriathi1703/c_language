#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k;
    int a[3][3], b[3][3], c[3][3];
    int n;
    cout <<"enter the loop number ->" << endl;
    cin >> n;
    cout<<"enter the array elements 1->"<<endl;
    for (i = 1; i <= n; i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the array elements 2->"<<endl;
     for (i = 1; i <= n; i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"multiply the array on third array->"<<endl;
     for (i = 1; i<=n; i++)
    {
        for(j=1;j<=n;j++)
        {
            c[i][j]=0;
        }
    }
     for (i = 1; i<=n; i++)
    {
        for(j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
           c[i][j]+=(a[i][k]*b[k][j]);
           //cout<<c[i][j]<<" ";
            }
            //cout<<endl;
        }
    }
     for (i = 1; i<=n; i++)
    {
        for(j=1;j<=n;j++)
        {
              cout<<c[i][j]<<" ";
        }
                
      cout<<endl;
    }
    return 0;

}