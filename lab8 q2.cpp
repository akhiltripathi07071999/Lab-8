//including library
#include <iostream>
using namespace std;

//writing function to find mean
float mean(int a[], int b){
    	float s=0;
	for(int n=0;n<b;n++)
	s+=a[n];
	return s/b;
}

//for maximum element
int max(int a[], int b) {
	return a[b-1];
}

//for minimum element
int min(int a[], int b) {
	return a[0];
}

//for median of elements
float median(int a[],int b){
	if(b%2==0)
	return ((a[b/2-1]+a[b/2])/2);
	else
	return a[(b-1)/2];
}

int mostFrequent(int a[], int n){


    	// find the max frequency
    	int maxcount = 1, res = a[0], currentcount = 1;
    	for (int i = 1; i < n; i++) {
        	if (a[i] == a[i - 1])
           	currentcount++;
        	else {
            		if (currentcount > maxcount) {
               			maxcount = currentcount;
                		res = a[i - 1];
            		}
            	currentcount = 1;
        	}
	}

// If last element is most frequent
if (currentcount > maxcount){
        maxcount = currentcount;
        res = a[n - 1];
    	}

    return res;
}

//including main function
int main(){
	int x;
	cout <<" Please enter the number of terms to be in array "<<endl;

	//asking user for number of terms in arraY
	cin >>x;
	int arr[x];
	cout <<" Please enter the elements of the array"<<endl;

	//asking for elements in array
	for(int n=0;n<x;n++)
	cin >>arr[n];
	float meanofarray = mean(arr, x);
	for (int i=0;i<x-1;i++)
        for (int l=0;l<x-i-1;l++)
	if(arr[l]>arr[l+1]) {
		//this will arrange elements according to value
		arr[l]=arr[l]+arr[l+1];
		arr[l+1]=arr[l]-arr[l+1];
		arr[l]=arr[l]-arr[l+1];
	}
	int maximum = max(arr, x);
	int minimum = min(arr, x);
	float medianof = median(arr, x);
	int freq = mostFrequent(arr, x);
	cout <<"the mean of elements of array is "<<meanofarray<<endl;
	cout <<"the maximum element of array is "<<maximum<<endl;
	cout <<"the minimum elements of array is "<<minimum<<endl;
	cout <<"the median of array is "<<medianof<<endl;
	cout <<"the most frequent element is "<<freq<<endl;
return 0;
}
