class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        
        int n = s.size();
        vector<int> f(n), pre(n);
        f[0] = 1;
        
        for(int i = 0; i<minJump; i++){
            pre[i]=1;
        }
        for(int i = minJump; i<n; i++){
            int l = i-maxJump, r = i-minJump;
            if(s[i]== '0'){
                int total = pre[r]- (l<=0 ? 0: pre[l-1]);
                f[i] = (total!=0);
            }
            pre[i] = pre[i-1]+ f[i];
        }
        return f[n-1];
    }
};