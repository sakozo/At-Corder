/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include <bits/stdc++.h>


using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

class BBattle {
public:
void solve(std::istream& cin, std::ostream& cout) {
    int a,b,c,d;
    int i = 0;
    string ans;
    cin >> a >> b >> c >>d;
    while(true){
        if(i%2==0){
            i++;
            c -= b;
            if(c <= 0){
                ans = "Yes";
                break;
            }
        }else{
            i++;
            a -= d;
            if(a <= 0){
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;
}
};


int main() {
	BBattle solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
