#include <iostream>
using namespace std;
    float avgNumInArray(int numbers[], int size){
        float sum = 0;
        for(int i = 0; i < size; i++){
            sum += (float)numbers[i];
            }
        return sum/size;
}

int main() {
int n;
    cin >> n;
    int the_numbers[n];
    for(int i = 0; i < n; i++) {
        cin >> the_numbers[i];
    }
        cout << avgNumInArray(the_numbers, n);

}
void sortArray(int arr[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                      arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }