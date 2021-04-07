#include<iostream>

using namespace std;

void rearange(int arr[], int n){
int j = 0;
for (int i = 0; i< n; i++){
    if(arr[i]<0){
        if(i != j){
            swap(arr[i], arr[j]);
        }
        j++;
    }
}
}

void printArray(int arr[], int n){
for (int i = 0; i<n; i++){
    cout << arr[i];
}
}

int main(){
int arr[30];

int n;
cin >> n;


for (int i= 0 ; i < n; i++){
cin >> arr[i];}

rearange(arr, n);
printArray(arr, n);
return 0;
}
