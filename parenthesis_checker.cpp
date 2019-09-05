#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    stack<char>stk;
	    int flag=0;
	    for(int i=0;i<s.length();i++)
	    {

	        if((s[i]=='{') || (s[i]=='(') || (s[i]=='['))
	        {
	            stk.push(s[i]);
	        }
	        else
	        {

	           if(stk.empty())
	           {
	               flag=1;break;
	           }
	           else{
	           switch(s[i])
	           {
	               case '}':
	                      if(stk.top()=='{')
	                      {
	                          stk.pop();
	                      }
	                      else{
	                          flag=1;break;
	                      }
	                      break;
	               case ']':
	                      if(stk.top()=='[')
	                      {
	                          stk.pop();
	                      }
	                      else
	                      {
	                          flag=1;break;
	                      }
	                      break;
	               case ')':
	                     if(stk.top()=='(')
	                     {
	                         stk.pop();
	                     }
	                     else
	                     {
	                         flag=1;break;
	                     }
	                     break;
	           }}
	        }
	    }
	    if(stk.empty() && flag==0)
	    {
	        cout<<"balanced"<<"\n";
	    }
	    else
	    {
	        cout<<"not balanced"<<"\n";
	    }
	}
	return 0;
}
