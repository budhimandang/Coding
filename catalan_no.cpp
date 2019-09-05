#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int1024_t cat(int n)
{
    int1024_t T[n+1];
    T[0]=1;T[1]=1;
    for(int i=2;i<=n;i++)
    {
        T[i]=0;
        for(int j=0;j<i;j++)
        {
            T[i]+=T[j]*T[i-j-1];
        }
    }
    return T[n];
}
int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    cout<<cat(n)<<"\n";
	}
	return 0;
}
