#include<iostream>
using namespace std;

int sumOfNums(int n){
//base condition to terminate recursion
if(n==0){
    return 0;
}
else{
    return n+ sumOfNums(n-1);
}
}
int main(){
cout<<sumOfNums(5);

}

