#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,count=0;
	cin>>n;
	cin>>k;
	int arr1[n];
	for(int i = 0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i =0;i<n;i++){
		if(arr1[i]>=arr1[k-1] && arr1[i]>0){
			count++;
		}
	}
	cout<<count;
	return 0;
}
