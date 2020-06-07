#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    int r[2];
    r[0] = __gcd(a, b);
    r[1] = a / __gcd(a, b) * b;
    return r[0];
}

int main(){
    int a, b;
    cin >> a >> b;
    int ans = gcd(a,b);
    cout << ans << endl << endl;
}
