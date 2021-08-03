#include <iostream>
#include <cmath>
using namespace std;

bool hello(int n){
    bool isPrime = true;
    for(int i = 2; i<n; i++){
        if (n%i == 0){
            isPrime = false;
        }
    }
    return isPrime;
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int fibonacchi_iter(int n){
    int F1 = 1;
    int F0 = 0;
    int res = 0;
    for(int i = 2; i <= n; i++){
        res = F1 + F0;
        F0 = F1;
        F1 = res;
    }
    return res;
}

void square(int x, int y){
    cin>>x>>y;

    int maximum = x*y;
    int** square_arr;
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            
        }
    }

    return;
}

int N2(int n){
    return pow(2, n) - 1;
}

int fact(int n){
    if (n > 1){
        return n * fact(n - 1);
    }
    else if(n == 1){
        return 1;
    }
    return 9;
}

int main(){
    /*bool working = true;
    for (int n = 0; working == true; n++){
        if(hello(n) != hello(N2(n))){
            cout << n << endl;
            return 0;
        }
    }*/

    cout<<fibonacchi_iter(4)<<endl;
}

