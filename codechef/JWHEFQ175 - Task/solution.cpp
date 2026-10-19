function MERGE-SORT(A, left, right)
    if left < right
        middle = (left + right) / 2
        MERGE-SORT(A, left, middle)
        MERGE-SORT(A, middle + 1, right)
        MERGE(A, left, middle, right)

function MERGE(A, left, middle, right)
    // // Merge the subarrays A[left..middle] and A[middle+1..right] into a single sorted subarray.