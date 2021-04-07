#include<iostream>

using namespace std;

kadanes(int a[], int n){

    int max_so_far = INT_MIN;
    int max_ending_here = 0;
for (int i= 0; i < n; i++){
 max_ending_here = max_ending_here + a[i];
 if(max_ending_here > max_so_far){
    max_so_far = max_ending_here;
 }
 else if(max_ending_here < 0){
    max_ending_here = 0;
 }

}
return max_so_far;
}


int main(){
int size;

cin >> size;
int a[size];
for (int i = 0; i< size; i++){
    cin >> a[i];
}

int max_sum = kadanes(a, size);

cout << max_sum;
return 0;}
