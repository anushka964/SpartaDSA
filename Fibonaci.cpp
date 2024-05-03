#include<iostream>
using namespace std;
#include<vector>
int Fibonaci(int n){
//base condition to terminate recursion
if(n==0 || n==1){
    return 1;
}
else {
    return Fibonaci(n-1)+ Fibonaci(n-2);
}
}

//TOP DOWN APPROACH
vector <int>store;
int FibNew(int n){
//base condition to terminate recursion
if(n==0 || n==1){
    return 1;
}
if(store[n] !=1){
    return store[n];
}

        int fibn= FibNew(n-1) + FibNew(n-2);
        store[n] = fibn;
    return fibn;

}
int main(){
cout<<Fibonaci(5)<<endl;

cout<<"optimized fib "<<FibNew(7);

}
