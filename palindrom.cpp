#include <bits/stdc++.h>

using namespace std;

// bool solve(int num) {

// }
int main(){
    int num;
    cin>>num;
    int sum = 0,n = num;
    while (n>0)
    {
        /* code */
        int temp = n%10;
        sum = (sum*10) + temp;
        n = n/10;
    }

    if(num == sum){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
