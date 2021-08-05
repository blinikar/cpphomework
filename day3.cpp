#include <iostream>
using namespace std;

void vector_io(){
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {8, 9, 0}
    };
    int vector[3] = {5, 6, 3};
    int result[3] = {1, 1, 1};

    for(int i = 0; i < 3; i++){
        int temp = 0;
        for(int j = 0; j < 3; j++){
            temp += matrix[i][j]*vector[j];             
        }
        result[i] = temp;
    }

    for (int i = 0; i < 3; i++){
        cout<<result[i]<<endl;
    }
}

int main(){
    vector_io();

    return 0;
}