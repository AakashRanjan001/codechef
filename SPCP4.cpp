#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x,k;
	    cin>>n>>x>>k;
	    
	    int girls = (n-x)%k;
	    int boys = x%k;
	    
	  cout<<abs(boys - girls)<<endl;  
	}

}
