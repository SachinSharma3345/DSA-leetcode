
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minFinish = INT_MAX;

        int n = landStartTime.size();
        int m = waterStartTime.size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {

                int startLand = landStartTime[i];
                int endLand = startLand + landDuration[i];

                int startWater = max(endLand, waterStartTime[j]);
                int endWater = startWater + waterDuration[j];

                minFinish = min(minFinish, endWater);

                int startWater2 = waterStartTime[j];
                int endWater2 = startWater2 + waterDuration[j];

                int startLand2 = max(endWater2, landStartTime[i]);
                int endLand2 = startLand2 + landDuration[i];

                minFinish = min(minFinish, endLand2);
            }
        }

        return minFinish;
    }
};
