#include<iostream>

using namespace std;

void sort0_1_2(int arr[], int n){

int count1, count2, count0;
count1 = count2 = count0 = 0;
for (int i = 0; i<n;i++){
    if(arr[i] == 0){
        count0 +=1;
    }
    else if(arr[i] == 1){
        count1 +=1;
    }
    else if(arr[i] == 2){
        count2 +=1;
    };
};
int i = 0;
while(count0){
    arr[i] = 0;
    i += 1;
    count0-= 1;

}
while(count1){
    arr[i] = 1;
    i += 1;
    count1 -= 1;

}while(count2){
    arr[i] = 2;
    i += 1;
    count2-=1;

}

}

int main(){
int arr[50];
int n;
cin >> n;

for (int i = 0; i <n; i++){
    cin >> arr[i];
};

sort0_1_2(arr, n);


for(int i = 0; i < n; i++){
cout << arr[i];
}
return 0;
}
