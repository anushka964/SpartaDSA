#include<iostream>
using namespace std;

int main(){
int rows;
cout<<"Enter rows: ";
cin>>rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {

     cout<<"* ";
    }
    // Print spaces.
        int spaces = 2 * (rows - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }

        // Print right side stars.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }

        cout << endl;
    }


 //printing the bottom part
   for (int i = rows; i>=0; i--) {
    for (int j = 0; j<=i; j++) {

     cout<<"* ";
    }

   // Print spaces.
        int spaces = 2 * (rows - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }

        // Print right side stars.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }

        cout << endl;
    }

  return 0;
}
