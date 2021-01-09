class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size()==1) return true;
        int i=0;
        while(arr[i]<arr[i+1])
        {
            i++;
        }
        if(i==0)  return false;
        int peak=i;
        while(i<arr.size()-1)
        {
            if(arr[i]>arr[i+1])
                i++;
            else
                return false;
        }
        if(peak==i) return false;
        
        return true;
    }
};