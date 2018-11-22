//including library
#include<iostream>
using namespace std;

//for maximum
int kmax(int a[], int b, int c){
	return a[b-c];
}

//for minimum
int kmin(int a[], int b, int c){
	return a[c-1];
}

//including the main function
int main(){
	int x;
	//asking user to define the array
	cout <<" Please enter the number of terms to be in array "<<endl;
	cin >>x;
	//asking for elemets in array
	int arr[x];
	cout <<" Please enter the numbers"<<endl;
	for(int n=0;n<x;n++)
	cin >>arr[n];

	for (int i=0;i<x-1;i++)
        for (int l=0;l<x-i-1;l++)
	//this will arrange elements according to value
	if(arr[l]>arr[l+1]) {
		arr[l]=arr[l]+arr[l+1];
		arr[l+1]=arr[l]-arr[l+1];
		arr[l]=arr[l]-arr[l+1];}
	//asking the user
	cout <<" Please enter the k as in to find the kth largest and smallest"<<endl;
	int k;
	cin >>k;
	int max = kmax(arr, x, k);
	int min = kmin(arr, x, k);
	//displaying kth maximum
	cout <<" kth maximum is "<< max <<endl;

	//displaying kth minimum
	cout <<" kth minimum is "<< min <<endl;
	return 0;
}
