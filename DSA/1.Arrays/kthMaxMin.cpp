#include<iostream>
using namespace std;
int kthSmall(int
             arr[], int n){
    int temp;
    for(int i = 0; i<n-1 ; i++){
        for (int j = 0; j < n-1 ; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                }

        }
    }
    return 0;

}

int main(){
    int n, k;
    cin>>  n;
    int a[50];
    for (int i = 0; i< n; i++){
        cin >> a[i];
    };
    cin >>k;

    kthSmall(a, n);

    cout << a[k-1];
return 0;
}
