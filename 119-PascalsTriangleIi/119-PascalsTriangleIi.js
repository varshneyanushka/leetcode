// Last updated: 07/11/2025, 19:58:28
/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(numRows) {
    numRows=numRows +1;
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
  
    return a[numRows-1];
    
};