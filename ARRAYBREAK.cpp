#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	 
	 while(t--){
	     int n,c=0;
	     cin>>n;
	     
	     int a[n];
	      for(int i=0;i<n;i++)
	        cin>>a[i];
	      
	      for(int i=0;i<n;i++){
	        if(a[i]%2==0)
	         c++;
	      }
	      
	      if(n!=c)
	         cout<<c<<endl;
	      else
           cout<<0<<endl;
	 }
	return 0;
}
