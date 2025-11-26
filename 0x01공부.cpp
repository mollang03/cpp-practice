#include <iostream> // 전처리 지시자

/*
c++에서 함수를 사용하자고 한다면..?
반드시 그 함수의 원형을 미리 정의하여야 한다.
*/

using namespace std;
// 원래는 std::cout, std::endl 이렇게 써야 하지만
// using namespace std; 라고 하면 std를 생략할 수 있다.

int main()
{
    cout << "Hello, World!" << endl;
    // << 꺽쇄는 데이터의 흐름을 나타낸다.
    return 0;
}