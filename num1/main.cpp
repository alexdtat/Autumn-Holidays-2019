#include <iostream>

using namespace std;

void delete_duplicates (int *Arr, int &arr_size){
    int new_size = 1;
    bool is_duplicate = 0;
    for (int i = 1; i < arr_size; i++){
        is_duplicate = 0;
        for (int j = i - 1; j > 0; j--){
            if (Arr[i] == Arr[j]) is_duplicate = 1;
        };
        if (!is_duplicate) new_size++;
    };

    int* NewArr = new int [new_size];
    NewArr [0] = Arr [0];
    int counter = 1;

    for (int i = 1; i < arr_size; i++){
        is_duplicate = 0;
        for (int j = i - 1; j > 0; j--){
            if (Arr[i] == Arr[j]) is_duplicate = 1;
        };
        if (!is_duplicate) NewArr [counter++] = Arr [i];
    };

    delete [] Arr;
    for (int n = 0; n < new_size; n++) Arr [n] = NewArr [n];
    arr_size = new_size;
}

int main()
{
    int temp_size = 0;
    cin >> temp_size;
    int temp [temp_size];
    for (int n = 0; n < temp_size; n++) cin >> temp[n];
    delete_duplicates (temp, temp_size);
    for (int m = 0; m < temp_size; m++) cout << temp[m] << ' ';
};
