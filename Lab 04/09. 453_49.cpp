/**CODE NAME : Helpful Maths
CODE NO : 339A
**/
#include<iostream>
using namespace std;
int main(){
	string a; cin>>a;
	int b=a.length();
	for(int i=0 ;i<b-1; i+=2)
	for(int j=i+2;j<b;j+=2)
	if(a[j]<a[i])
	swap(a[j],a[i]);
	cout<<"the result :"<<a;
	return 0;
}
