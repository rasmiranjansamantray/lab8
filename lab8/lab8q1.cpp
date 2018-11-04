#include<iostream>
using namespace std;

//defining the function
//defining array
//return the sum
int fx(int arr[],int n){	
	int sum =0;
		for(int i=0; i< n; i++){
			sum=sum+ arr[i];
			}
		return sum;
}
int main(){
	
	int n;
	cout<< "How many elements do you want to take in array?"<< endl;
	cin>>n;
	int arr[n-1];
	
	cout<< "Eneter the elements of array"<<endl;
		for(int i=0; i< n; i++){
			cin >> arr[i];
	}
	int r=fx(arr,n);
	cout<< "The sum of the elements of the array is"<< r <<endl;
	return 0;
}		
	

