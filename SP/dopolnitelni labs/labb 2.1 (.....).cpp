//Од стандарден влез се чита број х.
//На екран да се испечати 1 ако бројот хϵ(-100,100)∪[200,300), a 0 во спротивно.
//Задачата да се реши со логички операции. (без if-else)

#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x;
    y = (( x > -100 && x < 100 ) || ( x >= 200 && x < 300 ));
    cout << y;

    return 0;
}