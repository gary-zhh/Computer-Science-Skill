/************************************/
/*                                  */
/*   Bitwise AND of Numbers Range   */
/*                                  */
/************************************/

/* Given a range [m, n] where 0 <= m <= n <= 2147483647, 
 * return the bitwise AND of all numbers in this range, inclusive.
 * Example 1: Input: [5,7]	Output: 4
 * Example 2: Input: [0,1]  Output: 0
 */
// param:
//	 m : begin of array
//	 n : end of array
// return:
//	 bitwise AND of all numbers from begin to end

 int rangeBitwiseAnd(int m, int n) {
    int count = 1;
    while(m!=n && m*n!=0){
        m /=2;
        n /=2;
        count *= 2;
    }
    return count * m;
}
