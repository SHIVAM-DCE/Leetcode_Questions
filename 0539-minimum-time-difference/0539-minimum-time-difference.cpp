// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
//         //Step 1: string ko hour aur min me convert kro minutes me stoi k help se and use store kro vector me
//         vector<int>minutes;
//         for(int i=0;i<timePoints.size();i++){
//             string current=timePoints[i];
//             int hour=stoi(current.substr(0,2));
//             int min=stoi(current.substr(3,2));
//             int totalTime=hour*60+min;
//             minutes.push_back(totalTime);
//         }
//         // step 2: sorting kro taki complexity reduce krke hm two pointer approach lga ske
//         sort(minutes.begin(),minutes.end());
//         //step 3: now find minimum minutes difference between any two time-points in the list.
//         int minTime=INT_MAX;
//         for(int i=0;i<minutes.size()-1;i++){
//             if(abs(minutes[i]-minutes[i+1])<minTime){
//                 minTime=abs(minutes[i]-minutes[i+1]);
//             }
//         }

//         // step 4: calculate first and last location value diffrence and comparing
//         int lastDiff=(minutes[0]+1440)-minutes[minutes.size()-1];
//         minTime=min(minTime,lastDiff);
//         return minTime;

        
//     }
// };
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;

        // Convert HH:MM into minutes
        for (string s : timePoints) {
            int hour = stoi(s.substr(0, 2));
            int minute = stoi(s.substr(3, 2));

            time.push_back(hour * 60 + minute);
        }

        sort(time.begin(), time.end());

        int ans = INT_MAX;

        for (int i = 1; i < time.size(); i++) {
            ans = min(ans, time[i] - time[i - 1]);
        }

        ans = min(ans, 1440 - time.back() + time.front());

        return ans;
    }
};