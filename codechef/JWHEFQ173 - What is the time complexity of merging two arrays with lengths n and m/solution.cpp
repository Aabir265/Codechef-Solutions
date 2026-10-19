When merging two sorted arrays:

You need to compare elements from both arrays.
You continue this process until all elements from both arrays are merged into the new array.

You traverse each element of both arrays exactly once.
For each comparison, you either move the pointer of array A or array B forward.
Therefore, you perform a total of m+n comparisons and assignments.
Thus, the time complexity is O(m + n).