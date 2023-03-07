// You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.

// Each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip. Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.

// You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum time required for all buses to complete at least totalTrips trips.

class Solution {
public:
    long long tripsDone(vector<int>& time, long long availTime)
    {
        long long totalTrips = 0;
        for(int i = 0; i < time.size(); i++)
            totalTrips += (availTime / time[i]);
        return totalTrips; 
    }

    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        long long minTime = 1, maxTime = 1e14;
        while(minTime < maxTime)
        {
            long long midTime = (minTime + maxTime) / 2;
            if(tripsDone(time , midTime) >= totalTrips)
                maxTime = midTime;
            else
                minTime = midTime + 1;
        }
        return minTime;
    }
};