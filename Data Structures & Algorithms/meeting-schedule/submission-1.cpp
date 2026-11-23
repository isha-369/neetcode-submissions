/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    static bool compare(Interval &a, Interval &b){
        return a.start<b.start;
        // return b<a;
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        if(intervals.size()==0) return true;
        for(int i=0;i<intervals.size()-1;i++){
            Interval a = intervals[i];
            Interval b = intervals[i+1];
            if(a.end>b.start) return false;
        }
        return true;
    }
};
