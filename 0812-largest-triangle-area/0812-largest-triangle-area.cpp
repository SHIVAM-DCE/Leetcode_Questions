class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        // yaha Shoelace formula lagakar area nikalana hoga
        // area= 1/2(abs(x1(y2-y3)+x2(y3-y1)+x3(y1-y2)));

        double maxArea=INT_MIN;
        int n=points.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    //point1
                    double x1=points[i][0], y1=points[i][1];
                    //points 2
                    double x2=points[j][0], y2=points[j][1];
                    //points 3
                    double x3=points[k][0], y3=points[k][1];

                    double currentArea=0.5*(abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));

                    if(currentArea>maxArea){
                        maxArea=currentArea;
                    }
                }
            }
        }
        return maxArea;
    }
};