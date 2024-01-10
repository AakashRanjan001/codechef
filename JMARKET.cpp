#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int x,arr[3];
	    cin>>x;
	    
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	    }
	  sort(arr,arr+3);
	  
	  cout<<(x-1)*arr[0] + arr[1]<<endl;
	  
	 
	}
 
}
