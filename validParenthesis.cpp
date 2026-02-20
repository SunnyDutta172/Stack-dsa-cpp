//Valid Parenthesis is the 20th Problem in the leetcode.
//'{}' is a Valid Parenthesis whereas '{]' is not a Valid Parenthesis.
//Open Brackets must be closed in the Same Order.
//Every Close Bracket has a corresponding open bracket of the same type means the string has equal number of opening brackets and equal number of closing brackets.
//Last Opening Bracket => first closing Bracket.
bool isValid(string str){
  stack<char> st;
  for(int i=0;i<str.size();i++){
    if(str[i] == '(' || str[i] == '{' || str[i] == '['){
        st.push(str[i]);
    }else {
      if(st.size() == 0){
          return false;
      }
      if((st.top() == '(' && str[i] == ')') || (st.top() == '{' && str[i] == '}') || (st.top() == '[' && str[i] == ']')){
          st.pop();
      } else {
          return false;
      }
    }
  }
  return st.size() == 0;
}
        
