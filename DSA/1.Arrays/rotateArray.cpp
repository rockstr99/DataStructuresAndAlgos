#include<iostream>

using namespace std;


rotateArray(int a[], int size){

int temp = a[size-1];

for(int i= size -1; i > 0; i--){
    a[i] = a[i-1];


}
a[0] = temp;
}

int main(){

int size;
cin >> size;

int a[size];  // === 1, 2, 3, 4, 5 => 5, 1, 2, 3, 4

for (int i = 0 ; i < size; i++){
    cin >> a[i];
}

rotateArray(a, size);

//printing the rotated array

for(int i = 0; i< size; i++){
    cout << a[i] << "\t";
}

return 0;
}
