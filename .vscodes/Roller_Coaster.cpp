#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    int X,H;
	    cin>>X>>H;
	    if(X<H)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
}
