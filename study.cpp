#include <iostream>
using namespace std;//namespace 안쓴다 거의
int main()
{
    int num;
    using namespace std;
    cout << endl;
    cout << "C++"; //printf
    /*std::cin >> num;*/ //scanf 
    cout <<"객체지향" << endl; //std:: 표준이겄지
    return 0;
}
int main()
{
    int age = 23;
    float height = 183.0;
    std::cout << "my age is" << age;
    std::cout << std::endl; //개행endl
    std::cout << "\n";
    std::cout << "my height is" << height;
    return 0;
}
int main()
{
    using namespace std;

    int carrots;
    carrots = 25;
    cout << "나는 당근을 ";
    cout << carrots;
    cout << "개 가지고 있다";
    cout << endl;
    carrots = carrots-1;
    cout << "이제 당근은 " <<carrots << "개이다" << endl;
    return 0;
}
int main()
{
    int cigarette;
    std::cout << "담배 몇 개야";
    std::cin >> cigarette;
    std::cout <<"담배 " << cigarette <<"개비" << std::endl;
    return 0;
}
#include <cmath> // sqrt 사용하기 위해 선언
int main()
{
    using namespace std;

    double area;
    cout << "마루면적 평방피트 단위로 입력: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "사각형 마루라면 한 변이 " <<side<< "피트에 상당합니다." << endl;
    cout << "good" << endl;
    return 0;
}
//sqrt 함수는 double형 데이터를 다룬다 그래서 area와 side를 모두 double 변수 선언

void simon(int);

int main()
{
    using namespace std;
    simon(3);
    cout << "정수 하나 고르기: ";
    int count;
    cin >> count;
    simon(count);
    cout << "끝" << endl;
    return 0;
}
void simon(int n)
{
    using namespace std;
    cout << "simon 왈, 발가락을 " << n <<"번 두드려라." << endl;
}

int stonetolb(int);
int main()
{
    using namespace std;
    int stone;
    cout << "체중을 스톤단위로 입력";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone <<"스톤은 ";
    cout << pounds << "파운드입니다." << endl;
    return 0;
}
int stonetolb(int sts)
{
    return 14*sts;
}

int main()
{
    using namespace std;
    cout << "이름: ";
    char name[30];
    cin >> name;
    cout << "주소: ";
    char address[30];
    cin >> address;
    cout << "이름: " <<name << endl;
    cout << "주소: " << address <<endl;
    // cout << "이름"<<endl;
    // cout << "주소"<<endl;
    return 0;
}
int main()
{
    using namespace std;
    cout << "거리: ";
    double mile;
    cin >> mile;
    mile = mile*1.60934;
    cout << mile << endl;
    return 0;
}

void three()
{
    using namespace std;
    cout<<"Three blind mice"<<endl;
}
void see()
{
    std::cout << "See how they run"<<std::endl;
}
int main()
{
    using namespace std;
    three();
    three();
    see();
    see();
    return 0;
}
int main()
{
    using namespace std;
    cout << "사용자 나이 입력: ";
    int age;
    cin >> age;
    age = age*12;
    cout << "이 때 당신의 나이를 월수로 나타낼 경우 "<< age << "입니다." << endl;
    return 0;
}
double temper(double);
int main()
{
    using namespace std;
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
    double num;
    cin >> num;
    cout << temper(num)<<endl;
    return 0;
}
double temper(double num)
{
    num = 1.8*num+32.0;
    return num;
}
double astronomy(double);
int main()
{
    using namespace std;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    double light;
    cin >> light;
    cout << astronomy(light) << endl;
    return 0;
}
double astronomy(double light)
{
    using namespace std;
    light = light * 63240;
    return light;
}
void time(int,int);
int main()
{
    using namespace std;
    cout << "시간 값을 입력하시오: ";
    int hour;
    cin >> hour;
    cout << "분 값을 입력하시오: ";
    int minute;
    cin >> minute;
    time(hour,minute);
    return 0;
}
void time(int hour,int minute)
{
    using namespace std;
    cout << "시각: " << hour<<":" << minute << endl;
}
#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    cout << "int는 " <<sizeof(int) << "바이트이다."<<endl;
    cout << "short는" << sizeof n_short << "바이트이다." <<endl;
    cout << "long은 " << sizeof n_long <<"바이트이다." << endl << endl;
    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << endl;
    //sizeof 연산자는 데이터형이나 변수의 크기를 알아낸다.
    cout << "최댓값" << endl;
    cout << "int: " <<n_int << endl;
    cout << "short: " << n_short << endl;
    cout <<"long: " << n_long << endl << endl;
    cout << "long long: " << n_llong << endl << endl;
    cout << "int의 최소값 = " << INT_MIN << endl;
    cout << "char의 비트 수 = " << CHAR_BIT << endl;
    return 0;
}
#include <iostream>
#include <climits>
#define ZERO 0
int main()
{
    using namespace std;
    short Dohee = SHRT_MAX;
    unsigned short Insuk = Dohee;
    
    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어있다." << endl;
    cout << "각각의 계좌에 1원씩 입금한다." << endl << "이제";
    Dohee = Dohee +1;
    Insuk = Insuk + 1;
    cout <<"도희의 잔고는 " << Dohee << "원이 되었고. ";
    cout << "인숙이의 잔고는 " << Insuk <<"원이 되었다." << endl;
    cout << "이년이 대출을 했나?" << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, ";
    cout << "인숙의 계좌에도 " << Insuk <<"원이 되었다." << endl;
    cout << "각각의 계좌에서 1원씩 인출한다." << endl << "이제";
    Dohee = Dohee-1;
    Insuk = Insuk -1;
    cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
    cout << "인숙의 잔고는 " << Insuk <<"원이 되었다." << endl;
    cout <<"인숙이 로또 맞았구나" << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "박재범 몸매\n";
    cout << "가슴둘레" << chest << "\n";
    cout << "허리둘레" << waist <<"\n";
    cout << "인심길이" << inseam << "\n";
    return 0;
}

