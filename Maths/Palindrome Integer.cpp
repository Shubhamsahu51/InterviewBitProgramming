int Solution::isPalindrome(int A) {
    if (A<0)
    return 0;
    int rev=0;
    int temp=A;
    while (temp!=0) {
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    if (A==rev)
     return true;
    return false;
}
