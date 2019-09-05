#include<bits/stdc++.h>
using namespace std;
int edit_distance(char a[],char b[],int m,int n)
{
    int T[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 && j==0)T[i][j]=0;
            else if(i==0)T[i][j]=1+T[i][j-1];
            else if(j==0)T[i][j]=T[i-1][j]+1;
            else
            {
                if(a[i]==b[j])
                {
                    T[i][j]=T[i-1][j-1];
                }
                else
                {
                    T[i][j]=1+ min(min(T[i][j-1],T[i-1][j]), T[i-1][j-1]);
                }
            }
        }
    }
    return T[m][n];
}
int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int m,n;cin>>m>>n;
	    char a[m+1],b[n+1];
	    for(int i=1;i<=m;i++)cin>>a[i];
	    for(int j=1;j<=n;j++)cin>>b[j];
	    cout<<edit_distance(a,b,m,n)<<"\n";
	}
	return 0;
}
