/************************************/
/*                                  */
/*  Kth Largest Element in an Array */
/*                                  */
/************************************/

// param:
//	 vector<int> v : vector to find
//   int lo : start rank
//   int hi : end rank
// return:
//	 the rank of k whose left neibours are larger than v[k] and right neibours are smaller than it
int partion(vector<int>&v,int lo,int hi){
    int mi = (lo+hi)/2;
    int i = v[lo],j = v[hi],k = v[mi];
	
    if(k>i && k<j || k>j&&k<i) swap(v[lo],v[mi]);        //this condition added can reduce running time from 12ms to 4ms
    else if(j>k && j<i || j>i && j<k) swap(v[hi],v[lo]);//
	
    int elem = v[lo];
    int start = lo,end = lo+1;
    while(end <= hi){
        if(v[end] >= elem){
            swap(v[end++],v[++start]);
        }
        else{
            end++;
        }
    }
    swap(v[start],v[lo]);
    return start;       
}

// param:
//	 vector<int> v : vector to find
//   int lo : start rank
//   int hi : end rank
//   int k : the Kth
// return:
//   the Kth biggest number of vector nums
int func(vector<int>& nums,int lo,int hi, int k){
    int p = partion(nums,lo,hi);
    if( p-lo == k ) return nums[p];
    else if(p-lo > k)
        return func(nums,lo,p-1,k);
    else return func(nums,p+1,hi,k-(p-lo)-1);
}

// main function
// param:
//	 vector<int> v : vector to find
//   int k : the Kth
// return:
//   the Kth biggest number of vector nums
int findKthLargest(vector<int>& nums, int k) {
    return func(nums,0,nums.size()-1,k-1);
}

