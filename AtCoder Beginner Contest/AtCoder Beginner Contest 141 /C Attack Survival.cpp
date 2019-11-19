#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> points(N, K-Q);
    //配列
    vector<int> vec(Q);
    
    for (int i = 0; i < Q; i++) {
        cin >> vec.at(i);
    }

    for(int i = 0;i<Q; i++){
        points.at(vec.at(i)-1) += 1;
    }

    for(int i = 0; i < N ; i ++){
        if(points.at(i) > 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    

}
