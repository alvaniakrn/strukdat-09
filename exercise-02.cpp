/*
 alvina vania kirana
 140810180010
 exercise 2
 2019
 */

#include <iostream>
using namespace std;

struct elemenStack{
    char info;
    elemenStack* next;
};

typedef elemenStack* pointer;
typedef pointer stack;

void createStack (stack& sTop);
void createElemen (pointer& pBaru);
void push (stack& sTop, pointer pBaru);
void pop (stack& sTop, pointer& pHapus);
void traversal (stack& sTop);

int main() {
    stack s, s2;
    pointer p;
    int n;
    
    createStack(s);
    
    cout<< "Banyaknya Stack :";cin >> n;
    for (int i=0; i<n; i++){
        createElemen(p);
        push (s,p);
    }
    
    cout << endl;
    cout << "Push--> ";
    traversal(s);
    
    createStack(s2);
    for (int i=0; i>n; i--){
        pop (s,p);
        push (s2,p);
    }
    
    cout << endl;
    cout << "Reverse--> ";
    traversal(s);
    
    return 0;
}

// menggunakan stack LinkedList

void createStack (stack& sTop){
    sTop=NULL;
}

void createElemen (pointer& pBaru){
    pBaru = new elemenStack;
    cout << "Masukkan Stack : "; cin >> pBaru->info;
    pBaru->next=NULL;
}

void push (stack& sTop, pointer pBaru){
    if (sTop==NULL){
        sTop=pBaru;
    }
    else {
        pBaru->next=sTop;
        sTop=pBaru;
    }
}

void pop (stack& sTop, pointer& pHapus){
    if (sTop==NULL){
        cout << "Stack Kosong" << endl;
    }
    else if (sTop->next==NULL){
        pHapus=sTop;
        sTop=NULL;
    }
    else {
        pHapus=sTop;
        sTop=sTop->next;
        pHapus->next=NULL;
    }
}

void traversal (stack& sTop){
    pointer pBantu;
    if (sTop==NULL){
        cout << "List Kosong"<<endl;
    }
    else {
        pBantu=sTop;
        do{
            cout << pBantu->info<<" ";
            pBantu=pBantu->next;
        }
        while(pBantu!=NULL);
    }
    cout <<endl;
}
