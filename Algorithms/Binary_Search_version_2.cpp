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
//	 the least rank of the element which is no smaller than the target

int binSearch(vector<int> &nums, int target, int lo, int hi){
	while( lo < hi){
		int mi = ( hi + lo ) / 2;
		if(target <= nums[mi] )    // different from version_1 which is '<' here
			hi = mi;
		else
			lo = mi + 1;
	}
	return hi;     // different from version_1 which is '--lo' here ;
}

