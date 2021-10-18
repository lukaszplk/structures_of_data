#include<iostream>
using namespace std;

class Stack{
    public:
    int index=0, *tab;

    void enqueue(int num){
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

    void dequeue(){
        
        int *tmp = new int[index-1];
        for(int i=1;i<index;i++){
            tmp[i-1] = this->tab[i];
        }
        delete [] this->tab;
        this->tab = tmp;
        delete [] tmp;
        this->index--;
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