#include<iostream>
using namespace std;

int Factorial(int n){
//base condition to terminate recursion
if(n==0){
    return 1;
}
else{
    return n* Factorial(n-1);
}
}
int main(){
cout<<Factorial(5);

}
