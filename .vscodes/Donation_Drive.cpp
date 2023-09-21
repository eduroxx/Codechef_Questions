#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
    {
      int N,X;
      cin>>N>>X;
      if(N>X)
      cout<<N-X<<endl;
      else
      cout<<X-N<<endl;
    }
}
