class Solution {
public:
    using info = pair<long long, int>; // (ending time, room number)

    int countr0(__uint128_t& freeRoom) {
        unsigned long long mask = ULLONG_MAX;
        //countr_zero can handel 0, better than __builtin_ctzll
        int pos =countr_zero(static_cast<unsigned long long>(mask & freeRoom));
        if (pos!= 64) return pos;
        else return 64+countr_zero(static_cast<unsigned long long>(mask & (freeRoom>>64)));
    }

    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        vector<int> count(n, 0);
        __uint128_t freeRoom = (static_cast<__uint128_t>(1) << n)-1;
        priority_queue<info, vector<info>, greater<info>> used;

        for (auto& meet : meetings) {
            int room;
            while (!used.empty() && used.top().first <= meet[0]) {
                room=used.top().second;
                // set room-th bit 1
                freeRoom |= (static_cast<__uint128_t>(1) << room);

                used.pop();
            }
            long long start, m_time = meet[1] - meet[0];
            if (freeRoom == 0) {
                tie(start, room) = used.top();
                used.pop();
            } else {
                start=meet[0];
                // Set room-th bit 0
                room=countr0(freeRoom);
                freeRoom ^= (static_cast<__uint128_t>(1) << room);
            }
            count[room]++;
            used.push({start+m_time, room});
        }
        int idx = max_element(count.begin(), count.end())-count.begin();

        return idx;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
