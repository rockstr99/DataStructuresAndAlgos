#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{

    while (start < end ){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] =temp ;
        start++;
        end--;
    }
}

//Utility function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0 ; i<size; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

//Drivers function to test above functions
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    //to print original array
    printArray(arr, n);

    //function calling
    reverseArray(arr, 0, n-1);

    cout << "Reversed array is " << endl;

    //to print the reversed array
    printArray(arr, n);

    return 0;

}
