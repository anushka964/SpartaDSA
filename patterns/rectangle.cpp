#include<iostream>
using namespace std;
int main(){
int rows,cols;
cout<<"Enter number of rows: ";
cin>>rows;
cout<<"Enter number of cols: ";
cin>>cols;
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<"* ";
}
cout<<endl;
}
}
