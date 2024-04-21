#include <stdio.h>
#include<iostream>
#include<stdlib.h>

#include <bits/stdc++.h>
using namespace std;



// Program to find largest number in array
int getMax(int* arr, int size) // int* is a pointer -> arr
{
    int max = arr[0];
    for (int i =1; i < size; i++){
        if (max < arr[i]){
            max =arr[i];
        }
    }
    return max;
}

//Program to find average of list number

int average(int* arr,int size){
    int avg = 0;
    for (int i=1; i<size; i++){
        avg += arr[i];
    
    }
    return avg /size;
}

//Program to Create Multi-Dimensional array

int MultiDim(int arr1[2][2], int rows , int cols){
    // int sizeArr1 = sizeof(arr1) / sizeof(int);
    // int sizeArr2 = sizeof(arr2) / sizeof(int);

   for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            std::cout<< arr1[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    return 0;
}

// program to find missing element

int findMissing(int arr[], int N){
    int i;
    int temp[N+1];
    for (int i = 0; i <=N; i++){
        temp[i] = 0;
    }

    for (i=0; i < N ; i++){
        temp[arr[i]-1] =1;
        
    }

    int ans;
    for(i=0; i <=N ; i++){

        if (temp[i]==0)
            ans= i+1;
    }
    return ans;
   
}


int main(){

int arr_int[5];
char arr_char[5];
for (int i =0; i < 5; i++){
    arr_int[i] = i;

}
int arr[10]
        = { 135, 165, 1, 16, 511, 65, 654, 654, 169, 4 };

int size = sizeof(arr);  // sizeof returns size of 32-bit integer or arr
// std::cout << size << " size";
// std::cout << average(arr,10)  << "   ";
int arr2d[2][2] = { 1, 2, 3, 4 };
// std::cout << MultiDim(arr2d,2,2)  << "   ";



int row0[4] = {1,2,3,4};
int row1[2] = {5,6};

int* jagged[2] = {row0,row1};
int Size [2] = {4,2},k=0;
int* ptr = jagged[0];   // pointer points towards the address where value is stored and return value 
ptr++;
std::cout << *ptr   << "   ";

int* djagged[2];

djagged[0] = new int[1];
djagged[1] = new int[3];
int arry[] = { 1, 3, 7, 5, 6, 2 };
int n = sizeof(arry) / sizeof(arry[0]);
cout << findMissing(arry, n) << " ";
// std::cout << findMissing(arry, n)   << "   ";

 

return 0;

}