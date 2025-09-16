class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> st;
        
        for(int num : nums){
            st.push_back(num);
            
            while(st.size() >= 2){
                int a = st.back(); st.pop_back();
                int b = st.back(); st.pop_back();
                
                long long g = gcd(a, b);
                if(g>1){
                    long long l = (1LL * a / g) * b; 
                    st.push_back((int)l);
                }
                else{
                    st.push_back(b);
                    st.push_back(a);
                    break;
                }
            }
        }
        
        return st;
    }
};
