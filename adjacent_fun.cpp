#include <bits/stdc++.h>

using namespace std;

int main()
{
    // adjacent_difference
    // work in reverse order (j - i)
    vector<int> v1{1, 2, 3, 4};
    int result1[10], result2[10];
    adjacent_difference(v1.begin(), v1.end(), result1);
    for (auto i : result1)
    {
        cout << i << " ";
    }
    cout << endl;

    adjacent_difference(v1.begin(), v1.end(), result2, multiplies<int>());
    for (auto i : result2)
    {
        cout << i << " ";
    }
    cout << endl;

    // adjacent_find
    vector<int>::iterator it = adjacent_find(v1.begin(), v1.end(), greater<int>());
    return 0;
}
