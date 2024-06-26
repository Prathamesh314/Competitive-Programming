class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx and sy==fy){
            if(t==1) return false;
            return true;
        }
        int m = max(abs(sx-fx),abs(sy-fy));
        if(m<=t) return true;
        return false;
    }
};
