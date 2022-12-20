#include<iostream>
#include<stack>

using namespace std;

class Stack {
    //properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        if(top >=0 )
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if( top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Stack st(5);
    st.push(22);
    st.push(34);
    st.push(43);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

if (st.isEmpty())
{
    cout<<"stack is empty mere dost"<<endl;

}
else
{
    cout<<"stack is not empty"<<endl;
}



/*
    //create a stack
    stack<int> s;

    //puh opretaion

    s.push(2);
    s.push(3);

    s.pop();

    cout<<"printing top element " << s.top()<< endl;
    if (s.empty())
    {
        cout<<"satck is empty"<<endl;

    }
    else{
        cout<<"stack is not empty"<< endl;
    }
    return 0;
    cout<<"size of stck"<<s.size()<< endl;
    */

}