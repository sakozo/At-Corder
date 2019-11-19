#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;

    string ans = "Yes";

    for(int i =0; i<a.length(); i++){
        if(i%2 == 0){
            if(a.at(i) != 'R' && a.at(i) != 'U' && a.at(i) != 'D'){
                ans = "No";
                break;
            }
        }
        if(i%2 == 1){
            if(a.at(i) != 'L' && a.at(i) != 'U' && a.at(i) != 'D'){
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;
}

