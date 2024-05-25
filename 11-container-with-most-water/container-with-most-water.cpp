class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int i=0;int j=n-1;
        int area=0;
        while(i<j){
        area=max(area,min(h[i],h[j])*(j-i));
        if(h[i]>h[j])j--;
        else if(h[i]<h[j])i++;
        else {
            j--;
            i++;
            }
        }
  
  return area;



    }
};