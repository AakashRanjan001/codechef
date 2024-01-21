#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    
	    int n; cin>>n;
	    int arr[2*n];
	    for(int i=0;i<2*n;i++){
	       cin>>arr[i]; 
	    }
	    map<int,int>mpp;
	    for(int i=0;i<2*n;i++){
	        mpp[arr[i]]++;
	    }
	    bool ans =true;
	    for(auto it :mpp){
	        
	        if(it.second>=3){
	            ans = false;
	        }
	       
	    }   
	    if(ans){
	        cout<<"Yes"<<endl;
	    }
	    
	    else{
	        cout<<"No"<<endl;
	    }
	    
	    
	    
	    
	}

}
