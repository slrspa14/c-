// #include <iostream>
// using namespace std;//namespace 안쓴다 거의
// int main()
// {
//     int num;
//     using namespace std;
//     cout << endl;
//     cout << "C++"; //printf
//     /*std::cin >> num;*/ //scanf 
//     cout <<"객체지향" << endl; //std:: 표준이겄지
//     return 0;
// }
// int main()
// {
//     int age = 23;
//     float height = 183.0;
//     std::cout << "my age is" << age;
//     std::cout << std::endl; //개행endl
//     std::cout << "\n";
//     std::cout << "my height is" << height;
//     return 0;
// }
// int main()
// {
//     using namespace std;

//     int carrots;
//     carrots = 25;
//     cout << "나는 당근을 ";
//     cout << carrots;
//     cout << "개 가지고 있다";
//     cout << endl;
//     carrots = carrots-1;
//     cout << "이제 당근은 " <<carrots << "개이다" << endl;
//     return 0;
// }
// int main()
// {
//     int cigarette;
//     std::cout << "담배 몇 개야";
//     std::cin >> cigarette;
//     std::cout <<"담배 " << cigarette <<"개비" << std::endl;
//     return 0;
// }
// #include <cmath> // sqrt 사용하기 위해 선언
// int main()
// {
//     using namespace std;

//     double area;
//     cout << "마루면적 평방피트 단위로 입력: ";
//     cin >> area;
//     double side;
//     side = sqrt(area);
//     cout << "사각형 마루라면 한 변이 " <<side<< "피트에 상당합니다." << endl;
//     cout << "good" << endl;
//     return 0;
// }
// //sqrt 함수는 double형 데이터를 다룬다 그래서 area와 side를 모두 double 변수 선언

// void simon(int);

// int main()
// {
//     using namespace std;
//     simon(3);
//     cout << "정수 하나 고르기: ";
//     int count;
//     cin >> count;
//     simon(count);
//     cout << "끝" << endl;
//     return 0;
// }
// void simon(int n)
// {
//     using namespace std;
//     cout << "simon 왈, 발가락을 " << n <<"번 두드려라." << endl;
// }

// int stonetolb(int);
// int main()
// {
//     using namespace std;
//     int stone;
//     cout << "체중을 스톤단위로 입력";
//     cin >> stone;
//     int pounds = stonetolb(stone);
//     cout << stone <<"스톤은 ";
//     cout << pounds << "파운드입니다." << endl;
//     return 0;
// }
// int stonetolb(int sts)
// {
//     return 14*sts;
// }

// int main()
// {
//     using namespace std;
//     cout << "이름: ";
//     char name[30];
//     cin >> name;
//     cout << "주소: ";
//     char address[30];
//     cin >> address;
//     cout << "이름: " <<name << endl;
//     cout << "주소: " << address <<endl;
//     // cout << "이름"<<endl;
//     // cout << "주소"<<endl;
//     return 0;
// }
// int main()
// {
//     using namespace std;
//     cout << "거리: ";
//     double mile;
//     cin >> mile;
//     mile = mile*1.60934;
//     cout << mile << endl;
//     return 0;
// }

