#include<iostream>
using namespace std;

class Stack{
    public:
    int index=0, tab[100];

    void push(int num){
        tab[index] = num;
        index++;
    }

    void pop(){
        index--;
    }

    bool empty(){
        return index==0;
    }

    int size(){
        return index;
    }

    int value(){
        if(!this->empty()){
            return tab[index-1];
        }
    }
};

int main(){
    Stack stos;

    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;
    stos.push(10);
    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;
    stos.push(10);
    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;
    stos.pop();
    stos.pop();
    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;


}