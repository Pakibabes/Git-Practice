#include <iostream>
#include "star_shapes.cpp"
using namespace std;
int main(){
    cout << "Budskie" << endl; //asd
    for(int i = 0; i< 5; i++){
        cout << i << endl;
    }
    cout << "How old are you Budskie? ";
    int age;
    cin >> age;


    cout << "you are " << age << " years old" << endl;

    shapes(3);
    return 0;
}