// void three()
// {
//     using namespace std;
//     cout<<"Three blind mice"<<endl;
// }
// void see()
// {
//     std::cout << "See how they run"<<std::endl;
// }
// int main()
// {
//     using namespace std;
//     three();
//     three();
//     see();
//     see();
//     return 0;
// }
// int main()
// {
//     using namespace std;
//     cout << "사용자 나이 입력: ";
//     int age;
//     cin >> age;
//     age = age*12;
//     cout << "이 때 당신의 나이를 월수로 나타낼 경우 "<< age << "입니다." << endl;
//     return 0;
// }
// double temper(double);
// int main()
// {
//     using namespace std;
//     cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
//     double num;
//     cin >> num;
//     cout << temper(num)<<endl;
//     return 0;
// }
// double temper(double num)
// {
//     num = 1.8*num+32.0;
//     return num;
// }
// double astronomy(double);
// int main()
// {
//     using namespace std;
//     cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
//     double light;
//     cin >> light;
//     cout << astronomy(light) << endl;
//     return 0;
// }
// double astronomy(double light)
// {
//     using namespace std;
//     light = light * 63240;
//     return light;
// }
// void time(int,int);
// int main()
// {
//     using namespace std;
//     cout << "시간 값을 입력하시오: ";
//     int hour;
//     cin >> hour;
//     cout << "분 값을 입력하시오: ";
//     int minute;
//     cin >> minute;
//     time(hour,minute);
//     return 0;
// }
// void time(int hour,int minute)
// {
//     using namespace std;
//     cout << "시각: " << hour<<":" << minute << endl;
// }
// #include <iostream>
// #include <climits>
// int main()
// {
//     using namespace std;
//     int n_int = INT_MAX;
//     short n_short = SHRT_MAX;
//     long n_long = LONG_MAX;
//     long long n_llong = LLONG_MAX;
//     cout << "int는 " <<sizeof(int) << "바이트이다."<<endl;
//     cout << "short는" << sizeof n_short << "바이트이다." <<endl;
//     cout << "long은 " << sizeof n_long <<"바이트이다." << endl << endl;
//     cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
//     cout << endl;
//     //sizeof 연산자는 데이터형이나 변수의 크기를 알아낸다.
//     cout << "최댓값" << endl;
//     cout << "int: " <<n_int << endl;
//     cout << "short: " << n_short << endl;
//     cout <<"long: " << n_long << endl << endl;
//     cout << "long long: " << n_llong << endl << endl;
//     cout << "int의 최소값 = " << INT_MIN << endl;
//     cout << "char의 비트 수 = " << CHAR_BIT << endl;
//     return 0;
// }
// #include <iostream>
// #include <climits>
// #define ZERO 0
// int main()
// {
//     using namespace std;
//     short Dohee = SHRT_MAX;
//     unsigned short Insuk = Dohee;
    
//     cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, ";
//     cout << "인숙이의 계좌에도 " << Insuk << "원이 들어있다." << endl;
//     cout << "각각의 계좌에 1원씩 입금한다." << endl << "이제";
//     Dohee = Dohee +1;
//     Insuk = Insuk + 1;
//     cout <<"도희의 잔고는 " << Dohee << "원이 되었고. ";
//     cout << "인숙이의 잔고는 " << Insuk <<"원이 되었다." << endl;
//     cout << "이년이 대출을 했나?" << endl;
//     Dohee = ZERO;
//     Insuk = ZERO;
//     cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, ";
//     cout << "인숙의 계좌에도 " << Insuk <<"원이 되었다." << endl;
//     cout << "각각의 계좌에서 1원씩 인출한다." << endl << "이제";
//     Dohee = Dohee-1;
//     Insuk = Insuk -1;
//     cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
//     cout << "인숙의 잔고는 " << Insuk <<"원이 되었다." << endl;
//     cout <<"인숙이 로또 맞았구나" << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int chest = 42;
//     int waist = 0x42;
//     int inseam = 042;

//     cout << "박재범 몸매\n";
//     cout << "가슴둘레" << chest << "\n";
//     cout << "허리둘레" << waist <<"\n";
//     cout << "인심길이" << inseam << "\n";
//     return 0;
// }

// // // 클래스 벡터 오버로딩 클래스 왜 씀 new delete 왜 하는지 메모리관련
// // // C++ 데이터형 안정해주면 정수형 상수 모두 int형으로 해 준다.

// #include <iostream>
// int main()
// {
//     using namespace std;
//     char ch = 'M';
//     int i = ch;
//     cout << ch << "의 ASCII코드는 " << i << "입니다." << endl;

//     cout << "이 문자 코드에 1을 더해 보겠습니다." << endl;
//     ch = ch+1;
//     i = ch;
//     cout << ch << "의 ASCII 코드는" << i << "입니다." << endl;
//     //cout.put() 멤버 함수를 사용하여 char 형 변수 ch 출력
//     cout <<"cout.put(ch)를 사용하여 char형 변수 ch를 화면에 출력: ";
//     cout.put(ch);
//     //cout.put()을 사용하여 문자 상수 출력
//     cout.put('!');

