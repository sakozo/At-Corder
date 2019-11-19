#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;

    long long ans = 0;

    vector<int> vec(N);    
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    int j = 0;
    while(j<M){
        vec.at(N-1) /= 2;
        sort(vec.begin(), vec.end());
        j++;
    }

    for (int i = 0; i < N; i++) {
        ans += vec.at(i);
    }

    cout << ans << endl;
}