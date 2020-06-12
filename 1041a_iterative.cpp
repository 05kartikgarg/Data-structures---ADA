//x*y iterative

#include<iostream>
using namespace std;
int main()
{
	int sum=0,x,y;
	cout<<"enter the value of x"<<endl;
	cin>>x;
	cout<<"enter the value of y"<<endl;
	cin>>y;
	for(int i=1;i<=y;i++){
		sum=sum+x;
	}
	cout<<x<<"*"<<y<<"="<<sum<<endl;
	return 0;
}