//     cout << endl << "종료" << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     char test = 'A';
//     int i = test;
//     cout << test << "의 ASCII코드는" << i << "입니다." << endl;
    
//     cout << "test에 1 더해보고 결과" << endl;
//     test = test+1;
//     i=test;
//     cout << test<<"의 ASCII코드는" << i << "입니다." << endl;
//     cout << "char형 변수 test를 화면에 출력: ";
//     cout.put(test);
//     cout.put('!');
//     cout << endl << "종료" << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     char alarm = '\a';  //알람 
//     std::cout << alarm << "틀렸습니다 \a\n";
//     std::cout << "정답은\n김소월의 \"진달래 꽃\"입니다\n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     //이스케이프 시퀀스 사용 이스케이프 시퀀스: 백슬래시 뒤에 한 문자나 숫자 조합이 오는 문자 조합
//     using namespace std;
//     cout << "\a암호명 \"화려한 외출\" 작전이 방금 개시되었습니다.\n";
//     cout << "8자리 비밀번호를 입력하십시요:________\b\b\b\b\b\b\b\b";
//     long code;
//     cin >> code;
//     cout << "\a입력하신 비밀번호는 " << code << "입니다.\n";
//     cout << "\a비밀번호가 맞습니다. z3 계획을 진행하십시오\n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout.setf(ios_base::fixed, ios_base::floatfield); // 고정 소수점 형식으로 출력
//     float tub = 10.0/3.0; // 유효 숫자 6개
//     double mint = 10.0 / 3.0;//유효 숫자 15개
//     const float million = 1.0e6;

//     cout << "tub= " << tub;
//     cout << ", a million tubs - " << million *tub;
//     cout << ",\nten million tubs = ";
//     cout << 10*million *tub << endl;

//     cout << "mint = " << mint << "and a million mints = ";
//     cout << million * mint << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     float a = 2.34E+22f;
//     float b = a + 1.0f;

//     cout << "a = " << a <<endl;
//     cout << "b - a = " << b-a << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     float hats, heads;

//     cout.setf(ios_base::fixed, ios_base::floatfield);
//     cout << "수를 하나 입력하십시오: ";
//     cin >> hats;
//     cout << "다른 수를 입력하십시오: ";
//     cin >> heads;

//     cout << "hats = " << hats << "; heads = " << heads << endl;
//     cout << "hats + heads = " << hats + heads << endl;
//     cout << "hats - heads = " << hats - heads << endl;
//     cout << "hats * heads = " << hats * heads << endl;
//     cout << "hats / heads = " << hats / heads << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     //setf 형식지정 함수
//     using namespace std;
//     cout.setf(ios_base::fixed, ios_base::floatfield);
//     cout << "정수 나눗셈: 9/5 = " << 9/5 << endl;
//     cout << "부동 소수점수 나눗셈: 9.0/5.0 = ";
//     cout << 9.0/5.0 << endl;
//     cout << "혼합 나눗셈: 9.0/5 = " << 9.0/5 << endl;
//     cout << "double형 상수: 1e7/9.0 = ";
//     cout << 1.e7 / 9.0 << endl;
//     cout << "float형 상수: 1e7f/9.0f = ";
//     cout << 1.e7f / 9.0f << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     const int Lbs_per_stn = 14;
//     int lbs;

