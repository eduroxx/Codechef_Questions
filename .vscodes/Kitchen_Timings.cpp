#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	int X,Y;
	cin>>X>>Y;
	if(Y>X)
	cout<<Y-X<<endl;
	else
	cout<<X-Y<<endl;
	}
}
