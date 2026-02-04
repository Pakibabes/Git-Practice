#include <iostream>
#include "star_shapes.cpp"
using namespace std;
int main(){
    string start;
    cin >> start;

    if(start == "START"){
        cout << "BEGIN" << endl;
        
    }else{
        cout << "ERROR: 420 \"Not beggining with a Start\"" << endl;
    }
    return 0;
}
