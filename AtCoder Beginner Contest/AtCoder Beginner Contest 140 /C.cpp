#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int ans =0;

    vector<int> A(N);

    vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> B.at(i);
    }

    A.at(0) = B.at(0);

    for(int i =0; i<N-2;i++){

        if(B.at(i) <= B.at(i+1)){
            A.at(i+1) = B.at(i);
        }else{
            A.at(i+1) = B.at(i+1);
        }
    }

    A.at(N-1) = B.at(N-2);

    for(int i=0;i<N;i++){
        ans += A.at(i);
    }
    cout << ans << endl;


}