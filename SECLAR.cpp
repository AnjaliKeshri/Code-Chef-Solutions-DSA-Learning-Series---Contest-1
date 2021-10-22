#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;int b;int c;
	    cin>>a>>b>>c;
	   if(a>b){
	       if(b>c){
	           cout<<b<<endl;
	       }
            else if(a>c){
                cout<<c<<endl;
            }
            else{
                cout<<a<<endl;
            }
	   }
	   else if(b>a){
	       if(a>c){
	           cout<<a<<endl;
	       }
            else if(b>c){
                cout<<c<<endl;
            }
            else{
                cout<<b<<endl;
            }
	   }
	   
	return 0;
}
