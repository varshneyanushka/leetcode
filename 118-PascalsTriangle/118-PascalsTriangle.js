// Last updated: 07/11/2025, 19:58:30
/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) 
{
    
    let a = new Array(numRows); // create an empty array of length x
for (var i = 0; i < numRows; i++)
	 {
 		 a[i] = new Array(i); // make each element an array
	 }
   
    for(var i=0;i<numRows;i++)
    {a[i][0]=1;
        a[i][i]=1;
       
       for(var j=1;j<i;j++){
           
          a[i][j]=a[i-1][j]+a[i-1][j-1];
       }
    }
    console.log(a);
    return a;
    
};