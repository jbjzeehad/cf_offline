#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a=0;
	cin>>n;
	while(n>0){
		// count++;

		a=a+(n%10);
		n=n/10;
		 count++;
	}
	cout<<count<<endl;
}
