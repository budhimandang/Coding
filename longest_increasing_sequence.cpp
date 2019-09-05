#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n],t[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        t[i]=1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[j]<a[i])
	            {
	                t[i]=max(t[i],t[j]+1);
	            }
	        }
	    }
	    sort(t,t+n);
	    cout<<t[n-1]<<"\n";

	}
	return 0;
}
