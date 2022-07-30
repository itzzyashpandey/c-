char tolower(char ch){
    if(ch>='a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
   int st=0;
   int e=s.size()-1;
    
   

    while(st<=e) 
    {
        if(tolower(s[st]) != tolower(s[e]))
           {
        return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}
??code studio