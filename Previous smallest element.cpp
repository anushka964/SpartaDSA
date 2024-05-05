#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftSmaller(int n, int a[]) {
        stack<int> st;
        vector<int> result;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top() >= a[i]) {
                st.pop();
            }
            if (st.empty()) {
                result.push_back(-1);
            } else {
                result.push_back(st.top());
            }
            st.push(a[i]);  // Push the element from the array, not the index
        }
        return result;
    }
};
int main() {
    Solution solution;
    int arr[] = {1, 6, 2};
    int n = sizeof(arr);
    vector<int> result = solution.leftSmaller(n, arr);
    
    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
