class Solution {
public:       

void solve(string digits,vector<string>&result, string &temp, vector<string> &keypad, int index){

    if(index >= digits.length()){
        result.push_back(temp);
        return;
    }

    int number = digits[index] - '0';   // to convert string into integer and get value

    string value = keypad[number];

    for(int i=0; i< value.size(); i++){
        temp.push_back(value[i]);
        solve(digits, result, temp, keypad, index+1);
        temp.pop_back();
    }
    
}




vector<string> letterCombinations(string digits) {
if(digits.empty()){
    return {};
}

vector<string> keypad = {"", "", "abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> result;

string temp;
int index = 0;
solve(digits, result, temp, keypad, index);

return result;

    }
};