#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin>> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        int pair_num;
        cin>>pair_num;

        if (!s.empty() && s.top() == pair_num){
            s.pop();
        }else{
            s.push(pair_num);
        }
    }

    cout << n - s.size() << endl;

    return 0;
}