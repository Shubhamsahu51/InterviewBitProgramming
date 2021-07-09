int Solution::sqrt(int A) {
    long int low=0,high=A,ans=-1;
        while (low<=high) {
             long int mid=low+(high-low)/2;
            long int midsq=mid*mid;
            if (midsq>A)
                high=mid-1;
            else if (midsq==A)
                return mid;
            else {
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
}
