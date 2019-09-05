#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    n=2*n+2;
	    int arr[n],x=0,y=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int Xor = arr[0];
        int set_bit_no,i;
        for(i = 1; i < n; i++)
        Xor ^= arr[i];
        set_bit_no = Xor & ~(Xor-1);
        for(i = 0; i < n; i++)
        {
            if(arr[i] & set_bit_no)
            x = x ^ arr[i];
            else
            y = y ^ arr[i];
        }
	    if(x<y)
	    {
	        cout<<x<<" "<<y<<endl;
	    }
	    else
	    {
	        cout<<y<<" "<<x<<endl;
	    }
	}
	return 0;
}
