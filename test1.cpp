#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1), odd(n+1), even(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) even[i] = even[i-1] + 1, odd[i] = odd[i-1];
            else even[i] = even[i-1], odd[i] = odd[i-1] + 1;
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int num_odd = odd[r] - odd[l-1];
            int num_even = even[r] - even[l-1];
            int len = r-l+1;
            if (len % 2 == 0 && num_odd == len/2 && num_even == len/2) cout << "NO\n";
            else if (len % 2 == 1 && num_odd == len/2 && num_even == len/2) {
                if (k % 2 == 0) cout << "YES\n";
                else cout << "NO\n";
            }
            else if (len % 2 ==