// // 클래스 벡터 오버로딩 클래스 왜 씀 new delete 왜 하는지 메모리관련
// // C++ 데이터형 안정해주면 정수형 상수 모두 int형으로 해 준다.

#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << ch << "의 ASCII코드는 " << i << "입니다." << endl;

    cout << "이 문자 코드에 1을 더해 보겠습니다." << endl;
    ch = ch+1;
    i = ch;
    cout << ch << "의 ASCII 코드는" << i << "입니다." << endl;
    //cout.put() 멤버 함수를 사용하여 char 형 변수 ch 출력
    cout <<"cout.put(ch)를 사용하여 char형 변수 ch를 화면에 출력: ";
    cout.put(ch);
    //cout.put()을 사용하여 문자 상수 출력
    cout.put('!');

    cout << endl << "종료" << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    char test = 'A';
    int i = test;
    cout << test << "의 ASCII코드는" << i << "입니다." << endl;
    
    cout << "test에 1 더해보고 결과" << endl;
    test = test+1;
    i=test;
    cout << test<<"의 ASCII코드는" << i << "입니다." << endl;
    cout << "char형 변수 test를 화면에 출력: ";
    cout.put(test);
    cout.put('!');
    cout << endl << "종료" << endl;
    return 0;
}
#include <iostream>
int main()
{
    char alarm = '\a';  //알람 
    std::cout << alarm << "틀렸습니다 \a\n";
    std::cout << "정답은\n김소월의 \"진달래 꽃\"입니다\n";
    return 0;
}
#include <iostream>
int main()
{
    //이스케이프 시퀀스 사용 이스케이프 시퀀스: 백슬래시 뒤에 한 문자나 숫자 조합이 오는 문자 조합
    using namespace std;
    cout << "\a암호명 \"화려한 외출\" 작전이 방금 개시되었습니다.\n";
    cout << "8자리 비밀번호를 입력하십시요:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\a입력하신 비밀번호는 " << code << "입니다.\n";
    cout << "\a비밀번호가 맞습니다. z3 계획을 진행하십시오\n";
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); // 고정 소수점 형식으로 출력
    float tub = 10.0/3.0; // 유효 숫자 6개
    double mint = 10.0 / 3.0;//유효 숫자 15개
    const float million = 1.0e6;

    cout << "tub= " << tub;
    cout << ", a million tubs - " << million *tub;
    cout << ",\nten million tubs = ";
    cout << 10*million *tub << endl;

    cout << "mint = " << mint << "and a million mints = ";
    cout << million * mint << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a <<endl;
    cout << "b - a = " << b-a << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "수를 하나 입력하십시오: ";
    cin >> hats;
    cout << "다른 수를 입력하십시오: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}
#include <iostream>
int main()
{
    //setf 형식지정 함수
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "정수 나눗셈: 9/5 = " << 9/5 << endl;
    cout << "부동 소수점수 나눗셈: 9.0/5.0 = ";
    cout << 9.0/5.0 << endl;
    cout << "혼합 나눗셈: 9.0/5 = " << 9.0/5 << endl;
    cout << "double형 상수: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;
    cout << "float형 상수: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "당신의 체중을 파운드 단위로 입력: ";
    cin >> lbs;
    int stone = lbs/ Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " 파운드는 " << stone
         << " 스톤, " << pounds << "파운드입니다. \n";
    return 0;
    //이제 영국 여행 할 때 누가 체중을 스톤 단위로 물어도 당황하지 않고 침착하게 대답할 수 있을 것 같다.
}
#include <iostream>
int main()
{
    //데이터 형변환
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; //int 형 float 형으로 변환
    int guess = 3.9832; // float 형을 int 형으로 변환
    int debt = 7.2E12; //결과예측 안된다
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    //두 값을 double형변환 후 합은 int형 변환하여 대입
    auks = 19.99 + 11.99;
    //int 형 변환 후 더한다
    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + int (11.99);
    cout << "바다오리 = " << auks << ",박쥐 = " << bats;
    cout << ",검둥오리 = " << coots << endl;

    char ch = 'Z';
    cout << "코드 " << ch << " 의 값은"; //cahr형 출력
    cout << int(ch) << endl; //int형 출력
    cout << "네, 코드 Z의 값은";
    cout << static_cast<int>(ch) << endl; //int형 출력
    return 0;
}
/* 3단원 문제 */
/*1.*/
#include <iostream>
int main()
{
    using namespace std;
    int cm;
    double high;
    cout << "키를 센티미터 단위로 입력해주세요:___\b\b\b";
    cin >> cm;
    high = cm*0.01;
    cout << cm << "센티미터키 미터로 변환한 값: " << high << endl; 
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    int feet,inch;
    double mt;
    int pound;
    double kg;
    double BMI;
    cout << "키를 피트단위로 입력,체중 파운드 단위로 입력";
    cin >> feet;
    inch = feet*12;
    mt = inch * 0.0254;
    cin >> pound;
    kg = pound * 2.2;
    BMI = kg/(mt*mt);
    cout << "BMI: " << BMI << endl;
    return 0;
}
#include <iostream>
int main()
{
    using namespace std;
    int Do;
    double bun, cho;
    cout << "위도를 도, 분, 초 단위로 입력하시오: ";
    cin >> Do;
    cin >> bun;
    cin >> cho;
    cout << Do << "도, " << bun <<"분, " << cho << "초 = ";
    bun = bun/60;
    cho = cho/60;
    cout << Do+bun+cho << endl;
    return 0;

}