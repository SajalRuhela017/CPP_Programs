// Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

// Answers within 10-5 of the actual value will be accepted as correct.

class Solution {
public:
    double angleClock(int hour, int minutes)
    {
        double angleHour = (hour % 12) * 30.0 + (minutes * 0.5);
        double angleMinute = minutes * 6;
        double ans = abs(angleMinute - angleHour);
        return min(ans, 360.0 - ans);
    }
};