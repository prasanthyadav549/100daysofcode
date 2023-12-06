class Solution {
public:
    double findMedianSortedArrays(vector<int>& v, vector<int>& arr) {
          if(v.size()>arr.size()) return findMedianSortedArrays(arr,v);
            int n=v.size(),m=arr.size(),cnt=(n+m+1)/2,l=0,h=n;
            while(l<=h) {
                  int mid=(l+h)/2;
                int l1=INT_MIN,r1=INT_MIN,l2=INT_MAX,r2=INT_MAX;
                  if(mid>0) l1=v[mid-1];
                  if(mid<n) l2=v[mid];
                  int rem=cnt-mid;
                 if(rem>0) r1=arr[rem-1];
                 if(rem<m) r2=arr[rem];
                // check whether the partition is valid or not
                if(l1<=r2 && l2>=r1) {
                      if((n+m) &1) {
                           return (double)max(l1,r1);
                      }
                    else {
                         return (double)(max(l1,r1)+min(l2,r2))/2.0;
                    }
                }
                else if(l1>r2) h=mid-1;
                  else l=mid+1;
                
            }
          
        return 0;
            
         
        
    }
};