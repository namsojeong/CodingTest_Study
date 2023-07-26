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
int prec(char op) {//�������� �켱���� ������ִ� �Լ�
    switch (op) {
    case'(':case')': return 0;
    case'+':case'-': return 1;
    case'*':case'/': return 2;
    }

}

string inToPost(string a) {
    stack<int>s;
    string postfix = ""; // ȭ�鿡 ����� ���� ǥ����� �����ϴ� ����
    char ch;
    for (int i = 0; i < a.size(); i++) {
        ch = a[i];
        switch (ch) {
        case'+':case'-':case'*':case'/':
            while (!s.empty() && prec(ch) <= prec(s.top())) { // ���� �ȿ� �ڱ⺸�� �켱������ ���ų� ������ ������ ���ö����� ���
                postfix += s.top();
                s.pop();
            }
            s.push(ch); // ������ ����ְų� ���� ���� �����ڰ� �ڱ⺸�� �켱������ ���� �� ���ÿ� ����
            break;
        case'(':
            s.push(ch);
            break;
        case')':
            while (s.top() != '(') {//���� ��ȣ ���������� ���
                postfix += s.top();
                s.pop();
            }
            s.pop();//���� ��ȣ ����
            break;
        default: // �ǿ����� �϶� �ٷ� ���
            postfix += ch;
            break;
        }
    }
    while (!s.empty()) { // ���ڿ� ��ĵ �� ������ ���� �ȿ� �ִ°� �� ���
        postfix += s.top();
        s.pop();
    }
    return postfix; // ���� ����ǥ��� ��ȯ
}