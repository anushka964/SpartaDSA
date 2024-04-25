#include <bits/stdc++.h> 
vector<int> twoSum(vector<int> a, int target) 
{
	vector<int>ans;
	int low,high;
	low=0;
	high=a.size()-1;
	while(low<high){
	if(a[low]+a[high]>target){
		high--;
	}
	else if (a[low]+a[high]<target){
		low++;
	}
	else{
      ans.push_back(low);
      ans.push_back(high);
      return ans;
	}
}
}
