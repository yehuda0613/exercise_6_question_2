#include <iostream>
#include "RoundList.h"
#include "List.h"

using namespace std;

int main() {
    RoundList a;
    a.add(1);
    a.add(2);
    a.add(3);
    a.add(4);
    //a.addToEnd(5);
    //a.addToEnd(6);


    for (int i = 0; i < 4; ++i) {
        cout << a.firstElement() << " ";
        a.removeFirst();
    }
}
