#include <iostream>
#define PIE 3.14
// 바뀔 필요가 없어 고정적으로 되어있는 상수

using namespace std;

int main()
{
    cout << PIE << endl;
    const float PIEc = 3.14;
    cout << PIEc << endl;
    // PIEc = 3.156; << const로 PIEc를 상수로 만들어서 후에 변경할 수가 없다.
    // cout << PIEc << endl;

    int a = 3.141592;
    cout << a << endl;

    // 강제적으로 데이터형 변환
    // typeName(a) (typeName)a
    // static_cast<typeName>(a)
    char c = 'a';
    cout << static_cast<int>(c) << endl;
    cout << (int)c << endl;
    return 0;

    // auto는 c++에서 제공하는 데이터형이며 알아서 자료형을 지정해준다.
    // ex) auto x = 10; // int형으로 지정
}
