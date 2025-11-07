// Last updated: 07/11/2025, 19:58:52
/**
 * @param {number} n
 * @return {number}
 */
const memo = {};
const getWays = (n) => {
    if(n in memo) return memo[n]
    if(n === 0) return 1;
    if(n<0) return 0;
    memo[n] = getWays(n-1) + getWays(n-2);
    return memo[n];
}
var climbStairs = function(n) {
    return getWays(n);
};