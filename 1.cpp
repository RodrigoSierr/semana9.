#include <iostream>

using namespace std;

int main(){
    int y = 100;
    
    //declarando la referencia a entero yRef
    //yRey hace referencia a y
    int& yRef{y};
        
    //declarando el puntero a entero yPtr
    int* yPtr {nullptr};

    yPtr = &y;
    
    //imprime la direccon de memoria
    cout<<yPtr<<endl;
    cout<<&y<<endl;
    
    cout<<*yPtr<<endl;
    *yPtr = 1000;
    cout<<y<<endl;
    


    return 0;
}