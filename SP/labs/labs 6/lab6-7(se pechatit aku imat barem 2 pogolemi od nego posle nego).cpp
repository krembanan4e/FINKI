//Од стандарден влез се вчитува n (колку броја треба да има во низата), а потоа се внесуваат  секој од елементите на низата. 
//На излез корисникот треба да отпечати секој елемент кој после него има најмалку два поголеми елементи. 
//Пример: 
//n=5, niza=[3,10,16,20,1]
//корисникот на излез треба да отпечати: 3 10, бидејќи 3 има 3 поголеми вредности, 10 има 2 поголеми вредности, но не и 16, бидејќи 16 има само една поголема вредност.

//input                         output
//8 7 12 9 15 19 32 56 70       7 12 9 15 19 32

//input                         output
//7 59 32 97 63 19 8 2          59 32

//input                         output
//5 102 92 82 50 10             (nishto ne se pechatit)

#include <iostream>
using namespace std;

int main() {
    int n, a[100],br;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        br=0;
        for (int j=i+1; j<n; j++){
            if (a[j]>a[i]){
                br++;
            }
        }
        if (br>=2){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}