//     cout << "당신의 체중을 파운드 단위로 입력: ";
//     cin >> lbs;
//     int stone = lbs/ Lbs_per_stn;
//     int pounds = lbs % Lbs_per_stn;
//     cout << lbs << " 파운드는 " << stone
//          << " 스톤, " << pounds << "파운드입니다. \n";
//     return 0;
//     //이제 영국 여행 할 때 누가 체중을 스톤 단위로 물어도 당황하지 않고 침착하게 대답할 수 있을 것 같다.
// }
// #include <iostream>
// int main()
// {
//     //데이터 형변환
//     using namespace std;
//     cout.setf(ios_base::fixed, ios_base::floatfield);
//     float tree = 3; //int 형 float 형으로 변환
//     int guess = 3.9832; // float 형을 int 형으로 변환
//     int debt = 7.2E12; //결과예측 안된다
//     cout << "tree = " << tree << endl;
//     cout << "guess = " << guess << endl;
//     cout << "debt = " << debt << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int auks, bats, coots;
//     //두 값을 double형변환 후 합은 int형 변환하여 대입
//     auks = 19.99 + 11.99;
//     //int 형 변환 후 더한다
//     bats = (int) 19.99 + (int) 11.99;
//     coots = int(19.99) + int (11.99);
//     cout << "바다오리 = " << auks << ",박쥐 = " << bats;
//     cout << ",검둥오리 = " << coots << endl;

