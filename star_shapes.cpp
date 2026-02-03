#include <iostream>
using namespace std;
void shapes(int num){
    for(int i = 0; i < num; i++){
        for(int j = i; j < num; j++){
            cout << "*";
        }
        cout<<endl;
    }
}