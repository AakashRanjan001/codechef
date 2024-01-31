#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n,k;
	    cin>>n>>k;   //n is the no.of cookie bars
	                 //k is the number of children
	    int arr[n];
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>=k){
	            v.push_back(arr[i]%k);
	        }
	        
	    }
	    sort(v.begin(),v.end());
	 
	    if(v.size()==0){
	        cout<<-1<<endl;
	    }
	    
	    else{
	        cout<<v.front()<<endl;
	    }
	    
	}

}