//     char ch = 'Z';
//     cout << "코드 " << ch << " 의 값은"; //cahr형 출력
//     cout << int(ch) << endl; //int형 출력
//     cout << "네, 코드 Z의 값은";
//     cout << static_cast<int>(ch) << endl; //int형 출력
//     return 0;
// }
// /* 3단원 문제 */
// /*1.*/
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int cm;
//     double high;
//     cout << "키를 센티미터 단위로 입력해주세요:___\b\b\b";
//     cin >> cm;
//     high = cm*0.01;
//     cout << cm << "센티미터키 미터로 변환한 값: " << high << endl; 
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int feet,inch;
//     double mt;
//     int pound;
//     double kg;
//     double BMI;
//     cout << "키를 피트단위로 입력,체중 파운드 단위로 입력";
//     cin >> feet;
//     inch = feet*12;
//     mt = inch * 0.0254;
//     cin >> pound;
//     kg = pound * 2.2;
//     BMI = kg/(mt*mt);
//     cout << "BMI: " << BMI << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int Do;
//     double bun, cho;
//     cout << "위도를 도, 분, 초 단위로 입력하시오: ";
//     cin >> Do;
//     cin >> bun;
//     cin >> cho;
//     cout << Do << "도, " << bun <<"분, " << cho << "초 = ";
//     bun = bun/60;
//     cho = cho/3600;
//     cout << Do+bun+cho << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "초 수를 입력하시오: ";
//     long time;
//     cin >> time;
//     int day,hour,minute,second;
//     day = time/(60*60*24);
//     time = time-(day*60*60*24);
//     hour = time / 3600;
//     time = time-(hour*3600);
//     minute = time/60;
//     second = time%60;
//     cout << day << "일" << hour << "시" << minute << "분" << second << "초" <<endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "세계 인구수를 입력하시오: ";
//     long long population;
//     long long america;
//     double importance;
//     cin >> population;
//     cout << "미국의 인구수를 입력하시오: ";
//     cin >> america;
//     importance = double(america)/double(population)*10;
//     cout << "세계 인구수에서 미국이 차지하는 비중은" << importance << "%이다." << endl;
//     return 0;
// }
// #include <iostream> // "어렵네"
// int main()
// {
//     using namespace std;
//     int mile,oil;
//     cout << "소비한 휘발유의 양 갤런단위: ";
//     cin >> oil;
//     cout << "주행거리 마일 단위로: ";
//     cin >> mile;
//     int result;
//     result = mile/oil;
//     cout << oil <<"갤런당" << result << "마일";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "휘발유 소비량(100킬로미터당 리터 수): ";
//     double l;
//     cin >> l;
//     double oil;
//     oil = l/3.875;
//     int result;
//     result = 62.14/oil;
//     cout << result << endl;
//     cout << result << "mpg(miles per gallon)" << endl << l << "liters/100km" << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int yams[3];
//     yams[0] = 7;
//     yams[1] = 8;
//     yams[2] = 6;
//     int yamcosts[3] = {200,300,50};
//     cout << "고구마 합 = ";
//     cout << yams[0] + yams[1] + yams[2] << endl;
//     cout << yams[1] << "개가 들어있는 포장은 ";
//     cout << "개당" << yamcosts[1] << "원\n";
//     int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//     total = total + yams[2] * yamcosts[2];
//     cout << "세 포장의 총 가격" << total << "원 \n";
//     cout << "\nyams 배열의 크기" << sizeof yams;
//     cout << "바이트\n";
//     cout << "원소 하나의 크기 " << sizeof yams[0];
//     cout << "바이트\n";
//     return 0;
// }
// #include <iostream>
// #include <cstring> //strlen 함수용
// int main()
// {
//     using namespace std;
//     const int Size = 15;
//     char name1[Size];
//     char name2[Size] = "C++owboy";
//     cout << "안녕하세요 저는" << name2;
//     cout << "입니다. 실례지만 성함이?\n" ;
//     cin >> name1;
//     cout << "아, " << name1 << "씨 당신의 이름은 ";
//     cout << strlen(name1) << "자입니다만\n";
//     cout << sizeof(name1) << "바이트 크기의 배열에 저장\n";
//     cout << "이름이" << name1[0] << "자로 시작하는군요 \n";
//     name2[3] = '\0';
//     cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
//     cout << name2 << endl;
//     return 0;
// }
//sizeof 배열 전체 크기 strlen 배열에 저장된 문자열의 크기 리턴 널문자 포함x
//문자열 입력 결함 예제
// #include <iostream>
// int main()
// {
//     using namespace std;
//     const int ArSize = 20;
//     char name[ArSize];
//     char dessert[ArSize];
//     cout << "이름:\n";
//     cin >> name;
//     cout << "좋아하는 디저트 입력:\n";
//     cin >> dessert;
//     cout << "맛있는 " << dessert;
//     cout << "디저트를 준비하겠습니다." << name << "님\n";
//     return 0;
// } 
//
// cin에게 문자열 끝을 알려 주는 다른 수단 필요
//getline() 함수 키보드 엔터키를 개행으로 인식해서 문자열 다 읽는다
// #include <iostream>
// int main()
// {
//     using namespace std;
//     const int ArSize = 20;
//     char name[ArSize];
//     char dessert[ArSize];
//     cout << "이름 입력:\n";
//     cin.getline(name,ArSize); //개행문자있는곳까지 읽는다
//     cout << "좋아하는 디저트:\n";
//     cin.getline(dessert,ArSize);
//     cout << "맛있는" << dessert;
//     cout << " 디저트를 준비하겠습니다." << name << "님\n";
//     return 0;
// }//getlin은 개행문자 읽어 널문자로 대체
// #include <iostream>
// int main()
// {
//     using namespace std;
//     const int ArSize = 20;
//     char name[ArSize];
//     char dessert[ArSize];
//     cout << "이름 입력:\n";
//     cin.get(name,ArSize).get();
//     cout << "좋아하는 디저트:\n";
//     cin.get(dessert,ArSize).get();
//     cout << "맛있는" << dessert;
//     cout << " 디저트를 준비하겠습니다." << name << "님\n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "지금 사는 아파트 언제 입주했나요\n";
//     int year;
//     cin >> year;
//     cin.get(); //개행문자 버리기용
//     cout << "살고있는 도시 어디인가요\n";
//     char address[80];
//     cin.getline(address,80);
//     cout << "입주년도: " << year << endl;
//     cout << "도시: " << address << endl;
//     cout << "등록 완료\n";
//     return 0;
// }//엔터가 만들어낸 개행 문자 입력 큐에 남겨져있어서 문제다

