class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        std::set<pair<int,int>> s;
        s.insert({x,y});
        for(int i=0;i<path.length();i++){
            if(path[i]=='N'){
                y++;
                if(s.find({x,y})!=s.end()){
                    return true;
                }
                s.insert({x,y});
            } else if(path[i]=='E'){
                x++;
                if(s.find({x,y})!=s.end()){
                    return true;
                }
                s.insert({x,y});
            } else if(path[i]=='W'){
                x--;
                if(s.find({x,y})!=s.end()){
                    return true;
                }
                s.insert({x,y});
            } else {
                y--;
                if(s.find({x,y})!=s.end()){
                    return true;
                }
                s.insert({x,y});
            }
        }
        return false;
    }
};