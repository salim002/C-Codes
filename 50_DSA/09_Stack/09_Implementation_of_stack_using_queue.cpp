
#include<iostream>
#include<queue>
using namespace std;

class stack{
    int N;
    queue <int> q1;
    queue <int> q2;
    public:
    stack(){
        N=0;
    }
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1 = q2;
        queue<int> temp;
        q2 = temp; // making q2 empty everytime
    }

    void pop(){
        if(N==0){
            cout<<"Stack underflow"<<endl;
            return;
        }
        q1.pop();
        N--;
    }
    
    int top(){
        if(N==0){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return q1.front();
    }

    int size(){
        return N;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    
    return 0;
}