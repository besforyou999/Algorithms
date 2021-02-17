Q : The K Weakest Row in a Matrix


Solution 1

make a set containing pairs of two integers
sort the pairs in the ascending order
return the index of the sorted array


Solution 2

1) Make a array of length == row
2) insert result of '(number of ones in row * row length ) + row index'
3) sort the array
4) change every element value to (element value)%row length to get the row index
5) return index 0 to k-1


Runtime : 1 ms , Your runtime beats 99.82% of java submissions
Memory Usage : 39.7 MB , Your memory usage beats 93.27% of java submissions

