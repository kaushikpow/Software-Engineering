/*

Leetcode: 678

Intuition : Two stacks. Open bracet stack and star stack.
https://www.youtube.com/watch?v=KuE_Cn3xhxI&ab_channel=TECHDOSE

TC:O(N)

*/

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open,star;
        
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='(')
                open.push(i);
            else if(s[i]=='*')
                star.push(i);
            else
            {
                if(!open.empty())
                    open.pop();
                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
        }
        
        
      
        while(!open.empty())
        {
            
            if(star.empty()) return false;
               
           else if(open.top()<star.top())
           {
               open.pop();
               star.pop();
           }
            
            else
                return false;
            
        }
        
        return true;
    }
};
