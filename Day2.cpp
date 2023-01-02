class Solution {
public:
    bool detectCapitalUse(string word) {
        
        
        bool yes1=true,yes2=true,yes3=true;
       
        int n=word.length();
        
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                continue;
            }
            else{
                yes1=false;
                break;
            }
        }
      
        
        for(int i=0;i<n;i++){
            if(word[i]>='a' && word[i]<='z'){
                continue;
            }
            else{
                yes2=false;
                break;
            }
        }
        
        if(word[0]<'A' && word[0]>'Z'){
            yes3=false;
        }
        for(int i=1;i<n;i++){
            if(word[i]>='a' && word[i]<='z'){

                continue;

            }

            else{

                yes3=false;

                break;

            }
        }
        
        
        return yes1 || yes2 || yes3;
    }
};