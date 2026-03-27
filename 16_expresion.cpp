#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int evaluatepostfix(string expr){
    stack<int>st;
    char ch;
    for(int i=0;i<expr.length();i++){
        ch=expr[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }else{
            int value=st.top();
            st.pop();
            int value1=st.top();
            st.pop();
            switch(ch){
                case '+':
                st.push(value1+value);
                break;
                case '-':
                st.push(value1-value);
                break;
                case '*':
                st.push(value1*value);
                break;
                case '/':
                st.push(value1/value);
                break;
            }
        }
    }
    return st.top();
}
int main() {
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    int result = evaluatepostfix(postfix);

    cout << "Result = " << result << endl;

    return 0;
}