#include <iostream>

using namespace std;

void build_ziggurat(int** &Arr, int arr_size){
    for (int i = 0; i < arr_size; i++){
        for (int j = 0; j < arr_size; j++){
            Arr[i][j] = min (min (arr_size - j, j + 1), min (arr_size - i, i + 1));
        };
    };
};

int main()
{
    int temp_size = 0;
    cin >> temp_size;
    int** Ziggurat = new int*[temp_size];
    for (int k = 0; k < temp_size; k++) Ziggurat[k] = new int [temp_size];
    build_ziggurat(Ziggurat, temp_size);
    for (int m = 0; m < temp_size; m++){
        for (int n = 0; n < temp_size; n++){
            cout << Ziggurat[m][n] << ' ';
        };
        cout << '\n';
    };
    return 0;
}
