// copyConstructor.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
class Dog {
public:
    string name;
    Dog() {
        cout << "デフォルトコンストラクター" << endl;
        cout << "Pochi" << endl;

    }
    Dog(string n) :name(n){
        cout << "デフォルトコンストラクター" << endl;
        cout << name << endl;

    }



    Dog(const Dog& org) {
        
        cout << "コピーコンストラクター" << endl;
        cout << org.name << endl;
    }
    ~Dog() {
        cout << "デストラクター" << endl;
    }
};
void test1(Dog d1) {



}

void test2(Dog& d) {



}
void test3(Dog *d) {



}



int main()
{
    Dog d("Pochi");
    //test1(d);
    //test2(d);
    //test3(&d);
    Dog d1 = d;



}

