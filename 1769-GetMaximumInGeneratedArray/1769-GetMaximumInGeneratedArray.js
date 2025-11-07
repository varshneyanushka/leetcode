// Last updated: 07/11/2025, 19:56:50
/**
 * @param {number} n
 * @return {number}
 */
var getMaximumGenerated= function(n,memo={}) {
   
   memo[0]=0;
   memo[1]=1;
   let temp=0;
   for(var i=0;i<n+1;i++)
   {
      if(i%2===0)
      {
         memo[i]=memo[i/2];
      }
      else
      {
         memo[i]=memo[((i-1)/2) +1] +memo[((i-1)/2) ];
      }
      
      if(memo[i]>temp)
      {
         temp=memo[i];
      }

   }
   return temp;
};