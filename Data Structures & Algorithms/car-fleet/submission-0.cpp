#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n == 0) return 0;

        vector<pair<int, int>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }
        sort(cars.rbegin(), cars.rend()); 

        int fleetCount = 0;
        double maxTime = 0.0; // Arrival time of the lead car in the current fleet

        for (int i = 0; i < n; i++) {
            double finalTime = (double)(target - cars[i].first) / cars[i].second;

            if (finalTime > maxTime) {
                fleetCount++;
                maxTime = finalTime;
            }
        }

        return fleetCount;
    }
};