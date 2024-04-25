bool isPalindrome(string &s)
{
	int low=0;
	int high =s.size()-1;
	while(low<high){
		if(s[low] != s[high]){
			return false;
		}
		else{
			low++;
			high--;
		}
	}
	return true;

}
