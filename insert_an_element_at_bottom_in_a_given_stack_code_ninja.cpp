#include <bits/stdc++.h>

#define pb             push_back
#define fill(x, y)     memset(x, y, sizeof(x))
#define all(x)         (x).begin(), (x).end()
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define IO	       { ios_base::sync_with_stdio(false); cin.tie(0); }
#define read(x)	       freopen(x, "r", stdin)
#define write(x)       freopen(x, "w", stdout)
using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<int>    vi;

void solve(stack<int> &s, int ele)
{
    // Base Call
    if (s.empty())
    {
        s.push(ele);
        return;
    }

    int element = s.top();
    s.pop();

    // Recursion Call
    solve(s, ele);

    s.push(element);
}

int main() {
    stack<int> mystack;
    int size; cin >> size;
    for(int i{0}; i < size; i++)
    {
        int num; cin >> num;
        mystack.push(num);
    }
    int x; cin >> x;
    solve(mystack, x);

    for(int i{0}; i <= size; i++)
    {
        int num = mystack.top();
        cout << num << " ";
        mystack.pop();
    }

}