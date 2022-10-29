#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(string s)
{
    // string s = "1,2,3,4,6;5";
    vector<int> V;
    bool flag = true;
    string temp, t = "";
    int k;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            V.push_back(stoi(temp));
            temp.clear();
            continue;
        }
        if (s[i] == ';')
        {
            flag = false;
            continue;
        }
        if (flag)
        {
            temp.push_back(s[i]);
        }
        else if (!flag)
        {
            t += s[i];
        }
    }
    k = stoi(t);
    sort(V.begin(), V.end());
    int l = 0, r = V.size() - 1;
    // cout<<l<<r;
    // cout<<"heer";
    string ans = "";
    unordered_map<int, int> m;
    for (int &i : V)
    {
        cout << i << " ";
        m[i]++;
    }
    for (int &i : V)
    {
        if (m.count(k - i))
        {
            ans += to_string(i) + "," + to_string(k - i) + ";";
        }
    }
    if (ans.empty())
    {
        cout << "NULL";
    }
    else
    {
        ans.pop_back();
        cout << ans;
    }
}
int main()
{
    string line;
    while (getline(cin, line))
    {
        fun(line);
    }
}
