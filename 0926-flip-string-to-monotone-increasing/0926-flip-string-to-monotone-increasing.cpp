class Solution {
public:
    int minFlipsMonoIncr(string s){
       int flip=0;
       int ones=0;

       for(char c:s){
        if(c=='1'){
            ones++;
        }else{
            flip=min(flip+1,ones);
        }
       }
       return flip;
    }
};