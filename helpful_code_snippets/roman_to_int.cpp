class Solution {
public:
    int romanToInt(string s) {
        
        //defining a map for storing the symbols 
        //since this is a key value pair prg hence map is the best option
        map<char, int> val;
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;
        //--------------------- see the declaration of a map is very easy
        //--------------------- it just works as a python dictionary.
        
        
        int length = s.length();
        int result = val[s[length - 1]];//initialized to the last character
        
        for(int i=length-2; i>=0; i--){
            
            
            //this checks the succeeding char and one preceding it
            //if its less then subtract it 
            //otherwise just add it
            if(val[s[i]]>=val[s[i+1]]){
                result +=val[s[i]];
            }
            else{
                result -=val[s[i]];
            }
        }
        return result;
        
    }
};
