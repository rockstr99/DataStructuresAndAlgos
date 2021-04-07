#include<stdio.h>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int arr1[20], arr2[20];
    for (int i = 0; i< a ; i++){
        cin >> arr1[i];
    };


    for (int i = 0; i< b ; i++){
        cin >> arr2[i];
    }

    sortArrays(arr1, a);
    sortArrays(arr2, b);

    printArray(arr1, a);
    printArray(arr2, b);
}

int sortArrays(int arr[], int size)
{
    //bubble sort
    for(int i = 0 ; i < size-1; i++){
        for (int j= 0 ; j<size - i -1){
            if(arr[j] > arr[j+1]){
                int temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}


int printArray(int arr, int size)
{
    for(int i = 0; i < size; i++)
        {
            cout << arr[i];
        }


}
