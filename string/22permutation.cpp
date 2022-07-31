class Solution {
private:
    bool checkequal(int count1[26] , int count2[26])
    {
        for(int j=0; j<26;j++ )
        {
            if(count1[j]!=count2[j])
                return 0;
            
            
                
            
    }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        
        for(int i=0; i<s1.length(); i++){
            int index=s1[i]-'a';
            count1[index]++;
        
    }
        
        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};
        
        while(i<windowsize){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
            }
        
        
        if (checkequal(count1, count2))
            return 1;
        
        while(i<s2.length()){
            char newChar= s2[i];
            int index = newChar-'a';
            count2[index]--;
            
            char oldChar = s2[i-windowsize];
            index = oldChar - 'a';
            count2[index]--;
            
            if(checkequal(count1, count2))
                return 1;
            
        }
        return 0;
    }
};
//leetcode567
