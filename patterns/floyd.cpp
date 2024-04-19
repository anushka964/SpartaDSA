#include<iostream>
using namespace std;

int main(){
int rows,count=1;
cout<<"Enter rows: ";
cin>>rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {

     cout<<count <<" ";
     count++;
    }
    cout << endl;
  }
  return 0;
}
