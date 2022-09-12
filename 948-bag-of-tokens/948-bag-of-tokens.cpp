class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0;
        int j=tokens.size()-1;
        int ans=0;
        sort(tokens.begin(),tokens.end());
        int score=0;
        while(i<=j){
            cout<<power<<endl;
            if(tokens[i]<=power){
                score+=1;
                power-=tokens[i];
                i++;
            }
            else if(score>0){
                if(i==j)
                    break;
                score-=1;
                power+=tokens[j];
                j--;
            }
            else
                break;
        }
        return score;
    }
};