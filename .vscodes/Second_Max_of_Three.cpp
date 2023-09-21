#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int N;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
	  int A,B,C;
	  cin>>A>>B>>C;
	  int a[3]= {A,B,C};
	  sort(a, a+3);
	  cout<<a[1]<<endl;
	}
}

