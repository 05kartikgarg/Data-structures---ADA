#include<iostream>
using namespace std;

int product(int x,int y,int sum){
	if(x==0||y==0) return 0;
	if(y==1) return x;
	if(x==1) return y;
	return x+product(x,y-1,sum+x);
}


int main()
{
	int x,y;
	cout<<"enter the value of x"<<endl;
	cin>>x;
	cout<<"enter the value of y"<<endl;
	cin>>y;
	int r=product(x,y,0);
	cout<<x<<"*"<<y<<"="<<r<<endl;
}
