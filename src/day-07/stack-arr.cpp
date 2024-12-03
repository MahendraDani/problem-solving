// Implementation of a stack using arrays in cpp
#include<iostream>
using namespace std;

class MyStack {
  private :
    int *arr;
    int size;
    int top;

  public:
    MyStack(int size){
      arr = new int[size];
      top = -1;
    }

    ~MyStack(){
      delete[] arr;
    }

    void push (int val){
      top++;
      if(top == size){
        cout << "Stack overflow! Can't push: " << val << "\n";
        return ;
      }

      arr[top++] = val;
      cout << "Value pushed to top: " << val << "\n";
    }

    int pop(){
      top--;
      if(top < 0){
        cout << "Stack underflow! Stack is empty\n";
        return -1;
      }

      return arr[top--];
    }

    int peek(){
      top--;
      if(top < 0){
        cout << "Stack is empty\n";
        return -1;
      }
      
      cout << "Peek: " << arr[top] << "\n";
      return arr[top];
    }
};

int main(){
  MyStack st(5);
  st.push(15);
  st.push(44);
  st.peek();
  return 0;
}
