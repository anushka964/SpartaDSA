#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>st;

st.push(10);
st.push(20);
st.push(30);
st.push(50);
st.pop();

cout<<st.top(); //inbuilt function of stack in cpp

return 0;
}
