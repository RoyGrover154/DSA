class Solution {

public:
    bool isValid(string s) {
        stack<char> box;

        for(char last : s){
            if(!box.empty()){
                char first = box.top();
                if(isPair(first, last)){
                    box.pop();
                    continue;
                }
            }
            box.push(last);
        }
        return box.empty();
    }

 private:
    bool isPair(char first, char last){
        return (first =='(' && last == ')')||
                (first == '{' && last == '}')||
                (first == '[' && last == ']');
    }   
};