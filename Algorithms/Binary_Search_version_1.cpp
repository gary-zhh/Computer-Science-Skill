/************************************/
/*                                  */
/*           Binary Search          */
/*                                  */
/************************************/

// param:
//	 vector<int> &nums : vector to search
//	 int lo : begin of search
//   int hi : end of search
//   int target : target to find
// return:
//	 the largest rank of the element which is no larger than the target

int binSearch(vector<int> &nums, int target, int lo, int hi){
	while( lo < hi){
		int mi = ( hi + lo ) / 2;
		if(target < nums[mi] )
			hi = mi;
		else
			lo = mi + 1;
	}
	return --lo;
}


