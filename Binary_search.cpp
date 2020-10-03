#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  //create an array
  
  int a[n];
  
  for(int i=0;i<n;i++) {
    cin >>a[i];
  }
  int key;
  cin >> key;
  
  int l=0,r=n-1;
  int mid = l+(r-l)/2;
  
  while(l<=r) {
  if(a[mid] == key) 
    cout << mid << endl;
  else if(a[mid] < key) 
    l = mid+1;
  else if(a[mid] > key)
    r = mid-1;
  }
  
  return 0;
}
