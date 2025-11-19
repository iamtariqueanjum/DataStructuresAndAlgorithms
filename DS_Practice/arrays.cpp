#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Printing the array elements:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Sum of the array elements: " << sum << endl;
    cout << "Minimum element in the array: " << min << endl;
    cout << "Maximum element in the array: " << max << endl;
    int i = 0, j = n - 1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reversed array elements:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
