#include <bits/stdc++.h>

using namespace std;
// modify the sort
bool comp(int a, int b)
{
    return a > b;
}
int main()
{

    vector<int> v{11, 2, 3, 24, 5, 60, 7, 8, 9, 10};
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // binary search
    cout << binary_search(v.begin(), v.end(), 5) << endl;

    // upper_bound => find location after element
    vector<int>::iterator it = upper_bound(v.begin(), v.end(), 5);
    cout << "Upper bound is at pos : " << it - v.begin() << endl;

    // lower_bound => find location before or equal element
    vector<int>::iterator it2 = lower_bound(v.begin(), v.end(), 5);
    cout << "Upper bound is at pos : " << it2 - v.begin() << endl;
    return 0;
}
