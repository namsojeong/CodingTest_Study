#include<iostream>
#include<stack>
using namespace std;

int prec(char op);
string inToPost(string a);

int main() {
        string a;
        cin >> a;
        cout << inToPost(a) << endl;
    return 0;
}
int prec(char op) {//연산자의 우선순위 출력해주는 함수
    switch (op) {
    case'(':case')': return 0;
    case'+':case'-': return 1;
    case'*':case'/': return 2;
    }

}

string inToPost(string a) {
    stack<int>s;
    string postfix = ""; // 화면에 출력할 후위 표기식을 저장하는 변수
    char ch;
    for (int i = 0; i < a.size(); i++) {
        ch = a[i];
        switch (ch) {
        case'+':case'-':case'*':case'/':
            while (!s.empty() && prec(ch) <= prec(s.top())) { // 스택 안에 자기보다 우선순위가 높거나 같으면 낮은게 나올때까지 출력
                postfix += s.top();
                s.pop();
            }
            s.push(ch); // 스택이 비어있거나 스택 안의 연산자가 자기보다 우선순위가 낮을 때 스택에 들어가기
            break;
        case'(':
            s.push(ch);
            break;
        case')':
            while (s.top() != '(') {//왼쪽 괄호 만날때까지 출력
                postfix += s.top();
                s.pop();
            }
            s.pop();//왼쪽 괄호 제거
            break;
        default: // 피연산자 일때 바로 출력
            postfix += ch;
            break;
        }
    }
    while (!s.empty()) { // 문자열 스캔 다 끝나면 스택 안에 있는거 다 출력
        postfix += s.top();
        s.pop();
    }
    return postfix; // 최종 후위표기식 반환
}