#include <bits/stdc++.h>
using namespace std;
void printPattern(int n) {

	for(int i=0;i<n;i++){
		//print spaces
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}

}
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
printPattern(n);
return 0;
}
