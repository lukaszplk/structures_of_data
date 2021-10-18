#include<iostream>
using namespace std;

class Stack{
    public:
    int index=0, *tab = new int [0];
    
    void push(int num){
        int *tmp = new int [index+1];
        for(int i=0;i<index;i++){
            tmp[i] = this->tab[i];
        }
        tmp[index] = num;
        this->index++;
        delete [] this->tab;
        this->tab = tmp;
        delete [] tmp;  
    }

    void pop(){
        index--;
        int *tmp = new int[index];
        for(int i=0;i<index;i++){
            tmp[i] = this->tab[i];
        }
        delete [] this->tab;
        this->tab = tmp;
        delete [] tmp;
    }

    bool empty(){
        return this->index==0;
    }

    int size(){
        return this->index;
    }

    int value(){
        if(!this->empty()){
            return this->tab[this->index-1];
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
    stos.push(11);
    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;
    stos.pop();
    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;
    stos.pop();
    cout<<stos.empty()<<endl;
    cout<<stos.value()<<endl;
    cout<<stos.size()<<endl;

    return 0;
}