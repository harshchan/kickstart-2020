#include<iostream>
#include<stdio.h>
using namespace std;

int findpeak()
{int count=0,n,i;
int arr[100];
cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=1;i<n-1;i++)
{
    if((arr[i-1]<arr[i])&&(arr[i]>arr[i+1]))
    {
        count++;
    }
}
    return count;
}

int main()
{
    int t,x,n=1;
    cin>>t;
    
    while(n<=t)
    {
        x=findpeak();
        cout<<"Case #"<<n<<": "<<x<<endl;
        n++;
    }
    return 0;
}
