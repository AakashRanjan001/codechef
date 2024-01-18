#include <bits/stdc++.h>
using namespace std;

void answer(){
   
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    
   //in order to count the consonants between two vowels
   int count=0;
   int indicate=0;
    
    for(int i=0;i<n;i++){
      
        if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'){
            count=0;
        }
        else {
            count++;
        }
        if(count == 4){
            cout << "NO" << endl;
            break;
        }
    }
    if(count<4){
        cout<<"YES"<<endl;
    }
}

int main() {
	// your code goes here
int t;
cin>>t;

for(int i=0;i<t;i++){
    answer();
}
}
