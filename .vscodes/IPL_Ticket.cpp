#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    int N,M;
	    cin>>N>>M;
	    if(N>M)
	    cout<<(N-M)<<endl;
	    else
	    cout<<"0"<<endl;
	}
}
