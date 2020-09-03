#include <cstdio>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;

int memo[300];

int fibo(int q) {
    if(!memo[q]) {
        if(q<=2) {
            memo[q]=1;
        } else {
            memo[q]=(fibo(q-1)+fibo(q-2))%10009;
        }
    }
    return memo[q];
}

int main() {
    int N;
    cin >> N;
    cout << fibo(N);
}