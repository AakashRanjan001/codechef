#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int N,L,X;
	    cin>>N>>L>>X;
	    int cost = 0;
	    if((N-L)<=L){
	         cost = cost +(N-L)*X;
	    }
	       else if (L<N-L){
	            cost = cost+ X*L;
	       }
	        
	    cout<<cost<<endl;
	}
	

}
