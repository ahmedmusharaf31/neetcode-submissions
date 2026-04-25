class Solution {
public:
    int maxArea(vector<int>& heights) {
        // int res=0;

        // for(int i=0;i<heights.size();i++){
        //     for(int j=i+1;j<heights.size();j++){
        //         int area=(j-i)*min(heights[i],heights[j]);
        //         res=max(res,area);
        //     }
        // }
        // return res;

        int res=0;
        int l=0, r=heights.size()-1;
        while(l<r){
            int area=(r-l)*min(heights[l],heights[r]);
            res=max(res,area);
            if(heights[l]<=heights[r]) l++;
            else if(heights[l]>heights[r]) r--;
        }
        return res;
    }
};
