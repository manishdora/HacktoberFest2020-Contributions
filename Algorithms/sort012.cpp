#include<iostream>
#include<algorithm>
using namespace std;

void sort012(int a[],int n,int key) {
  int low = mid = 0;
  int high = n-1;
  while(mid <= high) {
    if(a[mid] == 0) {
        swap(a[low++],a[mid++]);
    }
    else if(a[mid] == 1) mid++;
    
    else {
      swap(a[mid],a[high--]);
    }
}
int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i==0;i<n;i++) {
    cin >> a[i];
  }
  int key;
  cin >> key;
  sort012(a,n,key);
  
  for(int i=0;i<n;i++) {
    cout << a[i] << " " << endl;
 }
 
 return 0;
 }
