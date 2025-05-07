#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    
    while(cases--){
        int students, highest, current, result = INT_MIN;
        cin >> students >> current;
        highest = current;
        
        for(int i = 1; i < students; i++){
            cin >> current;
            result = max(result, highest - current);
            highest = max(highest, current);
        }
        
        cout << result <<endl;
    }
}