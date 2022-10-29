#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    // 776 a+bc
    getline(cin, line);
    string num, pattern;
    bool sp = 0;
    for (int i = 0; i < line.size(); i++)
    {

        if (line[i] == ' ')
        {
            sp = 1;
            continue;
        }
        if (sp)
            pattern.push_back(line[i]);
        else
            num.push_back(line[i]);
    }

    int ans = 0;
    string num1, num2;

    char op = '0';
    for (int i = 0; i < pattern.size(); i++)
    {
        if (pattern[i] == '+' || pattern[i] == '-')
        {
            op = pattern[i];
            continue;
        }

        if (op == '0')
            num1.push_back(num[i]);
        else
            num2.push_back(num[i - 1]);
    }
    if (op == '+')
        ans = stoi(num1) + stoi(num2);
    else
        ans = stoi(num1) - stoi(num2);
    cout << ans << endl;
}
