//Stack is a Last in First out (LIFO) Data Structure. Top is very important in Stack.
//Stack has these three Properties which runs at O(1) Time Complexity : 1)push(val)- it pushes val to the top of the stack. 2)pop()- it pops the top value from the Stack. 3)top()- it returns the top value of the Stack.
//Important Property of Stack is How we track the top element.
/* Stack using Vector
1)push stack : v.push_back(val);
2)top stack : return v[v.size()-1];
3)pop stack : v.pop_back();
*/
#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> v;

public:
    void push(int val){//O(1)
        v.push_back(val);
    }
    void pop(){ //O(1)
        v.pop_back();
    }
    int top(){ //O(1)
        return v[v.size()-1];
    }
    bool empty(){
        return v.size() == 0;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; //30 20 10
    return 0;
}

//Now Stack using a Linked List
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Stack{
    list<int> ll;

public:
    void push(int val){//O(1)
        ll.push_front(val);
    }
    void pop(){ //O(1)
        ll.pop_front();
    }
    int top(){ //O(1)
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; //30 20 10
    return 0;
}

//Now the thing what we are going to do on Coding Platforms is:
#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; //30 20 10
    return 0;
}
