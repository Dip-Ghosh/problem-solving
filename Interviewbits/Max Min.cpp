int Solution::solve(vector<int> &A) {
    
    long int max = A[0];
    long int min = A[0];
    int        i = 1;
    int size     = A.size()-1;
    
    while(i <= size)
    {
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
        i++;
    }
    return max + min;

}
