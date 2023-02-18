
//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//// Function to check if a character is an operator
//bool isOperator(char c) {
//    if (c == '+' || c == '-' || c == '*' || c == '/')
//        return true;
//    return false;
//}
//
//// Function to check the precedence of an operator
//int precedence(char c) {
//    if (c == '+' || c == '-')
//        return 1;
//    else if (c == '*' || c == '/')
//        return 2;
//    return 0;
//}
//
//// Function to convert infix expression to postfix expression
//string infixToPostfix(string infix) {
//    stack<char> operatorStack;
//    string postfix = "";
//
//    for (int i = 0; i < infix.length(); i++) {
//        // If the current character is an operand, add it to the postfix expression
//        if (isalnum(infix[i]))
//            postfix += infix[i];
//        // If the current character is a left parenthesis, push it to the operator stack
//        else if (infix[i] == '(')
//            operatorStack.push(infix[i]);
//        // If the current character is a right parenthesis, pop operators from the operator stack and add them to the postfix expression
//        else if (infix[i] == ')') {
//            while (operatorStack.top() != '(') {
//                postfix += operatorStack.top();
//                operatorStack.pop();
//            }
//            operatorStack.pop();
//        }
//        // If the current character is an operator
//        else {
//            // Pop operators from the operator stack and add them to the postfix expression until we reach an operator with lower precedence or a left parenthesis
//            while (!operatorStack.empty() && precedence(infix[i]) <= precedence(operatorStack.top())) {
//                postfix += operatorStack.top();
//                operatorStack.pop();
//            }
//            // Push the current operator to the operator stack
//            operatorStack.push(infix[i]);
//        }
//    }
//    // Pop any remaining operators from the operator stack and add them to the postfix expression
//    while (!operatorStack.empty()) {
//        postfix += operatorStack.top();
//        operatorStack.pop();
//    }
//
//    return postfix;
//}
//
//int main() {
//    string infix;
//    cout << "Enter an infix expression: ";
//    cin >> infix;
//    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
//    return 0;
//}




//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int precedence(char op){
//    if(op == '+' || op == '-')
//        return 1;
//    if(op == '*' || op == '/')
//        return 2;
//    return 0;
//}
//
//string infixToPostfix(string expression){
//    stack<char> s;
//    s.push('N');
//    int l = expression.length();
//    string postfix = "";
//    for(int i = 0; i < l; i++){
//        if((expression[i] >= 'a' && expression[i] <= 'z') || (expression[i] >= 'A' && expression[i] <= 'Z'))
//            postfix += expression[i];
//        else if(expression[i] == '(')
//            s.push('(');
//        else if(expression[i] == ')'){
//            while(s.top() != 'N' && s.top() != '('){
//                char c = s.top();
//                s.pop();
//                postfix += c;
//            }
//            if(s.top() == '(')
//                s.pop();
//        }
//        else{
//            while(s.top() != 'N' && precedence(expression[i]) <= precedence(s.top())){
//                char c = s.top();
//                s.pop();
//                postfix += c;
//            }
//            s.push(expression[i]);
//        }
//    }
//    while(s.top() != 'N'){
//        char c = s.top();
//        s.pop();
//        postfix += c;
//    }
//    return postfix;
//}
//
//int main(){
//    string expression;
//    cout << "Enter the expression: ";
//    cin >> expression;
//    cout << "The postfix expression is: " << infixToPostfix(expression) << endl;
//    return 0;
//}




//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//bool isPalindrome(string str){
//    deque<char> d;
//    int l = str.length();
//    for(int i = 0; i < l; i++)
//        d.push_back(str[i]);
//    while(d.size() > 1){
//        if(d.front() != d.back())
//            return false;
//        d.pop_front();
//        d.pop_back();
//    }
//    return true;
//}
//
//int main(){
//    string str;
//    cout << "Enter a string: ";
//    cin >> str;
//    if(isPalindrome(str))
//        cout << "Yes" << endl;
//    else
//        cout << "No" << endl;
//    return 0;
//}



