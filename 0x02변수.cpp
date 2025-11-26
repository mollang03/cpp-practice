#include <iostream>
#include <climits> // 정수형 자료형의 한계를 알기 위한 헤더 파일

using namespace std;

/*
변수 생성 방법
1. 변수의 자료형
2. 변수 이름
>> 이름 규칙 : 숫자 시작 X, C++에서 예약된 단어 사용 X, 공백 X
3. 변수가 어디에 저장이 되는가?
*/

int main()
{
    int a;
    a = 10;
    cout << a << endl;
    cout << &a << endl; // &a : a의 메모리 주소를 나타냄.

    // 정수형 변수 : short, int, long, long long
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    long long n_long_long = LLONG_MAX; // climits 헤더 파일에 정의되어 있으며, 각 정수형의 최대값을 나타냄
    cout << "short형 자료형의 크기 : " << sizeof n_short << endl;
    cout << "short형 최대 값 : " << n_short << endl;
    cout << "int형 자료형의 크기 : " << sizeof n_int << endl;
    cout << "int형 최대 값 : " << n_int << endl;
    cout << "long형 자료형의 크기 : " << sizeof n_long << endl;
    cout << "long형 최대 값 : " << n_long << endl;
    cout << "long long형 자료형의 크기 : " << sizeof n_long_long << endl;
    cout << "long long형 최대 값 : " << n_long_long << endl;
    // long과 int의 차이는 뭘까??

    // 실수형 변수 : float, double, long double

    // char형 변수에 관한 설명
    // '\0' : 널 문자, 아스키 코드값 0
    char b[] = {'H', 'e', 'l', 'l', 'o'};
    char c[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << b << endl;
    cout << c << endl;

    // bool형 변수
    bool d = 0;
    bool e = 1;
    bool de = 10;

    cout << d << " " << e << " " << de << endl;

    return 0;
}