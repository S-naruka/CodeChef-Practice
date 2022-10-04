#include <iostream>
using namespace std;

int main() {
	int t;
	  cin>>t;
	  while(t--)
	{
	    int x,a,c;
	      cin>>x;
	      c=0;
        
        while(x>0){
      
	        a=x%10;
	        x=x/10;
	        
          if(a==4)
          c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
