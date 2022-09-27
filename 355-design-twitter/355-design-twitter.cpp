class Twitter {
public:
    priority_queue<vector<int>>q;
    map<int,set<int>>m;
    int c=0;
    Twitter() {
        m.clear();
        c=0;
        q=priority_queue<vector<int>>();
    }
    
    void postTweet(int userId, int tweetId) {
        q.push({c++,tweetId,userId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>v;
        priority_queue<vector<int>>p=q;
        int n=0;
        while(n<10 && !p.empty()){
            auto t=p.top();
            p.pop();
            if(t[2]==userId || m[userId].count(t[2])){
                v.push_back(t[1]);
                n++;
            }
            
        }
        return v;
    }
    
    void follow(int followerId, int followeeId) {
        m[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        m[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */