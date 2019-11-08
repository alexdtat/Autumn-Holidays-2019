#include <iostream>

using namespace std;

void dig_trench(int** &Arr, int arr_size){
    int axis = 0;
    for (int i = 0; i < arr_size; i++){
        axis = i;
        for (int j = axis; j < arr_size; j++){
            Arr[i][j] = j - axis;
            Arr[j][i] = j - axis;
        };
    };
};

int main()
{
    int temp_size = 0;
    cin >> temp_size;
    int** Trench = new int*[temp_size];
    for (int k = 0; k < temp_size; k++) Trench[k] = new int [temp_size];
    dig_trench(Trench, temp_size);
    for (int m = 0; m < temp_size; m++){
        for (int n = 0; n < temp_size; n++){
            cout << Trench[m][n] << ' ';
        };
        cout << '\n';
    };
    return 0;
}
