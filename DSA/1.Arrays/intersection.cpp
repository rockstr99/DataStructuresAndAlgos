#include<iostream>
using namespace std;


int findIntersection(int a[] , int b[],int size1,int size2){
for(int i = 0; i< size1; i++){
    for (int j = 0; j<size2; j++){
        if(a[i] == b[j])
            cout << a[i];
    }
}

}

int main()
{
    int a[20], b[20];
    int size1, size2;

    cin >> size1 >> size2;
    for(int i = 0; i< size1; i++){
        cin >> a[i];
    }

    for(int i = 0; i< size2; i++){
        cin >> b[i];
    }

    findIntersection(a, b, size1, size2);
}
