// Last updated: 07/11/2025, 19:57:11
/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n,memo={}) {
    if(n===0)
    {
        return memo[n]=0;
       
    }
    if(n===1)
    {
        return memo[n]=1;
       
    }


     memo[n]=fib(n-1,memo)+fib(n-2,memo);
     return memo[n];

    
};