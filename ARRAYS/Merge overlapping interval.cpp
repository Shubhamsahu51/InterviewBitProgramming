/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool mycmp (Interval i1,Interval i2) {
    return (i1.start<i2.start);
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    vector<Interval>ans;
    int n=A.size();
    sort(A.begin(),A.end(),mycmp);
    
    Interval a;
    a.start=A[0].start;
    a.end=A[0].end;
    
    
    for(int i=1;i<n;++i){
        if(A[i].start<=a.end){
            a.end=max(a.end,A[i].end);
        }else{
            ans.push_back(a);
            a.start=A[i].start;
            a.end=A[i].end;
        }
    }
    
    if(ans.size()==0){                       //agar kabhi push back nahi hua as phele interval ne sab kch merge kar diya
        ans.push_back(a);
    }else{
        Interval last=ans.back();             //agar last interval jo merge nahi hua and push_back nahi ho paya
        if(a.start==last.start and a.end==last.end){
            // left as it is as last interval is present in answer
        }else{
            ans.push_back(a);
        }
    }
    
    return ans;
    

    return ans;
}
