#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    string ans;

    if(a == "Sunny"){
        ans = "Cloudy";
    }else if(a == "Cloudy"){
        ans = "Rainy";
    }else{
        ans = "Sunny";
    }
    cout << ans << endl;
}