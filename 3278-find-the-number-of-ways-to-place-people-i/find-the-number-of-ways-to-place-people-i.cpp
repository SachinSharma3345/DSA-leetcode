class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) {
                    continue;
                }

                int xA = points[i][0];
                int yA = points[i][1];
                int xB = points[j][0];
                int yB = points[j][1];

                if (xA <= xB && yA >= yB) {
                    bool is_empty = true;

                    for (int k = 0; k < n; ++k) {
                        if (k == i || k == j) {
                            continue;
                        }

                        int xP = points[k][0];
                        int yP = points[k][1];

                        if (xP >= xA && xP <= xB && yP >= yB && yP <= yA) {
                            is_empty = false;
                            break;
                        }
                    }

                    if (is_empty) {
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};

