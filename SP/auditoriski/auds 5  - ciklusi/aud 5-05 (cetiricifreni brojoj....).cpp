//Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви
//кај кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.
//
//4031 (4=0+3+1), 5131 (5=1+3+1)

#include <iostream>
using namespace std;
int main() {
    for ( int i = 1000; i <= 9999; i++ ){
        int c1 = i % 10;
        int c2 = i / 10 % 10;
        int c3 = i / 100 % 10;
        int c4 = i / 1000;
        int suma = c1 + c2 + c3;
        if ( c4 == suma ){
            cout << i << " " ;
        }
    }

    return 0;
}
