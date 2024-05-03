#include<iostream>
using namespace std;
long long getTrappedWater(long long* arr, int n) {
 
 int left=0,right=n-1;
 long long lfmax = arr[left], rmax = arr[right];
    long long ans = 0;

 while(left<right){
     if(arr[left]<arr[right]){
         lfmax=max(lfmax,arr[left]);
         ans += lfmax-arr[left];
         left++;
     }
     else{
         rmax=max(rmax,arr[right]);
         ans +=rmax-arr[right];
         right--;

     }
 }
 return ans;
}
