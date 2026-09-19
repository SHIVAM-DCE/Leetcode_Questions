class Solution {
public:
    int lowerBound(vector<int>& arr, int x) {
        int s = 0;
        int e = arr.size() - 1;
        int ans = arr.size(); 
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] >= x) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }

    vector<int> binarySearchmethod(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int h = lowerBound(arr, x);
        int l = h - 1;
        
        // Pointers window ke bahar na jayein aur size exactly k maintain rahe
        while (k > 0) {
            if (l < 0) {
                h++; // Left boundary khatam, right element extend karo
            } else if (h >= n) {
                l--; // Right boundary khatam, left element extend karo
            } else if (x - arr[l] <= arr[h] - x) {
                l--; // Left wala element paas hai ya tie hai (a < b rule)
            } else {
                h++; // Right wala element paas hai
            }
            k--;
        }
        
        // Loop khatam hone par hamari safe aur correct window (l + 1) se lekar (h - 1) tak hai
        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }




    vector<int> twoPointermethod(vector<int>& arr, int k, int x) {
        int l=0;
        int h=arr.size()-1;
        while(h-k>=l){
            if(x-arr[l]>arr[h]-x){
                l++;
            }else{
                h--;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+l+k);
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //method 1
        return twoPointermethod(arr,k,x);


        //method 2
        // return binarySearchmethod(arr,k,x);
    }
};