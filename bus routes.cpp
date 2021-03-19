

#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int busday()
{
	lli n,d,i,l,r;
	 lli A[100];
	//vector<int>B;
	cin>>n>>d;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	if(n==1)
	{
		return d;
	}
	for(i=0;i<n-1;i++)
	{
		l=(d/A[0])*A[0];
		r=(d/A[n-i-1])*A[n-i-1];
		
		while(l>r)
		{
			l=l-A[0];
		}
	}
	return l;
}

int main()
{
    int t,x,n=1;
    cin>>t;
    
    while(n<=t)
    {
        x=busday();
        cout<<"Case #"<<n<<": "<<x<<endl;
        n++;
    }
    return 0;
}
