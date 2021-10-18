#include<iostream>
using namespace std;

class Stack{
    public:
    int index=0, tab[100];

    void enqueue(int num){
        tab[index] = num;
        index++;
    }

    void dequeue(){
        
        for(int i=1;i<100;i++){
            tab[i-1]=tab[i];
        }
        index--;
    }

    int first(){
        if(this->size()){
            return this->tab[0];
        }else{
            return -1;
        }
        
    }

    int size(){
        return index;
    }

    int last(){
        if(this->size()){
            return this->tab[index-1];
        }else{
            return -1;
        }
    }
};

int main(){
    Stack stos;

    cout<<stos.first()<<endl;
    cout<<stos.size()<<endl;
    cout<<stos.last()<<endl;
    stos.enqueue(10);
    cout<<stos.first()<<endl;
    cout<<stos.size()<<endl;
    cout<<stos.last()<<endl;
    stos.enqueue(15);
    cout<<stos.first()<<endl;
    cout<<stos.size()<<endl;
    cout<<stos.last()<<endl;
    stos.dequeue();
    cout<<stos.first()<<endl;
    cout<<stos.size()<<endl;
    cout<<stos.last()<<endl;
    stos.dequeue();
    cout<<stos.first()<<endl;
    cout<<stos.size()<<endl;
    cout<<stos.last()<<endl;


}