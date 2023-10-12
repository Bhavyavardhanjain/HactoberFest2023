// Link of the question
// https://www.codechef.com/problems/ZEROSTRING
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t,n;
	string s;
	cin>>t;
	if(t>=1 && t<=2000)
	{
	    for(int i=0;i<t;i++)
	    {
	        cin>>n;
	        if(n>=1 && n<=pow(10,5))
	        {
	            cin>>s;
	            int st=0,ce=0,co=0;;
	            for(int j=0;j<n;j++)
	            {
	                if(s[j]%2==0)
	                {
	                    ce++;
	                }
	                else
	                {
	                    co++;
	                }
	            }
	            if(ce==0)
	            {
	                st=1;
	            }
	            else if(co==0)
	            {
	                st=0;
	            }
	            else if(ce>=co)
	            {
	                st=co;
	            }
	            else if(co>ce)
	            {
	                st=1+ce;
	            }
	            cout<<st<<"\n";
	            
	        }
	    }
	}
	return 0;
}
