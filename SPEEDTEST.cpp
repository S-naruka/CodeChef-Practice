#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    float A,X,B,Y,C,D;
    cin>>A>>X>>B>>Y;
      
      C=A/X;
      D=B/Y;
      
        if(C>D)
          cout<<"Alice"<<"\n";
        else if(D>C)
          cout<<"Bob"<<"\n";
        else 
          cout<<"Equal"<<"\n";
}
	return 0;
}
