#include<iostream>

using namespace std;

struct Pair{
int min;
int max;
};

struct Pair getMinMax(int arr[], int n){
struct Pair minmax;
int i;

//if there is only one element in the array
//then return it as both min and max
if(n == 1){
    minmax.min = minmax.max = arr[0];
    return minmax;
}

//if there are more than one elements
//then initialize min and max
if(arr[0] > arr[1]){
    minmax.min = arr[1];
    minmax.max = arr[0];
}
else{
    minmax.min = arr[0];
    minmax.max = arr[1];
}

for(i = 0; i<n ; i++){
    if(arr[i]> minmax.max){
        minmax.max = arr[i];
    }else if(arr[i] < minmax.min){
    minmax.min = arr[i];}
}
return minmax;

}

int main(){
int arr[] = { 1000, 11, 445, 1, 330 , 3000};
int arr_size = 6;

struct Pair minmax = getMinMax(arr, arr_size);

cout << "Minimum element is " << minmax.min << endl;
cout << "Maximum element is " << minmax.max << endl;

return 0 ;
}
