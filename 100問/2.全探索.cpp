#include <bits/stdc++.h>


using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

class B105 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        int n;
        int ans = 0;
        //string ans = "";
        cin >> n;

        //nに到達するまで1ずつ増やしてループを回す
        for(int j=1; j<=n; j++){
            //偶数なら次のループへ
            if(j%2==0) continue;
            int count = 0;

            //jより小さい数で割ってあまりを見ていく
            for(int i=1; i<=j; i++){
                if(j%i == 0){
                    count++;
                }
            }
            //約数が8この時
            if(count == 8){
                ans++;
            }
        }

        cout << ans << endl;
    }
};