//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//bool checkPalindrome(string s){
//    deque<char> dq;
//    int length = s.length();
//    for(int i = 0; i < length; i++){
//        dq.push_back(s[i]);
//    }
//    while(dq.size() > 1){
//        if(dq.front() != dq.back()){
//            return false;
//        }
//        dq.pop_front();
//        dq.pop_back();
//    }
//    return true;
//}
//
//int main(){
//    string s;
//    cout << "Enter a string: ";
//    cin >> s;
//    if(checkPalindrome(s)){
//        cout << "Yes" << endl;
//    }
//    else{
//        cout << "No" << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <cstdlib>
//
//template <typename T>
//class Queue{
//    private:
//        T *queueArray;
//        int front;
//        int rear;
//        int capacity;
//    public:
//        Queue(int size){
//            queueArray = new T[size];
//            front = 0;
//            rear = -1;
//            capacity = size;
//        }
//
//        ~Queue(){
//            delete[] queueArray;
//        }
//
//        void enqueue(T value){
//            if(rear == capacity - 1){
//                cout << "Queue is full" << endl;
//                return;
//            }
//            rear++;
//            queueArray[rear] = value;
//        }
//
//        void dequeue(){
//            if(front > rear){
//                cout << "Queue is empty" << endl;
//                return;
//            }
//            front++;
//        }
//
//        T frontElement(){
//            if(front > rear){
//                cout << "Queue is empty" << endl;
//                exit(0);
//            }
//            return queueArray[front];
//        }
//
//        int size(){
//            return rear - front + 1;
//        }
//
//        bool isEmpty(){
//            return front > rear;
//        }
//};
//
//int main(){
//    Queue<int> q(5);
//    q.enqueue(1);
//    q.enqueue(2);
//    q.enqueue(3);
//    cout << "Size of queue: " << q.size() << endl;
//    cout << "Front element of queue: " << q.frontElement() << endl;
//    q.dequeue();
//    cout << "Front element after dequeue: " << q.frontElement() << endl;
//    return 0;
//}



//
//#include <iostream>
//
//template <typename T>
//class Node {
//    public:
//        T data;
//        Node *next;
//        Node(T data) {
//            this->data = data;
//            next = NULL;
//        }
//};
//
//template <typename T>
//class Stack {
//    private:
//        Node<T> *head;
//        int size;
//    public:
//        Stack() {
//            head = NULL;
//            size = 0;
//        }
//
//        void push(T data) {
//            Node<T> *temp = new Node<T>(data);
//            temp->next = head;
//            head = temp;
//            size++;
//        }
//
//        T pop() {
//            if (head == NULL) {
//                std::cout << "Stack is empty." << std::endl;
//                exit(0);
//            }
//            T data = head->data;
//            head = head->next;
//            size--;
//            return data;
//        }
//
//        T top() {
//            if (head == NULL) {
//                std::cout << "Stack is empty." << std::endl;
//                exit(0);
//            }
//            return head->data;
//        }
//
//        int getSize() {
//            return size;
//        }
//
//        bool isEmpty() {
//            return size == 0;
//        }
//};
//
//int main() {
//    Stack<int> s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    std::cout << "Size of stack: " << s.getSize() << std::endl;
//    std::cout << "Top of stack: " << s.top() << std::endl;
//    s.pop();
//    std::cout << "Top of stack after pop: " << s.top() << std::endl;
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//void deleteValue(list<int> &l, int value)
//{
//    int ans = 0;
//    for (auto it = l.begin(); it != l.end(); it++)
//    {
//        if (*it == value)
//        {
//            break;
//        }
//        ans++;
//    }
//    auto it = l.begin();
//    advance(it, ans);
//    l.erase(it);
//}
//
//
//int main()
//{
//    list<int> l;
//    l.push_back(7);
//    l.push_back(3);
//    l.push_back(8);
//    l.push_back(4);
//    l.push_back(5);
//    l.push_back(4);
//    deleteValue(l, 4);
//    for (auto it = l.begin(); it != l.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;
template <class T>
class node{
public:
    T data;
    node<T>* prv;
    node<T>* nxt;
};
template <class T>
class Deque{
public:
    node<T>* head;
    node<T>* tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T>* CreateNewNode(T value)
    {
        node<T>* newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //pushback O(1)
    void push_back(T value)
    {
        node<T>* newnode = CreateNewNode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

    //pushfront O(1)
    void push_front(T value)
    {
        node<T>* newnode = CreateNewNode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    //popback O(1)
    void pop_back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T>* a = tail;
        tail= tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }
    //popfront O(1)
    void pop_front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T>* a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }

    //front O(1)
    T front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }

    //back O(1)
    T back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return tail->data;
    }
};


int main()
{
    Deque<int>d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";
    Deque<char>d1;
    d1.push_back('a');
    d1.push_back('b');
    d1.push_back('c');

    cout<<"Back : "<<d1.back()<<" Front : "<<d1.front()<<"\n";

    d1.push_front('d');
    cout<<"Back : "<<d1.back()<<" Front : "<<d1.front()<<"\n";

    d1.pop_front();
    cout<<"Back : "<<d1.back()<<" Front : "<<d1.front()<<"\n";

    d1.pop_back();
    cout<<"Back : "<<d1.back()<<" Front : "<<d1.front()<<"\n";

    return 0;
}





