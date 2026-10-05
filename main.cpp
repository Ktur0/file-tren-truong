#include <bits/stdc++.h>
using namespace std;

int sum_all_number(int n) {
    int total = 0;
    
    while(n > 0){
        total += n % 10;
        n /= 10;
    }

    return total;
}

int main(){

    int n;

    cin >> n;

    cout << sum_all_number(n);

    return 0;
}