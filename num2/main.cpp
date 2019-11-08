#include <iostream>
#include <cmath>

using namespace std;

bool is_prime (int number){
    if (!number) return 0;
    if (number == 1) return 0;
    for (int k = 2; k <= sqrt (number); k++) if (!(number%k)) return 0;
    return 1;
}

void delete_annoying_primes (int *Arr, int &arr_size){
    int new_size = 1;
    bool is_duplicate = 0;
    for (int i = 1; i < arr_size; i++){
        is_duplicate = 0;
        if (is_prime(Arr[i])){
            for (int j = 0; j < arr_size; j++){
                if ((Arr[i] == Arr[j]) && (j != i)) is_duplicate = 1;
            };
        };
        if (!is_duplicate) new_size++;
    };

    int* NewArr = new int [new_size];
    NewArr [0] = Arr [0];
    int counter = 1;

    for (int i = 1; i < arr_size; i++){
        is_duplicate = 0;
        if (is_prime(Arr[i])){
            for (int j = 0; j < arr_size; j++){
                if ((Arr[i] == Arr[j]) && (j != i)) is_duplicate = 1;
            };
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
    delete_annoying_primes (temp, temp_size);
    for (int m = 0; m < temp_size; m++) cout << temp[m] << ' ';
};
