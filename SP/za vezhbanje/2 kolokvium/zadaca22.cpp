//Од стандарден влез се чита број n, а потоа се читаат и n броеви. 
//Потребно е на екран да се испечатат сите броеви кои што се строго растечки односо 
//секоја цифра е поголема од претходната (1589 е растечки, 1529 не е растечки). 
//Проверката за тоа дали бројот е растечки да се реализира со посебна функција која ќе врати 1 ако е растечки
//и -1 ако не е растечки. Дополнително ако бројот е растечки за него треба да се повика функција која ќе ја пресмета сумата на цифрите од кои е составен.
//Дополнително: функцијата за пресметување на сума на цифри да биде рекурзивна
//Печатењето треба да е во следен формат: 1234 (suma:  10)

// input                     output
// 5                        257 (suma: 14)
// 257 391 423 789 269      789 (suma: 24)
//                          269 (suma: 17)

#include <iostream>
using namespace std;

int sumaCifri(int n){
    if (n==0)
        return 0;
    else return n%10 + sumaCifri(n/10);
}

int daliRastecki(int n){
    while (n>9){
        if (n%10 < n/10%10){
            return -1;
        }
        n/=10;
    }
    return 1;
}

int main(){
   int n, br;
   cin>>n;
   for (int i=0; i<n; i++){
       cin>>br;
       if (daliRastecki(br)==1){
           cout<<br<<" (suma: "<<sumaCifri(br)<<")"<<endl;
       }
   }

    return 0;
}
