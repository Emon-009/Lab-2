#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[] = {1, 2, 2, 3, 4, 4, 5, 1};
    // int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
