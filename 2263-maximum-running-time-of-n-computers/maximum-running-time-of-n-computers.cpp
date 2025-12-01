class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        sort(batteries.begin(), batteries.end());
        long sum =0;
        for(int p:batteries){
            sum+=p;
        }
        long s =1;
        long e = sum/n;

        while(s<e){
            long long mid = e-(e-s)/2;
            long long extra = 0;
            for(int b: batteries){
                extra+=min((long long )b, mid);

            }
            if(extra>= (long long )(n*mid)) s=mid;
            else e=mid-1;

        }
        return s;
    }
};