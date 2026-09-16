class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // // ye socho ki overlap kab nhi kar skta ha
        // // jab edge left me ho
        // bool isleft = rec1[0]>=rec2[2];
        // //jab edge right me ho
        // bool isright = rec1[2]<=rec2[0];
        // // jab edge upar me ho
        // bool isupper = rec1[3]<=rec2[1];
        // //jab edge niche ho
        // bool islower = rec1[1]>=rec2[3];

        // return !(isleft||isright||isupper||islower);


        return (rec1[0] < rec2[2] && rec2[0] < rec1[2]) && 
               (rec1[1] < rec2[3] && rec2[1] < rec1[3]);
    }
};