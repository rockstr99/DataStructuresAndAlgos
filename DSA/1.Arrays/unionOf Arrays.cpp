#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void unionArrays(int arr1[],int arr2[], int size1, int size2)
{
    int i = 0;
    int j = 0;
    while(i< size1 && j< size2)
    {
        if(arr1[i] < arr2[j]){
            cout << arr1[i]<< " " ;
            i++;
        }
        else if(arr1[i] > arr2[j]){
            cout << arr2[j]<< " ";
            j++;
                    }
        else if(arr1[i] == arr2[j]){
            cout << arr1[i]<< " ";
            i++;
            j++;
        }


    }

    while( i < size1){

    cout << arr1[i]<< " ";
    i++;
    }
    while( j < size2){

    cout << arr2[j]<< " ";
    j++;
    }
}



void sortArrays(int arr[], int size)
{
    //bubble sort
    for(int i = 0 ; i < size-1; i++){
        for (int j= 0 ; j<size - i -1;j++){
            if(arr[j] > arr[j+1]){
                int temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int  printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        {
            cout << arr[i];
        }


}

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
cout  << "Sorted arrays are " << printArray(arr1, a) << "\n";
cout << printArray(arr2, b) << "\n";

unionArrays(arr1, arr2, a, b);

return 0;
}


