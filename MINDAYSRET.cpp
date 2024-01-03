#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	int N,K;
	cin>>N>>K;
	
	if(N%K==0){
	    cout<<N/K<<endl;
	}
	else if(N%K!=0){
	    cout<<N/K +1<<endl;
	}
}
}
