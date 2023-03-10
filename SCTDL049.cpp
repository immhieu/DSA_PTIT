#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int binarysearch(int a[],int n){
	int left = 0,right = n-1;
	int res = -1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] < 1){
			res = mid;
			left  = mid + 1;
		}
		else{
			right = mid - 1;
			
		}
	}
	return res + 1;
	
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n ;
		int a[n+1];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int  x = binarysearch(a,n);
		if(x != -1)	cout << x << endl;
		else cout  << "0" << endl;
	}
	return 0;
}