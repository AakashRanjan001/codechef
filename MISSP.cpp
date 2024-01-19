#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here

	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    int count =0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<endl;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>=2){
	          count = count^arr[i];  
	        }
	       
	    }
	    
	    cout<<count<<endl;
	}

}
