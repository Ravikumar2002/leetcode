class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost;
        
        for(int i=0;i<matches.size();i++){
            int looser=matches[i][1];
            lost[looser]++;
        }
        
      vector<int>notLost;
        vector<int>lostonce;
        
        for(int i=0;i<matches.size();i++){
            int winner=matches[i][0];
            int looser=matches[i][1];
            
            if(lost.find(winner)==lost.end()){
               notLost.push_back(winner);
                lost[winner]=2;
            }
            
            if(lost[looser]==1){
                lostonce.push_back(looser);
            }
        }
        
        sort(begin(lostonce),end(lostonce));
          sort(begin(notLost),end(notLost));  
    
        return {notLost,lostonce};
        
    }
};