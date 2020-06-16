class Solution {
public:
    bool isNumber(string s) {
        int sL = s.size();
        int last = -1;
        bool startedNum = false;
        bool seenE = false;
        bool seenDec = false;
        bool startedTrail = false;
        for(int i = 0; i < sL; i++){
            int c = s.at(i);
            if(startedTrail && c != 32){
                return false;
            }
            if(c == 43 || c == 45){ // + or -
                if(startedNum){
                    if(last != 101){
                        return false;
                    }
                }
                startedNum = true;
            }else if(c == 101){ // e
                if(seenE){
                    return false;
                }
                if((last > 57 || last < 48) && last != 46){
                    return false;
                }
                if(i + 1 >= sL){
                    return false;
                }else{
                    int next = s.at(i+1);
                    if(next == 43 || next == 45){
                        if(i + 2 >= sL){
                            return false;
                        }else{
                            int next2 = s.at(i+2);
                            if(next2 > 57 || next2 < 48){
                                return false;
                            }
                        }
                    }else if(next > 57 || next < 48){
                        return false;
                    }
                }
                seenE = true;
            }else if(c == 46){ // .
                if(seenDec || seenE){
                    return false;
                }
                if(last > 57 || last < 48){
                    if(i + 1 >= sL){
                        return false;
                    }
                    int next = s.at(i+1);
                    if(next > 57 || next < 48){
                        return false;
                    }
                }
                startedNum = true;
                seenDec = true;
            }else if(c >= 48 && c <= 57){ // 0-9
                startedNum = true;
            }else if(c == 32){ // SPACE
                if(startedNum){
                    startedTrail = true;
                }
            }else{
                return false;
            }
            last = c;
        }
        if(!startedNum){
            return false;
        }
        return true;
    }
};