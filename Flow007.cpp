#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int p;
	cin>>p;
	for(int i=0;i<p;i++){
	    int n;
	    cin>>n;
	   int reverse = 0;
	   while(n>0){
	       int lastdigit=n%10;
	       reverse = reverse*10+lastdigit;
	       n=n/10;
	   }
	   cout<<reverse<<endl;
	}
	return 0;
}
