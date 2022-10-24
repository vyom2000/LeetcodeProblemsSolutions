#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
bool isEven(int a){ return (a%2 == 0);}
int fun(int a){ return ++a;}
int fun2(int a,int b){ return a + b;}
int main(){

    vector<int> v{11,2,3,24,5,2,7,2,9,10},arr{24,5,2,7,2,9,10};
    // find() function
    vector<int>::iterator it = find(v.begin(),v.end(),11);
    if(it != v.end()) cout<<"found"<<endl;
    else cout<<"Not Found"<<endl;

    // find_if()
    vector<int>::iterator it1 = find_if(v.begin(),v.end(),isEven);
    if(it1 != v.end()) cout<<"Even no found"<<endl;
    else cout<<"Not Found"<<endl;

    // unique() remove 1,2,2,3,3 => 1,2,3
    // unique_copy() remove 1,2,2,3,3 => 1,2,3
    
    // reverse() 
    reverse(v.begin(),v.end());
    // reverse_copy() 
    vector<int> v1;
    reverse_copy(v.begin(),v.end(),v1.begin());

    // transform unary
    vector<int> v3;
    vector<int>::iterator it2 = transform(v.begin(),v.end(),v3.begin(),fun);

    // transform binary
    vector<int>::iterator it6 = transform(v.begin(),v.end(),arr.begin(),v.begin(),fun2);

    // rotate()
    rotate(v.begin(),v1.begin()+3,v.end());
    
    // rotate_copy()
    vector<int> v4;
    rotate_copy(v.begin(),v.begin()+3,v.end(),v4.begin());

    // random_shuffle()
    random_shuffle(v.begin(),v.end());
    return 0;
}
