#include <vector>
#include <iostream>
using namespace std;

void RowSum(int arr[][3], int rows, int cols ){
    for(int i =0; i<rows;i++){
        int sum =0;
        for(int j =0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        cout<< sum<<endl;
    }

}
int main(){
    int arr[3][3] = {{3,4,5}, {8,9,10}, {11,23,45}};
    int rows = 3;
    int cols = 3;
    

    RowSum(arr, rows, cols);
    return 0;
    

}