class Solution {
public:
    string trafficSignal(int timer) {

        string red = "Red";
        string green = "Green";
        string orange = "Orange";
        string invalid = "Invalid";

        if (timer == 30) {
            return orange;
        }
        if (timer > 30 && timer <= 90) {
            return red;
        }

        if (timer == 0) {
            return green;
        }
        return invalid;
    }
};