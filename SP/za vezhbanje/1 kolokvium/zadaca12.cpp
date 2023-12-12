//Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
//[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]

//0: 2
//1: 3
//2: 1
//3: 1
//4: 1
//за броевите 97654 48654 12345 12343 1263 12443 12643 12777

#include <iostream>
using namespace std;
int main(){
    int n, p0 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, c1, c2, c3, c4, c0;

    while ( cin >> n ){
        c0 = n%10;           //gi zemame site mozni cifri od ednocifren do petcifren broj
        c1 = n/10%10;
        c2 = n/100%10;
        c3 = n/1000%10;
        c4 = n/10000;

            if ( n > 0 && n < 10 ){     //ako n e ednocifren
                p0++;
            }
            else if ( n > 9 && n < 100 ){     //ako n e dvocifren
                if ( c0>=c1 ){
                    p0++;
                }
                else {
                    p1++;
                }
            }
            else if ( n > 99 && n < 1000 ){      //ako n e trocifren
                if ( c0>=c1 && c0>=c2 ){
                    p0++;
                }
                else if ( c1>=c0 && c1>=c2 ){
                    p1++;
                }
                else {
                    p2++;
                }
            }
            else if ( n > 999 && n < 10000 ){       //ako n e 4cifren
                if ( c0>=c1 && c0>=c2 && c0>=c3 ){
                    p0++;
                }
                else if ( c1>=c0 && c1>=c2 && c1>=c3 ){
                    p1++;
                }
                else if ( c2>=c0 && c2>=c1 && c2>=c3 ){
                    p2++;
                }
                else {
                    p3++;
                }
            }
            else if ( n > 9999 && n < 100000 ){                 //ako n e 5cifren
                if ( c0>=c1 && c0>=c2 && c0>=c3 && c0>=c4 ){
                    p0++;
                }
                else if ( c1>=c0 && c1>=c2 && c1>=c3 && c1>=c4 ){
                    p1++;
                }
                else if ( c2>=c0 && c2>=c1 && c2>=c3 && c2>=c4 ){
                    p2++;
                }
                else if ( c3>=c0 && c3>=c1 && c3>=c2 && c3>=c4 ){
                    p3++;
                }
                else {
                    p4++;
                }
            }

            else if ( n < 10000 || n > 99999 ){
                break;
            }


        }


    cout << "0: " << p0 << endl;
    cout << "1: " << p1 << endl;
    cout << "2: " << p2 << endl;
    cout << "3: " << p3 << endl;
    cout << "4: " << p4 << endl;

    return 0;

}