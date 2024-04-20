#include <iostream>
using namespace std;

void invertedPyramid(int n) {
    // print spaces and asterisks
    for (int i = 0; i < n; i++) {
        // print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // print asterisks
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n ;
    cout<<"Enter number of rows: ";
    cin>>n; // Example height
    invertedPyramid(n);
    return 0;
}
