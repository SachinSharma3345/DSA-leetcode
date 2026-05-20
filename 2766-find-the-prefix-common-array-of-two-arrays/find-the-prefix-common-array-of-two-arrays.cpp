class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> prefixCommonArray(n);

        for(int currInd = 0; currInd<n; currInd++){
            int cmnCnt = 0;
            for(int aInd =0; aInd<= currInd; aInd++){
                for(int bInd = 0; bInd<= currInd; bInd++){
                    if(A[aInd] == B[bInd]){
                        cmnCnt++;
                        break;
                    }
                }
            }
            prefixCommonArray[currInd] = cmnCnt;

        }
        return prefixCommonArray;
        
    }
};