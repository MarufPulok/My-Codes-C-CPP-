#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][n];
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=n-2; i>=0; i--)
        {
            for(j=0; j<=i; j++)
            {
                if((a[i][j]+a[i+1][j])>(a[i][j]+a[i+1][j+1]))
                {
                    a[i][j]=a[i][j]+a[i+1][j];
                }
                else
                    a[i][j]=a[i][j]+a[i+1][j+1];

            }
        }
        cout<<a[0][0]<<endl;
    }
    return 0;
}

