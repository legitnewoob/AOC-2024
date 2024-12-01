#include<bits/stdc++.h>
using namespace std;

void testcase() {
    vector<int> a , b;

    int turn = 0;

    int x; 

    while(cin >> x) {

        if(turn == 0) {
            a.push_back(x);
        }
        else {
            b.push_back(x);
        }

        turn ^= 1;
    }   

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    int sum = 0;

    map<int , int> m; for(auto &i : b) m[i]++;

    for(int i = 0 ; i < a.size() ; i++) {
        sum += (m[a[i]] * a[i]);
    }

    cout << sum << "\n";
}


int main() {

    ios_base::sync_with_stdio(false); cin.tie(nullptr);

     #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif

    int tc = 1;
    //cin >> tc;
    while(tc--) testcase();

    return 0;
}
