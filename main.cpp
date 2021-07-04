#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
    int temp,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {1,7,33,9,444,2,6,33,69,77,22,9,3,11,5,2,77,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
