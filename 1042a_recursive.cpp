//recursive way

#include<iostream>
using namespace std;
int linerasearch(int a[] ,int n ,int item ,int i )
{
	
	    if(a[i]==item)
	    return i;
	    else
	    linerasearch(a,n,item,++i);
	    
	    if (i==n)
	    return -1;
	    
	    
	
	
}
int main()
{
	int a[100],i,n,item;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the numbers for array."<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the number to search"<<endl;
	cin>>item;
	int c=linerasearch(a,n,item,0);
	if(c==-1) cout<<"not found"<<endl;
	if(c>1) cout<<"element found"<<endl;
	
	return 0;
	
}
