#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;

int main()
{
    int a, b;
    cin >> a >> b;
    
    //0 0が入力されたら終了
    while(!(a==0&&b==0)){
        int ans = 0;
        //重複なし全パターン
        for(int i=1; i<=a; i++){
            for(int j=i+1; j<=a; j++){
                for(int k=j+1; k<=a; k++){
                    if(i+j+k == b){
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
        
        //次の入力を受け取る
        cin >> a >> b;
    }
}
