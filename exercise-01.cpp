/*
 alvina vania kirana
 140810180010
 exercise 1
 2019
 */

#include <iostream>
using namespace std;

const int maxElemen=255;
struct stack{
    char isi[maxElemen];
    char top;
};

stack s;

void createStack (stack& s);
void push(stack& s, char elBaru);
void pop(stack& s, char& elHapus);
void print(stack& s);

int main()
{
    stack s, s2;
    int n;
    char x;
    
    createStack(s);
    cout << "Banyaknya stack: "; cin >> n;
    for(int i=0;i<n;i++){
        cout << "Masukkan Stack :";
        cin >> x;
        push(s,x);
    }
    
    cout << "Push--> ";
    print(s);
    cout << endl;
    
    createStack(s2);
    for (int i=s.top;i>=0;i--){
        pop(s,x);
        push(s2,x);
    }
    
    cout << "Reverse--> ";
    print(s2);
}

void createStack (stack& s){
    s.top=-1;
}

void push(stack& s, char elBaru){
    if(s.top==maxElemen-1){
        cout << "Tumpukan penuh" << endl;
    }
    else{
        s.top=s.top+1;
        s.isi[s.top]=elBaru;
    }
}

void pop(stack& s, char& elHapus){
    if(s.top<0){
        cout << "Tumpukan kosong" << endl;
    }
    else{
        elHapus = s.isi[s.top];
        s.top=s.top-1;
    }
}

void print(stack& s){
    for(int i=s.top; i>=0; i--){
        cout << s.isi[i] << " ";
    }
}
