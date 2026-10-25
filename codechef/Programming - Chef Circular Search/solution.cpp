#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> next_higher_peak(vector<int>& heights) {
    // Write you code here
    int n=heights.size();
    vector<int> v(n,-1);
    stack<int> st;
    for(int i=2*n-1;i>=0;i--){
        int id=i%n;
        while(!st.empty()&&heights[id]>=st.top())
        st.pop();
        
        if(i<n&&!st.empty())
        v[id]=st.top();
        
        st.push(heights[id]);
    }
    return v;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    
    cin >> n;  // Read the number of peaks from the user

    vector<int> heights(n);
   
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];  // Read each peak height from the user
    }

    vector<int> result = next_higher_peak(heights);  // Call the function to get the result

    // Print result
    
    for (int height : result) {
        cout << height << " ";  // Output each element in the result vector
    }
    cout << endl;
}
}