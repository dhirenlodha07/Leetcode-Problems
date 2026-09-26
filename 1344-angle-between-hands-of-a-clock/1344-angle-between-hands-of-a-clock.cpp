class Solution {
public:
    double angleClock(int hour, int minutes) {
    double hour_angle = (hour%12)*30.0 + minutes*0.5;
    double minutes_angle = minutes*6.0;
    double ans = abs(hour_angle-minutes_angle);
    return min(ans,360.0-ans);    
    }
};