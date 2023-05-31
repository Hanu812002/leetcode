class UndergroundSystem {
public:
    UndergroundSystem() {
        
    }
    
  unordered_map<string,pair<double,int>>avg;  
  unordered_map<int,pair<string,int>>m;
  
    void checkIn(int id, string stationName, int t) {
        m[id].first=stationName;
        m[id].second=t;
    }
    
    void checkOut(int id, string stationName, int t) {    
        string s=m[id].first+"->"+stationName;
        int time=t-m[id].second;
        avg[s].first+=time;
        avg[s].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s=startStation + "->"+endStation;
     return avg[s].first/avg[s].second;
    }
    
};
