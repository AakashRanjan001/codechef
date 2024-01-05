
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    for(int i=(n>m?n:m);i>=1;i--)
	    {
	        if(n%i==0&&m%i==0)
	        {
	            cout<<(n/i)*(m/i)<<endl;
	            break;
	        }
	         
	    }

	}
	return 0;
}