// #include <iostream>
// int main()
// {
//     using namespace std;
//     string s1 = "penguin";
//     string s2,s3;
//     cout << "string 객체를 string 객체에 대입할 수 있다: s2=s1\n";
//     s2=s1;
//     cout << "s1: " << s1 << ", s2: " << s2 << endl;
//     cout <<"string 객체에 c 스타일 문자열 대입가능\n";
//     cout <<"s2 =\"buzzard\"\n";
//     s2 = "buzzard";
//     cout << "s2: " << s2 << endl;
//     cout << "String 객체들 결합 가능: s3 = s1+s2\n";
//     s3 = s1+s2;
//     cout << "s3: " << s3 << endl;
//     cout << "string 객체 추가 가능\n";
//     s1 += s2;
//     cout << "s1 += s2 --> s1 = " << s1 << endl;
//     s2 += "for a day";
//     cout << "s2 += \" for a day\" --> s2 = " << s2 << endl;
//     return 0;
// }

// #include <iostream>
// struct inflatable
// {
//     char name[20];
//     float volume;
//     double price;
// };
// int main()
// {
//     using namespace std;
//     inflatable guest =
//     {
//         "Glorious Gloria",
//         1.88,
//         29.99
//     };
//     inflatable pal =
//     {
//         "Audacious Arthur",
//         3.12,
//         32.99
//     };
//     cout << "지금 판매하는 모형풍선은\n" << guest.name;
//     cout << "와" << pal.name << "입니다\n";
//     cout << "두 제품을 $";
//     cout << guest.price + pal.price << "에 드리겠습니다\n";
//     return 0;
// }

// #include <iostream>
// struct inflatable
// {
//     char name[20];
//     float volume;
//     double price;
// };
// int main()
// {
//     using namespace std;
//     inflatable guests[2]=
//     {
//         {"Bambi",0.5,21.99},
//         {"Godzilla", 2000,565.99}
//     };
//     cout << guests[0].name << "와" << guests[1].name
//          <<"의 부피를 합하면\n"
//          << guests[0].volume + guests[1].volume
//          <<" 세제곱피트\n";
//     return 0;
// }
//4장
//1.
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "영문 퍼스트 네임(이름): ";
//     char name[20];
//     cin.getline(name,20);
//     cout << "영문 라스트 네임(성): ";
//     char l_name[20];
//     cin.getline(l_name,20);
//     cout << "학생이 원하는 학점: ";
//     char score;
//     cin >> score;
//     cout << "나이: ";
//     int age;
//     cin >> age;
//     cout << "성명: " << l_name << ", " << name << endl;
//     cout << "학점: " << char(score+1) << endl;
//     cout << "나이: " << age << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     cout << "영문 퍼스트 네임(이름): ";
//     string f_name;
//     getline(cin,f_name);
//     cout <<"영문 라스트 네임(성): ";
//     string l_name;
//     getline(cin,l_name);
//     cout << "원하는 학점: ";
//     char score;
//     cin >> score;
//     cout << "나이: ";
//     int age;
//     cin >> age;
//     cin.get();
//     cout << "성명: " << l_name << ", " <<  f_name << endl;
//     cout << "학점: " << char(score+1) << endl;
//     cout << "나이: " << age << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     cout << "퍼스트 네임(이름)을 입력하시오: ";
//     string f_name;
//     getline(cin,f_name);
//     cout << "라스트 네임(성)을 입력하시요: ";
//     string l_name;
//     getline(cin,l_name);
//     string name = l_name + ", " + f_name;
//     cout << "하나의 문자열로 만들면: " << name << endl;
//     return 0;
// }
// #include <iostream>
// struct candybar{
//     char name[20];
//     double weight;
//     int kcal;
// };
// int main()
// {
//     using namespace std;
//     candybar snack = 
//     {
//         "Mocha Munch",
//         2.3,
//         350
//     };
//     cout << snack.name << endl;
//     cout << snack.weight << endl;
//     cout << snack.kcal << endl;
//     return 0;
// }
// #include <iostream>
// struct candybar{
//     char name[20];
//     double weight;
//     int kcal;
// };
// int main()
// {
//     using namespace std;
//     candybar snack [3]=
//     {
//         {"babamba",2.2,130},
//         {"merona", 1.5, 75},
//         {"bibibig",2.5,320}
//     };
//     cout << snack[0].name << " " <<  snack[0].weight << " " << snack[0].kcal << endl;
//     cout << snack[1].name << " " <<  snack[1].weight << " " << snack[1].kcal << endl;
//     cout << snack[2].name << " " <<  snack[2].weight << " " << snack[2].kcal << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// struct pizza{
//     char name[20];
//     double pie;
//     double weight;
// };
// int main()
// {
//     using namespace std;
//     pizza domino;
//     cout<< "피자 회사 이름입력: ";
//     cin.get(domino.name,20).get();
//     cout << "피자 지름 입력: ";
//     cin >> domino.pie;
//     cout <<"피자의 중량 입력: ";
//     cin >> domino.weight;
//     cout << domino.name << " " << domino.pie << " " << domino.weight << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// struct pizza{
//     double pie;
//     char name[20];
//     double weight;
// };
// int main()
// {
//     using namespace std;
//     pizza *pw = new pizza;
//     cout << "피자 지름을 입력: ";
//     cin >> pizza.pie;

