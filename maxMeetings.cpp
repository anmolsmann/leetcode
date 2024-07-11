#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    struct Meeting
    {
        int start;
        int end;
    };

    static bool compare(Meeting m1, Meeting m2)
    {
        return m1.end < m2.end;
    }

    int maxMeetings(int start[], int end[], int n)
    {
        vector<Meeting> meetings(n);

        for (int i = 0; i < n; i++)
        {
            meetings[i].start = start[i];
            meetings[i].end = end[i];
        }

        sort(meetings.begin(), meetings.end(), compare);

        int max = 1; // The first meeting can always be attended
        int lastMeetEnd = meetings[0].end;

        for (int i = 1; i < n; i++)
        {
            if (meetings[i].start > lastMeetEnd)
            {
                max++;
                lastMeetEnd = meetings[i].end;
            }
        }
        return max;
    }
};