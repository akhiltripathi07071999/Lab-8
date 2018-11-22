// include library
#include<iostream>
using namespace std;

/*
 Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/

void input(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<< " Enter the "<< i+1 << " element of array:";
		cin>> arr[i];
	}
}


void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<< i+1 << " element of array:";
		cout<< arr[i];
		cout<< endl;
	}
}

void ar(int arr[],int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	for(int j=0;j<(size-1-i);j++)
	if(arr[j]>arr[j+1])
	{
		temp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=temp;
	}
}


int main()
{
	int n1;
	cout<< "enter size for the first aaray:";
	cin>> n1 ;
	int arr1[n1];
	input(arr1,n1);

	int n2;
	cout<<"enter size of the second aaray:";
	cin>>n2;
	int arr2[n2];
	input(arr2,n2);

	int newarray[n1+n2];
	for(int i=0;i<n1;i++){
	newarray[i]=arr1[i];
}
for (int i=n1;i<n1+n2;i++){
	newarray[i]=arr2[i-n1];
	}
	ar(newarray,n1+n2);
	print(newarray,n1+n2);
	cout<<"the minimum no. in the combined aaray is:"<<newarray[0]<<endl;
	cout<<"the maximum no. in the combined aaray is:"<<newarray[(n1+n2)-1]<<endl;

}
