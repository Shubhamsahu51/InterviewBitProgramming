int Solution::solve(vector<int> &A, int B) 
{
     int n1=A.size();
     int low=0,high=n1-1;
     int mid= 0;
     if (n1==1) {
         if (A[0]>B)
             return 0;
         else 
             return 1;
     }
     
    while ( low <= high ) 
    {
        mid=(high-low)/2+low;
        
        if (A[mid] > B)
        {
            high=mid-1;
        }
        
        else if (A[mid] < B ) 
        {
            if (A[mid+1] > B)
                return mid+1;
            else
                low=mid+1;
        }
        
        else 
        {
            if (mid==n1-1 or (A[mid]!=A[mid+1]) )
                return mid+1;
            else
                low=mid+1;
                
            
        }
    }
    return (mid+1);
}
