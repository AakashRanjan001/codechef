#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int arr[10];
	    int count1 =0;
	    int count2= 0;
	    for(int i=0;i<10;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<10;i++){
	    if(i%2==0){
	        if(arr[i]==1){
	            count1++;
	        }
	    }
	    else if(i%2!=0){
	        if(arr[i]==1){
	            count2++;
	        }
	    }
	    } 
	    if(count1==count2){
	        cout<<0<<endl;
	    }
	    else if(count1>count2){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	}

}
