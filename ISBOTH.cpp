#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if( n%5== 0 && n% 11==0){
	    cout<<"BOTH"<<endl;
	}
	 else if (n%5==0 || n%11==0){
	    cout<<"ONE"<<endl;
	}
	else{
	    cout<<"NONE"<<endl;
	}
	return 0;
}