#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	  while(t--){
	
       int n,k;
	     cin>>n>>k;
	
	      if(k==0&&n%4==0)
	        cout<<"Off"<<"\n";
	
	      else if(k==0&&n!=4)
	        cout<<"On"<<"\n";
	
	      else if(k==1&&n%4==0)
	        cout<<"On"<<"\n";
	
	      else
	        cout<<"Ambiguous"<<"\n";
	
    }
	return 0;
}