//     return 0;
// }
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array<int,3> result;
//     cout << "첫번째 결과: ";
//     cin >> result[0];
//     cout << "두번째 결과: ";
//     cin >> result[1];
//     cout << "세번째 결과: ";
//     cin >> result[2];
//     cout << "40야드 3번 뛴 결과의 평균: " << (result[0]+result[1]+result[2])/3 << endl;
//     return 0;
// }
// #include <iostream>
// const int ArSize = 16;
// int main()
// {
//     long long factorial[ArSize];
//     factorial[1]= factorial[0]=1LL;
//     for (int i = 2; i < ArSize; i++)
//     {
//         factorial[i] = i*factorial[i-1];
//     }
//     for (int i = 0; i < ArSize; i++)
//     {
//         std::cout << i << "! = " << factorial[i] << std::endl;
//     }
//     return 0;
    
// }
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     cout << "동물 입력: ";
//     string word;
//     cin >> word;
//     for (int i = word.size()-1; i >=0; i--)
//     {
//         cout << word[i];
//     }
//     cout << "\n종료\n" << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "값 5개의 합계와 평균을 구합니다.\n";
//     cout << "값 5개를 입력하세요.\n";
//     double number;
//     double sum = 0.0;
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << "값 " << i << ": ";
//         cin >> number;
//         sum += number;
//     }
//     cout << "값 5개 입력완료 \n";
//     cout << "입력받은 값 5개의 합: " << sum << "입니다 \n";
//     cout << "입력받은 값 5개의 평균: " << sum/5 << "입니다. \n";
//     cout << "감사합니다.\n";
//     return 0;   
// }
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     cout << "단어 하나 입력: ";
//     string word;
//     cin >> word;
//     char temp;
//     int i,j;
//     for (j = 0, i= word.size()-1; j < i; --i, ++j)
//     {
//         temp = word[i];
//         word[i] = word[j];
//         word[j] = temp;
//     }
//     cout << word << "\n종료\n";
//     return 0;
    
// }

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word,"mate") ; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "루프가 끝난 후에 단어는 " << word <<"입니다.\n";
    return 0;
}

// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     string word = "?ate";
//     for (char ch = 'a'; word != "mate"; ch++)
//     {
//         cout << word << endl;
//         word[0] = ch;
//     }
//     cout << "루프가 끝난 후에 단어는 " << word << "입니다.\n";
//     return 0;
// }
// #include <iostream>
// const int ArSize = 20;
// int main()
// {
//     using namespace std;
//     char name[ArSize];
//     cout << "영문 이름을 입력: ";
//     cin >> name;
//     cout << "귀하의 영문 이름을 한줄에 한 자씩\n";
//     cout << "ASCII 코드와 함께 표시하면 이렇습니다. \n";
//     int i = 0;
//     while (name[i] != '\0') // 널문자 만나면 탈출
//     {
//         cout << name[i] << ": " << int(name[i]) << endl;
//         i++;
//     }
//     return 0;
// }
// #include <iostream>
// #include <ctime>
// int main()
// {
//     using namespace std;
//     cout << "지연 시간을 초 단위로 입력: ";
//     float secs;
//     cin >> secs;
//     clock_t delay = secs * CLOCKS_PER_SEC;
//     cout << "카운트 시작\a\b";
//     clock_t start = clock();
//     while (clock() - start <delay)
//         ;
//     cout << "종료 \a\n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int n;
//     cout << "1부터 10까지의 수 중에서 ";
//     cout << "내가 좋아하는 수를 한 번 맞춰보세요\n";
//     do
//     {
//         cin >> n;
//     } while (n !=7);
//     cout << "맞았습니다 제가 좋아하는 수는 7입니다.\n";
//     return 0;
    
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     char ch;
//     int count = 0;
//     cout << "문자들을 입력;끝내려면#을 입력하세요: \n";
//     while(ch != '#')
//     {
//         cout << ch;
//         ++count;
//         cin >> ch;
//     }
//     cout << endl << count << "문자를 읽었습니다. \n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     char ch;
//     int count = 0;
//     cout << "문자들을 입력 끝내려면 #을 입력:\n";
//     cin.get(ch);
//     while (ch !='#')
//     {
//         cout << ch;
//         ++count;
//         cin.get(ch);
//     }
//     cout << endl << count << " 문자를 읽었습니다. \n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     char ch;
//     int count = 0;
//     cin.get(ch);
//     while(cin.fail() == false) // !cin.fail() 입력 실패안하면 실행
//     {
//         cout << ch;
//         ++count;
//         cin.get(ch);
//     }
//     cout << count << " 문자를 읽었습니다. \n";
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     char ch;
//     int count = 0;
//     cin.get(ch);
//     while(cin) // 입력성공시 실행
//     {
//         cout << ch;
//         ++count;
//         cin.get(ch);
//     }
//     cout << count << " 문자를 읽었습니다. \n";
//     return 0;
// }
// #include <iostream>
// int main(void)
// {
//     using namespace std;
//     int ch;
//     int count = 0;
//     while ((ch = cin.get()) !=EOF)
//     {
//         cout.put(char(ch));
//         ++count;
//     }
//     cout << count << " 문자를 읽었습니다. \n";
//     return 0;
// }

// #include <iostream>
// const int Cities = 5;
// const int Years = 4;
// int main()
// {
//     using namespace std;
//     const char * cities[Cities]=
//     {
//         "Seoul",
//         "Jeju",
//         "Busan",
//         "Gangneung",
//         "Daegu"
//     };
//     int maxtemps[Years][Cities]=
//     {
//         {35, 32, 33, 36, 35},
//         {33, 32, 34, 35, 31},
//         {33, 34, 32, 35, 34},
//         {36, 35, 34, 37, 35},
//     };
//     cout << "2009년부터 2012년까지의 연중 최고 온도\n\n";
//     for (int city = 0; city < Cities; ++city)
//     {
//         cout << cities[city] << ":\t";
//         for (int year = 0; year < Years; ++year)
//         {
//             cout << maxtemps[year][city] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//5장 문제
//1.
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "두 개의 정수 입력: ";
//     int num1,num2;
//     cin >> num1;
//     cin >> num2;
//     int result = 0;
//     while(num1<=num2)
//     {
//         result += num1;
//         num1++;
//     }
//     cout << "합: " << result << endl;
//     return 0;
// }
//2
// #include <iostream>
// const long double array = 101;
// int main()
// {
//     long double factorial[101];
//     factorial[1]= factorial[0]=1LL;
//     for (int i = 2; i < array; i++)
//     {
//         factorial[i] = i*factorial[i-1];
//     }
//     for (int i = 0; i < array; i++)
//     {
//         std::cout << i << "! = " << factorial[i] << std::endl;
//     }
//     return 0;
// }
//3.
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "수를 입력: ";
//     int press;
//     int count = 0;
//     cin >> press;
//     while(press !=0)
//     {
//         cout << press << endl;
//         ++count;
//         cin >> press;
//     }
//     cout << "입력한 문자수: " << count << endl;
//     return 0;
// }
//4.
// #include <iostream>
// int main()
// {

// }