#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int ans = 0, len;
        cin >> len;
        string s;
        cin >> s;
        unordered_map<char, int> um;
        for (char &c : s)
        {
            c = tolower(c);
            if (um.count(c))
            {
                if (um[c] == 0)
                {
                    ans += 2;
                }
                else
                {
                    ans += 1;
                }
            }
            else
            {
                um[c]++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
