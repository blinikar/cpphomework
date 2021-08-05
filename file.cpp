#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//INPUT DATA
const int n = 4;
int matrix[n][n] = {
        {0, 2, 3, 1},
        {2, 0, 4, 8},
        {3, 4, 0, 5},
        {1, 8, 5, 0}
    };
//INPUT DATA END
vector <int> arr(n-1);
int vectorLenght = 0;
vector <vector<int>> ways;

void vectors_working(){
    for(int i = 1; i<n+1; i++){
        arr[i-1] = i;
    }

    vector <int>temp(n+1);
    sort(arr.begin(), arr.end());
    do{
        temp[0] = 0;//Starts and ends in 0 city
        for(int i = 1; i < n; i++){
            temp[i] = arr[i-1];
        }
        temp[n] = 0;
        ways.push_back(temp);                
        vectorLenght++;
    }while(next_permutation(arr.begin(), arr.end()));
    return;
}

void search_the_best_path(){
    vector <int>temp(n+1);
    int minPath = INT16_MAX;
    for (int i = 0; i<vectorLenght; i++){
        temp = ways[i];
        int tempPath = 0;
        for(int i = 0; i < n+2; i++){
            int a = temp[i];
            int b = temp[i+1];
            tempPath += matrix[a][b];
        }
        if(tempPath < minPath && minPath != 0){
            minPath = tempPath;
        }
    }

    cout<<minPath<<endl;
    return;
}

int main(){
    vectors_working();
    search_the_best_path();
    return 0;
}