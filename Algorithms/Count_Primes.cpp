/************************************/
/*                                  */
/*           Count_Primes           */
/*                                  */
/************************************/

// param:
//	 int n : non-negative number
// return:
//	 the number of prime numbers less than the non-negative number n
// 使用埃拉托色尼筛选法，从序列中删除2的倍数，接着是3的倍数，5的倍数...

int countPrimes(int n) {
    if(n<=2) return 0;
    bool v[n];
    memset(v,1,n);
    for(int i = 2;i*i<n;i++){
        if(v[i] == 1){
            int ii = i*i;  // 从i的平方开始删除，因为i(i-1),i(i-2)... i*2已经在先前被删除
            while(ii < n){
                v[ii] = 0;
                ii += i;
            }
        }
    }
    int cnt = 0;
    for(int i = 2;i<n;i++) if(v[i] == 1) ++cnt;
    return cnt;
}