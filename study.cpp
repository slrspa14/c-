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

// #include <iostream>
// #include <cstring>
// int main()
// {
//     using namespace std;
//     char word[5] = "?ate";

//     for (char ch = 'a'; strcmp(word,"mate") ; ch++)
//     {
//         cout << word << endl;
//         word[0] = ch;
//     }
//     cout << "루프가 끝난 후에 단어는 " << word <<"입니다.\n";
//     return 0;
// }

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
//     {장
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
//매개변수 2개 사용하는 함수
// #include <iostream>
// using namespace std;
// void n_chars(char,int);
// int main()
// {
//     int times;
//     char ch;
//     cout << "문자 하나 입력: ";
//     cin >> ch;
//     while(ch != 'q') 
//     {
//         cout << "정수 하나 입력: ";
//         cin >> times;
//         n_chars(ch, times);
//         cout << "\n계속하려면 다른 문자 입력"
//                 "끝내려면 q를 눌러주세요: ";
//         cin >> ch;
//     }
//     cout << "현재 times의 값은" << times << "입니다.\n";
//     cout << "프로그램 종료\n";
//     return 0;
// }
// void n_chars(char c, int n) // c n번 출력
// {
//     while (n-- > 0) //n 0될때까지
//         cout << c;
// }
//승률 구하기
// #include <iostream>
// long double probability(unsigned numbers, unsigned picks);
// int main()
// {
//     using namespace std;
//     double total, choices;
//     cout << "전체 수의 개수와 뽑을 수의 개수 입력:\n";
//     while((cin>>total >> choices) && choices <=total)
//     {
//         cout << "당신이 이길 확률은 ";
//         cout << probability(total, choices);
//         cout << "번 중에서 한 번입니다.\n";
//         cout << "다시 두 수를 입력하십시오. (끝내려면 q를 입력): ";
//     }
//     cout << "프로그램 종료 \n";
//     return 0;
// }
// long double probability(unsigned numbers, unsigned picks)
// {
//     long double result = 1.0;
//     long double n;
//     unsigned p;
//     for(n = numbers,p=picks ; p >0 ; n--,p--)
//         result = result *n/p;
//     return result;
// }
// 배열 매개변수를 사용하는 함수
// #include <iostream>
// const int ArSize = 8;
// int sum_arr(int arr[], int n);
// int main()
// {
//     using namespace std;
//     int cookies[ArSize] = {1,2,4,8,16,32,64,128};
//     int sum = sum_arr(cookies, ArSize); // 배열 이름 크기 전달 *arr 과 같다 배열의 이름은 첫 번째 원소의 주소값
//     cout << "먹은 과자 수 합계: " << sum << "\n";
//     return 0;
// }
// int sum_arr(int arr[], int n)
// {
//     int total = 0;
//     for (int i = 0; i < n; i++)
//     {
//         total = total + arr[i];
//     }
//     return total;
// }
// #include <iostream>
// const int ArSize = 8; // 상수 배열 8크기 지정
// int sum_arr(int arr[], int n); // 함수
// int main()
// {
//     int cookies[ArSize] = {1,2,4,8,16,32,64,128}; 
//     std::cout << cookies << " = 배열주소, "; // 배열이름은 배열 첫번째 원소 주소값
//     std::cout <<"sizeof cookies = " <<sizeof cookies << std::endl; // 배열 전체의 크기
//     int sum = sum_arr(cookies, ArSize);
//     std::cout <<"먹은 과자 수 합계: " << sum << std::endl;
//     sum = sum_arr(cookies,3);
//     std::cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다. \n";
//     sum = sum_arr(cookies + 4, 4); //&cookies[4]로도 가능
//     std::cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다. \n";
//     return 0;
// }
// int sum_arr(int arr[], int n)
// {
//     int total = 0;
//     std::cout << arr <<" = arr, ";
//     std::cout << "sizeof arr = " << sizeof arr << std::endl; // 포인터 변수의 크기기
//     for (int i = 0; i < n; i++)
//     {
//         total = total +arr[i];
//     }
//     return total;
// }
// 부동산예제
// #include <iostream>
// const int Max = 5;
// int fill_array(double ar[], int limit);
// void show_array(const double ar[], int n);
// void revalue(double r, double ar[], int n);
// int main()
// {
//     using namespace std;
//     double properties[Max];

//     int size = fill_array(properties,Max);
//     show_array(properties, size);
//     if(size > 0)
//     {
//         cout << "재평가율을 입력: ";
//         double factor;
//         while(!(cin >> factor))
//         {
//             cin.clear();
//             while(cin.get() != '\n')
//                 continue;
//             cout <<"잘못 입력 수치입력: ";
//         }
//         revalue(factor, properties, size);
//         show_array(properties, size);
//     }
//     cout << "프로그램 종료 \n";
//     cin.get();
//     cin.get();
//     return 0;
// }
// int fill_array(double ar[], int limit)
// {
//     using namespace std;
//     double temp;
//     int i;
//     for ( i = 0; i < limit; i++)
//     {
//         cout << (i+1) << "번 부동산의 가격: $";
//         cin >> temp;
//         if(!cin)
//         {
//             cin.clear();
//             while(cin.get() != '\n')
//                 continue;
//             cout << "입력 불량 입력과정을 끝내겠습니다. \n";
//             break;
//         }
//         else if(temp<0)
//             break;
//         ar[i] = temp;
//     }
//     return i;
// }
// void show_array(const double ar[], int n)
// {
//     using namespace std;
//     for (int i = 0; i < n; i++)
//     {
//         cout << (i+1) << "번 부동산: $";
//         cout << ar[i] << endl;
//     }
    
// }
// void revalue(double r, double ar[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         ar[i] *=r;
//     }
    
// }
//배열 범위를 사용하는 함수
// #include <iostream>
// const int ArSize = 8;
// int sum_arr(const int *begin, const int *end);
// int main()
// {
//     using namespace std;
//     int cookies[ArSize] = {1,2,4,8,16,32,64,128};
//     int sum = sum_arr(cookies,cookies+ArSize);
//     cout << "먹은 과자 수 합계: " << sum << endl;
//     sum = sum_arr(cookies, cookies+3);
//     cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다. \n" ;
//     sum = sum_arr(cookies + 4, cookies + 8);
//     cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다. \n";
//     return 0;
// }
// int sum_arr(const int *begin, const int* end)
// {
//     const int * pt;
//     int total = 0;
//     for (pt = begin; pt != end; pt++)
//     {
//         total = total +*pt;
//     }
//     return total;
// }
//const float g_earth = 9.80;
//const float *pe = &g_earth; // 사용가능
//g_earth나 pe로 값 변경 가능
// const float g_moon = 1.63;
// float *pm = &g_moon; // 사용할 수 없음
//pm으로 값 변경 가능하면 const가 왜 달린겨
//int sloth = 3
// int sloth2 = 4
// const int *ps = &sloth // const int를 지시하는 포인터
// int * const finger = &sloth // int를 지시하는 const 포인터
// ps로 sloth의 값을 변경하는 것은 불가능하지만
// 다른 변수를 지시할 수 있다. ex) const int *ps = &sloth2
// finger로 sloth의 값을 변경하는 것은 가능하지만
// 지시하는 변수를 변경 할 수 없다.
//2차원 배열
// int data[3][4];
// int total = sum(data,3) //함수 호출시 행 전달
// #include <iostream>
// unsigned int c_in_str(const char * str, char ch);
// int main()
// {
//     using namespace std;
//     char mmm[15] = "minimun";
//     char *wail = "ululate";
//     unsigned int ms = c_in_str(mmm, 'm');
//     unsigned int us = c_in_str(wail,'u');
//     cout <<mmm << "에는 m이 " <<ms << "개 들어 있습니다. \n";
//     cout << wail << "에는 u가 " << us << "개 들어 있습니다. \n";
//     return 0;
// }
// unsigned int c_in_str(const char * str, char ch)
// {
//     int count = 0;
//     while(*str) // *str가 '\0'이면 루프 탈출
//     {
//         if(*str == ch)
//             count++;
//         str++;
//     }
//     return count;
// }
// char 형 지시하는 포인터 리턴하는 함수
// #include <iostream>
// char *buildstr(char c, int n);
// int main()
// {
//     using namespace std;
//     int times;
//     char ch;
//     cout <<"문자 하나 입력: ";
//     cin >> ch;
//     cout <<"정수 하나 입력: ";
//     cin >> times;
//     char *ps = buildstr(ch, times);
//     cout << ps << endl;
//     delete [] ps;
//     ps = buildstr('+', 20);
//     cout << ps << "-DONE-" << ps << endl;
//     delete [] ps;
//     return 0;
// }
// char *buildstr(char c, int n)
// {
//     char *pstr = new char[n+1]; // 동적할당
//     pstr[n] = '\0'; // 끝에 널문자 삽입해서 문자열 종결
//     while (n-- > 0)
//         pstr[n] = c;
//     return pstr;
// }
//함수와 구조체
// #include <iostream>
// struct travel_time
// {
//     int hours;
//     int mins;
// };
// const int Mins_per_hr = 60;
// travel_time sum(travel_time t1, travel_time t2);
// void show_time(travel_time t);
// int main()
// {
//     using namespace std;
//     travel_time day1 = {5,45};
//     travel_time day2 = {4,55};

//     travel_time trip = sum(day1, day2);
//     cout << "이틀간 소요시간: ";
//     show_time(trip);

//     travel_time day3 = {4, 32};
//     cout << "사흘간 소요시간: ";
//     show_time(sum(trip,day3));
//     return 0;
// }
// travel_time sum(travel_time t1, travel_time t2)
// {
//     travel_time total;
//     total.mins = (t1.mins + t2.mins) % Mins_per_hr;
//     total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
//     return total;
// }
// void show_time(travel_time t)
// {
//     using namespace std;
//     cout << t.hours << "시간 "
//          << t.mins << "분 \n";
// }
//구조체 매개변수를 사용하는 함수
// #include <iostream>
// #include <cmath>
// struct polar
// {
//     double distance;
//     double angle;
// };
// struct rect
// {
//     double x;
//     double y;
// };
// polar rect_to_polar(rect xypos);
// void show_polar(polar dapos);
// int main()
// {
//     using namespace std;
//     rect rplace;
//     polar pplace;
//     cout << "x값과 y값을 입력하십시오: ";
//     while(cin >> rplace.x >> rplace.y)
//     {
//         pplace = rect_to_polar(rplace);
//         show_polar(pplace);
//         cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력): ";
//     }
//     cout << "프로그램을 종료 \n";
//     return 0;
// }
// polar rect_to_polar(rect xypos)
// {
//     using namespace std;
//     polar answer;

//     answer.distance = 
//         sqrt(xypos.x * xypos.x + xypos.y * xypos.y); //34
//     answer.angle = atan2(xypos.y, xypos.x); // 5,3
//     return answer;
// }
// void show_polar(polar dapos)
// {
//     using namespace std;
//     const double Rad_to_deg = 57.29577951;
//     cout << "거리 = " <<dapos.distance;
//     cout << ", 각도 = " << dapos.angle * Rad_to_deg;
//     cout << "도 \n";
// }
// 구조체 매개변수를 지시하는 포인터를 사용하는 함수
// #include <iostream>
// #include <cmath>
// struct polar
// {
//     double distance;
//     double angle;
// };
// struct rect
// {
//     double x;
//     double y;수
// };
// void rect_to_polar(const rect* pxy, polar *pda);
// void show_polar(const polar *pda);
// int main()
// {
//     using namespace std;
//     rect rplace;
//     polar pplace;
//     cout << "x값과 y값을 입력하십시오: ";
//     while(cin >> rplace.x >> rplace.y)
//     {
//         rect_to_polar(&rplace,&pplace);
//         show_polar(&pplace);
//         cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력): ";
//     }
//     cout << "프로그램을 종료 \n";
//     return 0;
// }
// void show_polar(const polar *pda)
// {
//     using namespace std;
//     const double Rad_to_deg = 57.29577951;
//     cout << "거리 = " << pda -> distance;
//     cout << ", 각도 = " << pda ->angle * Rad_to_deg;
//     cout << "도\n";
// }
// void rect_to_polar(const rect *pxy, polar *pda)
// {
//     using namespace std;
//     pda -> distance = 
//         sqrt(pxy -> x* pxy->x + pxy->y * pxy-> y);
//     pda -> angle = atan2(pxy->y,pxy->x);
// }
// string 객체의 배열 처리
// #include <iostream>
// #include <string>
// using namespace std;
// const int SIZE = 5;
// void display(const string sa[], int n);
// int main()
// {
//     string list[SIZE];
//     cout << "좋아하는 밤하늘의 광경을 " << SIZE << "개 입력하시요:\n";
//     for (int i = 0; i < SIZE; i++)
//     {
//         cout << i+1 << ": ";
//         getline(cin,list[i]);
//     }
//     cout << "입력하신 내용은 다음과 같습니다: \n";
//     display(list,SIZE);
//     return 0;
// }
// void display(const string sa[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << i+1 << ": " << sa[i] << endl;
//     } 
// }
// array 객체에 대한 기능
// #include <iostream>
// #include <array>
// #include <string>
// const int Seasons = 4;
// const std::array<std::string, Seasons> Sname =
//     {"Spring","Summer","Fall","Winter"};
// void fill(std::array<double,Seasons> *pa); //array 객체를 수정하는 기능
// void show(std::array<double, Seasons> da); // 수정하지 않고 객체를 사용하는 기능
// int main()
// {
//     std::array<double, Seasons> expenses;
//     fill(&expenses);
//     show(expenses);
//     return 0;
// }
// void fill(std::array<double, Seasons> *pa)
// {
//     using namespace std;
//     for (int i = 0; i < Seasons; i++)
//     {
//         cout << Sname[i] << "에 소요되는 비용: ";
//         cin >> (*pa) [i];
//     }
// }
// void show(std::array<double, Seasons> da)
// {
//     using namespace std;
//     double total = 0.0;
//     cout << "\n계절별 비용S\n";
//     for (int i = 0; i < Seasons; i++)
//     {
//         cout << Sname[i] << " : $" << da[i] << endl;
//         total += da[i];
//     }
//     cout << "총비용 :$" << total << endl;
    
// }
//재귀함수
// #include <iostream>
// void countdown(int n);
// int main()
// {
//     countdown(4);
//     return 0;
// }
// void countdown(int n)
// {
//     using namespace std;
//     cout << "카운트다운....." << n << endl;
//     if (n>0)
//     {
//         countdown(n-1);
//     }
//     cout << n << ": Kaboom\n";
// }

// #include <iostream>
// const int Len = 66;
// const int Divs = 6;
// void subdivide(char ar[], int low, int high, int level);
// int main()
// {
//     char ruler[Len];
//     int i;
//     for ( i = 0; i < Len - 2; i++)
//     {
//         ruler[i] =' ';
//     }
//     ruler[Len-1] = '\0';
//     int max = Len -2;
//     int min = 0;
//     ruler[min] = ruler[max] = '|';
//     std::cout << ruler << std::endl;
//     for ( i = 1; i <= Divs; i++)
//     {
//         subdivide(ruler, min, max, i);
//         std::cout << ruler << std::endl;
//         for (int j = 1; j < Len-2; j++)
//         {
//             ruler[j] = ' ';
//         }
//     }
//     return 0;
// }
// void subdivide(char ar[], int low, int high, int level)
// {
//     if (level == 0)
//         return;
//     int mid = (high + low) / 2;
//     ar[mid] = '|';
//     subdivide(ar,low,mid,level-1);
//     subdivide(ar,mid,high,level-1);
// }
//함수를 지시하는 포인터
// #include <iostream>
// double gildong(int);
// double moonsoo(int); // 두번째 매개변수는 int형을 매개변수로 취하는 double형 함수를 지시하는 포인터
// void estimate(int lines, double (*pf)(int));
// int main()
// {
//     using namespace std;
//     int code;
//     cout << "필요한 코드의 행 수를 입력: ";
//     cin >> code;
//     cout << "홍길동의 시간 예상:\n";
//     estimate(code, gildong);
//     cout << "박문수의 시간 예상:\n";
//     estimate(code, moonsoo);
//     return 0; //흠
// }
// double gildong(int lns)
// {
//     return 0.05 *lns;
// }
// double moonsoo(int lns)
// {
//     return 0.03 * lns + 0.0004 * lns *lns;
// }
// void estimate(int lines, double (*pf)(int))
// {
//     using namespace std;
//     cout << lines << "행을 작성하는데 ";
//     cout << (*pf)(lines) << "시간이 걸립니다\n";
// }
// #include <iostream>
// const double *f1(const double ar[], int n);
// const double *f2(const double [], int);
//const double *f3(const double *, int);
// int main()
// {
//     using namespace std;
//     double av[3] = {1112.3, 1542.6, 2227.9};
//     const double *(*p1)(const double *, int ) = f1;
//     auto p2 = f2; // c++ 자동 형변환

//     cout << "함수 포인터:\n";
//     cout << "주소 값\n";
//     cout << (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
//     cout << p2(av,3) << ": " << *p2(av,3) << endl;

//     const double *(*pa[3])(const double *, int) = {f1,f2,f3};
//     auto pb = pa;
//     cout << "\n함수 포인터를 원소로 가지는 배열:\n";
//     cout << "주소 값\n";
//     for(int i= 0 ; i<3 ; i++)
//         cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;

//     cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터:\n";
//     cout << "주소 값\n";
//     auto pc = &pa;
//     cout << (*pc) [0](av,3) <<": " << *(*pc)[0](av,3) << endl;
//     const double *(*(*pd)[3])(const double *, int) = &pa;
//     const double *pdb = (*pd)[1](av,3);
//     cout << pdb << ": " <<*pdb << endl;
//     //cout << (*(*pd)[2])(av,3) << ": " << *(*(pd)[2])(av,3) << endl;
//     return 0;
// }
// const double *f1(const double ar[], int n)
// {
//     return ar;
// }
// const double *f2(const double ar[], int n)
// {
//     return ar+1;
// }
// const double *f3(const double ar[], int n)
// {
//     return ar+2;
// }

// //cctype 라이브러리
// #include <iostream>
// #include <cctype> // 문자관련 함수 원형
// int main()
// {
//     using namespace std;
//     cout << "분석할 텍스트 입력 ""입력의 끝을형 @로 표시하세요\n";
//     char ch;
//     int whitespace = 0;
//     int digits = 0;
//     int chars = 0;
//     int punct = 0;
//     int others = 0;
//     cin.get(ch);
//     while (ch !='@')
//     {
//         if (isalpha(ch))
//             chars++;
//         else if(isspace(ch))
//             whitespace++;
//         else if(isdigit(ch))
//             digits++;
//         else if(ispunct(ch))
//             punct++;
//         else
//             others++;
//         cin.get(ch);
//     }
//     cout << "알파벳 " << chars << ", "
//          << "화이트스페이스 " << whitespace << ", "
//          << "숫자 " << digits << ", "
//          << "구두점 " << punct << ", "
//          << "기타 " << others << endl;
//     return 0;
// }
//삼항연산자
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int a, b;
//     cout << "두개의 정수 입력: ";
//     cin >> a >> b;
//     cout << "더 큰 정수는 ";
//     int c = a>b ? a:b; // a> b 이면 c = a 아니면 c = b
//     cout << c << "입니다.\n";
//     return 0;
// }
//switch
// #include <iostream>
// using namespace std;
// void showmenu();
// void report();
// void comfort();
// int main()
// {
//     showmenu();
//     int choice;
//     cin >> choice;
//     while (choice !=5)
//     {
//         switch (choice)
//         {
//             case 1:     cout << "\a\n";
//                                 break;
//             case 2:     report();
//                                 break;
//             case 3:     cout << "사장님은 오늘 회사에 계셨습니다.\n";
//                                 break;
//             case 4:     comfort();
//                                 break;
//             default :   cout << "그것은 선택할 수 없습니다.\n";
//         }                       
//         showmenu();
//         cin >> choice;
//     }
//     cout << "프로그램을 종료\n";
//     return 0;
// }
// void showmenu()
// {
//     cout << "1,2,3,4,5번중에서 하나를 선택:\n"
//             "1)경고음           2)보고서\n"
//             "3)알리바이         4)격려사\n"
//             "5)종료\n";
// }
// void report()
// {
//     cout << "이번 분기는 경영 실적이 아주 좋습니다.\n"
//             "판매량은 120% 늘었고 비용은 35% 줄었습니다.\n";
// }
// void comfort()
// {
//     cout << "사원들은 당신을 업계 최고의 CEO라고 생각하고 있습니다.\n"
//             "이 사회도 당신을 업계 최고의 CEO라고 생각하고 있습니다\n";
// }
//열거체 스위치
// #include <iostream>
// enum{red, orange, yellow, green, blue, violet, indigo};
// int main()
// {
//     using namespace std;
//     cout << "컬러 코드 (0,1,2,3,4,5,6) 입력: ";
//     int code;
//     cin >> code;
//     while (code >= red && code <= indigo)
//     {
//         switch(code)
//         {
//             case red : cout << "입술은 붉었습니다. \n"; break;
//             case orange: cout << "머리카락은 귤색\n"; break;
//             case yellow: cout << "신발은 노랑\n"; break;
//             case green : cout << "손톱은 초록\n"; break;
//             case blue : cout << "스웨터는 파랑\n"; break;
//             case violet : cout << "눈은 보라색\n"; break;
//             case indigo : cout << "분위기는 쪽빛이었습니다.\n"; break;
//         }
//         cout << "컬러 코드 (0,1,2,3,4,5,6) 입력: ";
//         cin >> code;
//     }
//     cout << "프로그램 종료\n";
//     return 0;
// }
//입력으로 루프 종료
// #include <iostream>
// const int Max = 5;
// int main()
// {
//     using namespace std;
//     double fish[Max];
//     cout << "오늘 낚은 물고기의 무게 입력\n";
//     cout << "물고기는 최대 " << Max <<"마리까지 낚을 수 있습니다.\n"
//          << "<입력을 끝내려면 q 입력>\n";
//     cout << "fish #1: ";
//     int i = 0;
//     while(i<Max && cin >> fish[i])
//     {
//         if(++i<Max)
//             cout << "fish #" << i+1 << ": ";
//     }
//     double total = 0.0;
//     for (int j = 0; j < i; j++)
//     {
//         total += fish[j];
//     }
//     if(i==0)
//         cout << "물고기를 한 마리도 못 낚았군요\n";
//     else
//         cout << "물고기 " << i << "마리의 평균 무게는 "
//              << total/i << "그램입니다.\n";
//     cout << "프로그램 종료\n";
//     return 0;
    
// }
// #include <iostream>
// const int Max = 5;
// int main()
// {
//     using namespace std;
//     int golf[Max];
//     cout << "골프 점수 입력\n";
//     cout << "총" << Max << " 라운드 점수를 입력해야 합니다.\n";
//     int i;
//     for ( i = 0; i < Max; i++)
//     {
//         cout << "round #" << i+i << ": ";
//         while(!(cin >> golf[i]))
//         {
//             cin.clear();
//             while(cin.get() != '\n')
//                 continue;
//             cout << "골프 점수 입력: ";
//         }
//     }
//     double total = 0.0;
//     for(i=0 ; i<Max ; i++)
//         total += golf[i];
//     cout << "총 " << Max << "라운드의 평균 점수 = "
//          << total/Max << endl;
//     return 0;
// }
// #include <iostream>
// #include <fstream> //파일 I/O 용
// int main()
// {
//     using namespace std;
//     char automobile[50];
//     int year;
//     double a_price;
//     double d_price;

//     ofstream outFile; // 출력을 위한 객체 생성
//     outFile.open("carinfo.txt"); // 파일에 연결

//     cout << "자동차 메이커와 차종 입력: ";
//     cin.getline(automobile, 50);
//     cout << "연식 입력: ";
//     cin >> year;
//     cout << "구입 가격 입력: ";
//     cin >> a_price;
//     d_price = 0.913 * a_price;
//     cout << fixed;
//     cout.precision(2);
//     cout.setf(ios_base::showpoint);
//     cout << "메이커와 차종: " << automobile << endl;
//     cout << "연식: " << year << endl;
//     cout << "구입 가격$" << a_price << endl;
//     cout << "현재 가격$" << d_price << endl;

//     //cout 대신 outFile을 사용해도 똑같음
//     outFile << fixed;
//     outFile.precision(2);
//     outFile.setf(ios_base::showpoint);
//     outFile << "메이커와 차종: " << automobile << endl;
//     outFile <<"연식: " << year << endl;
//     outFile << "구입가격$" << a_price << endl;
//     outFile << "현재가격$" << d_price << endl;
//     outFile.close(); //파일처리 종료
//     return 0;
// }
// #include <iostream>
// #include <fstream>  //파일 I/O 지원
// #include <cstdlib> // exit 지원
// const int SIZE = 60;
// int main()
// {
//     using namespace std;
//     char filename[SIZE];
//     ifstream inFile; // 파일 입력을 처리하기 위한 객체
//     cout << "데이터 파일의 이름 입력: ";
//     cin.getline(filename, SIZE);
//     inFile.open(filename); // inFile을 파일에 연결
//     if(!inFile.is_open()) // 파일 오픈 실패시
//     {
//         cout << filename << "파일을 열 수 없습니다. " << endl;
//         cout << "프로그램 종료\n";
//         exit(EXIT_FAILURE);
//     }
//     double value;
//     double sum = 0.0;
//     int count =0; // 읽은 항목 개수

//     inFile >> value; // 첫번째 값을 얻는다
//     while (inFile.good()) // 입력 양호 EOF 아닌동안
//     {
//         ++count; // 항목개수 추가
//         sum += value; // 값 저장
//         inFile >> value; // 다음값
//     }
//     if (inFile.eof())
//         cout << "파일 끝 도달\n";
//     else if(inFile.fail())
//         cout << "데이터 불일치 입력 종료\n";
//     else 
//         cout << "알 수 없는 이유로 입력 종료\n";
//     if(count == 0)
//         cout << "데이터가 없습니다.\n";
//     else
//     {
//         cout << "읽은 항목의 개수: " << count << endl;
//         cout << "합계: " << sum << endl;
//         cout << "평균: " << sum/count << endl;
//     }
//     inFile.close(); //종료
//     return 0;
// }
//유튜브보다
// #include <iostream>
// void swap(int &a, int &b);
// int main()
// {
//     using namespace std;
//     int x=10, y=20;
//     cout << x << " " << y << endl;
//     swap(x,y);
//     cout << x << " " << y << endl;
//     return 0;
// }
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
//inline 예제
// #include <iostream>
// inline double square(double x) { return x *x;}

// int main()
// {
//     using namespace std;
//     double a,b;
//     double c = 13.0;
//     a = square(5.0);
//     b = square(4.5+7.5);
//     cout << "a = " << a << ", b = " << b << endl;
//     cout << "c = " << c;
//     cout << ", c의 제곱 = " << square(c++) << endl;
//     cout << "현재 c = " << c << endl;
//     return 0;
// }
//참조 변수의 정의와 사용
//참조 선언할 때 참조 변수를 함께 초기화 해야 함
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int rats = 101;
//     int &rodents = rats; // 참조변수 선언

//     cout << "rats = " << rats;
//     cout << ", rodents = " << rodents << endl;
//     rodents++;
//     cout << "rats = " << rats;
//     cout << ", rodents = " << rodents << endl;

//     cout << "rats의 주소 = " << &rats;
//     cout << ", rodents의 주소 = " << &rodents << endl;
//     return 0;
// }
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int rats = 101; 
//     int &rodents = rats; // 101을 가르키는 또다른 변수이름 참조변수
// rats 참조해서 rodents도 101 가르킴

//     cout << "rats = " << rats;
//     cout << ", rodents = " << rodents << endl;
//     cout << "rats의 주소 = " << &rats;
//     cout << ", rodents의 주소 = " << &rodents << endl;

//     int bunnies = 50;
//     rodents = bunnies;
//     cout << "bunnies = " << bunnies;
//     cout << ", rats = " << rats;
//     cout << ", rodents = " << rodents << endl;
//     cout << "bunnies의 주소 = " << &bunnies;
//     cout << ", rodents의 주소 = " << &rodents << endl;
//     return 0;
// }

//참조를 이용한 교환과 포인터를 이용한 교환
// #include <iostream>
// void swapr(int &a, int &b);
// void swapp(int *p, int *q);
// void swapv(int a, int b);
// int main()
// {
//     using namespace std;
//     int wallet1 = 3000;
//     int wallet2 = 3500;
//     cout << "지갑 1 = " << wallet1 << "원";
//     cout << ", 지갑2 = " << wallet2 << "원\n";

//     cout << "참조를 이용하여 내용들을 교환:\n";
//     swapr(wallet1,wallet2);
//     cout << "지갑1 = " << wallet1 << "원";
//     cout << ", 지갑2 = " << wallet2 << "원\n";

//     cout << "포인터를 이용하여 내용들을 다시 교환:\n";
//     swapp(&wallet1, &wallet2);
//     cout << "지갑1 = " << wallet1 << "원";
//     cout << ", 지갑2 = " << wallet2 << "원\n";

//     cout << "값으로 전달하여 내용 교환 시도:\n";
//     swapv(wallet1, wallet2);
//     cout << "지갑1 = " << wallet1 << "원";
//     cout << ", 지갑2 = " << wallet2 << "원\n";
//     return 0;
// }
// void swapr(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void swapp(int *p, int *q)
// {
//     int temp;
//     temp = *p;
//     *p = *q;
//     *q = temp;
// }
// void swapv(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// 일반 매개변수와 참조 매개변수
// #include <iostream>
// double cube(double a);
// double refcube(double &ra);
// int main()
// {
//     using namespace std;
//     double x = 3.0;

//     cout << cube(x);
//     cout << " = " << x << "의 세제곱\n";
//     cout << refcube(x);
//     cout << " = " << x << "의 세제곱\n";
//     return 0;
// }
// double cube(double a)
// {
//     a *= a*a;
//     return a;
// }
// double refcube(double &ra) // 참조전달이라 원본에 영향감
// {
//     ra *= ra * ra;
//     return ra;
// }
//8장
// #include <iostream>
// #include <string>
// struct free_throws
// {
//     std::string name;
//     int made;
//     int attempts;
//     float percent;
// };
// void display(const free_throws &ft);
// void set_pc(free_throws &ft);
// free_throws & accumulate(free_throws & target, const free_throws &source);
// int main()
// {
//     free_throws one = {"Ifelsa Branch", 13, 14};
//     free_throws two = {"Andor Knott", 10, 16};
//     free_throws three = {"Minnie Max", 7, 9};
//     free_throws four = {"Whily Looper", 5, 9};
//     free_throws five = {"Long Long",6,14};
//     free_throws team = {"Throwgoods", 0, 0};

//     free_throws dup;
//     set_pc(one);
//     display(one);
//     accumulate(team,one);
//     display(team);
//     display(accumulate(team,two));
//     accumulate(accumulate(team,three),four);
//     display(team);

//     dup = accumulate(team,five);
//     std::cout << "team 출력:\n";
//     display(team);
//     std::cout << "대입 이후 dup 출력:\n";
//     display(dup);
//     set_pc(four);

//     accumulate(dup,five) = four;
//     std::cout << "문제 소지가 있는 대입 이후 dup 출력:\n";
//     display(dup);
//     return 0;
// }
// void display(const free_throws &ft)
// {
//     using std::cout;
//     cout << "Name: " << ft.name << '\n';
//     cout << "Made: " << ft.made << '\t';
//     cout << "Attempts: " << ft.attempts << '\t';
//     cout << "Percent: " << ft.percent <<'\n';
// }
// void set_pc(free_throws &ft)
// {
//     if(ft.attempts !=0)
//         ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
//     else
//         ft.percent = 0;
// }
// free_throws & accumulate(free_throws & target, const free_throws &source)
// {
//     target.attempts += source.attempts;
//     target.made += source.made;
//     set_pc(target);
//     return target;
// }
//클래스 객체와 참조
// #include <iostream>
// #include <string>
// using namespace std;
// string version1(const string &s1, const string &s2);
// const string & version2(string &s1, const string & s2);
// const string & version3(string &s1, const string & s2);
// int main()
// {
//     string input;
//     string copy;
//     string result;

//     cout << "문자열 입력: ";
//     getline(cin,input);
//     copy = input;
//     cout << "입력한 문자열: " << input << endl;
//     result = version1(input, "***");
//     cout << "바뀐 문자열: " << result << endl;
//     cout << "원래 문자열: " << input << endl;

//     result = version2(input, "###");
//     cout << "바뀐 문자열: " << result << endl;
//     cout << "원래 문자열: " << input << endl;

//     cout << "원래 문자열 재설정\n";
//     input = copy;
//     result = version3(input, "@@@");
//     cout << "바뀐 문자열: " << result << endl;
//     cout << "원래 문자열: " << input << endl;
//     return 0;
// }
// string version1(const string & s1, const string & s2)
// {
//     string temp;
//     temp = s2+s1+s2;
//     return temp;
// }
// const string &version2(string &s1, const string &s2)
// {
//     s1 = s2+s1+s2; // 함수에 전달된 참조를 리턴하므로 안전전
//     return s1;
// }
// const string & version3(string & s1, const string &s2)
// {
//     string temp;
//     temp = s2+s1+s2; // 지역변수에 대한 참조를 리턴하므로 안전하지 않다
//     return temp;
// }
// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// using namespace std;
// void file_it(ostream & os, double fo, const double fe[], int n);
// const int LIMIT = 5;
// int main()
// {
//     ofstream fout;
//     const char *fn = "ep-data.txt";
//     fout.open(fn);
//     if (!fout.is_open())
//     {
//         cout << fn << "파일을 열 수 없습니다. 끝\n";
//         exit(EXIT_FAILURE);
//     }
//     double objective;
//     cout << "대물렌즈 초점거리를 "
//             " mm 단위로 입력하십시오: ";
//     cin >> objective;
//     double eps[LIMIT];
//     cout << LIMIT << "가지 대안렌즈의 초점거리를 "
//                      "mm 단위로 입력:\n";
//     for (int i = 0; i < LIMIT; i++)
//     {
//         cout << "대안렌즈 #" << i+1 << ": ";
//         cin >> eps[i];
//     }
//     file_it(fout, objective, eps, LIMIT);
//     file_it(cout, objective, eps, LIMIT);
//     cout << "종료\n";
//     return 0;
// }
// void file_it(ostream & os, double fo, const double fe[], int n)
// {
//     ios_base::fmtflags initial;
//     initial = os.setf(ios_base::fixed);
//     os.precision(0);
//     os << "대물렌즈의 초점거리: " << fo << "mm\n";
//     os.setf(ios::showpoint);
//     os.precision(1);
//     os.width(17);
//     os << "대안렌즈 초점거리";
//     os.width(15);
//     os << "확대배율" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         os.width(17);
//         os << fe[i];
//         os.width(15);
//         os << int (fo/fe[i] + 0.5) << endl;
//     }
//     os.setf(initial);
// }

// #include <iostream>
// const int ArSize = 80;
// char *left(const char * str, int n =1);
// int main()
// {
//     using namespace std;
//     char sample[ArSize];
//     cout << "문자열을 입력:\n";
//     cin.get(sample,ArSize);
//     char *ps = left(sample,4);
//     cout << ps << endl;
//     delete[]ps;
//     ps = left(sample);
//     cout << ps << endl;
//     delete[] ps;
//     return 0;
// }
// char *left(const char *str, int n)
// {
//     if (n<0)
//         n=0;
//     char *p = new char[n+1];
//     int i;
//     for ( i = 0; i < n && str[i]; i++)
//         p[i] = str[i];
//     while(i<=n)
//         p[i++] = '\0';
//     return p;
    
// }
//함수 오버로딩
//서로 다른 여러 개의 함수가 하나의 이름을 공유하는 것
// #include <iostream>
// unsigned long left(unsigned long num, unsigned ct);
// char *left(const char * str, int n =1);
// int main()
// {
//     using namespace std;
//     char *trip = "Hawaii";
//     unsigned long n = 12345678;
//     int i;
//     char *temp;
//     for ( i = 0; i < 10; i++)
//     {
//         cout << left(n,i) << endl;
//         temp = left(trip,i);
//         cout << temp << endl;
//         delete[] temp; //재사용하려고 해제
//     }
//     return 0;
// }
// unsigned long left(unsigned long num, unsigned ct)
// {
//     unsigned digits = 1;
//     unsigned long n = num;
//     if (ct == 0 || num == 0)
//         return 0; // 숫자 없으면 0 리턴
//     while(n /=10)
//         digits++;
//     if (digits > ct)
//     {
//         ct = digits -ct;
//         while(ct--)
//             num /= 10;
//         return num; // 남아있는 ct개 숫자 리턴
//     }
//     else // 'ct >= 전체 숫자 개수' 이면 그 정수 자체를 리턴 //?
//         return num;
// }
// //str 문자열의 앞에서부터 n개의 문자를 취하여 새로운 문자열을 구성하고 그것을 지시하는 포인터를 리턴한다
// char *left(const char * str, int n)
// {
//     if (n<0)
//         n=0;
//     char *p = new char[n+1];
//     int i;
//     for ( i = 0; i < n && str[i]; i++)
//         p[i] = str[i]; // 문자들 복사
//     while (i <=n)
//         p[i++]= '\0'; // 나머지 널값
//     return p;
// }
//같은 작업을 수행하는 함수들에만 사용하는 것이 좋다
//서로 다른 데이터형의 매개변수를 요구하고
// 디폴트 매개변수가 소용이 없을 때에는 함수 오버로딩 사용한다
//템플릿
// #include <iostream>
// template <class Any>
// void Swap(Any &a, Any &b);
// int main()
// {
//     using namespace std;
//     int i= 10;
//     int j = 20;
//     cout <<"i,j = " << i << ", " << j << ".\n";
//     cout << "컴파일러가 생성한 int형 교환기 사용\n";
//     Swap(i,j);// void Swap(int&,int&) 생성
//     cout << "i,j = " << i << ", " << j << ".\n";

//     double x = 24.5;
//     double y =81.7;
//     cout << "x,y = " << x << ", " << y << ".\n";
//     cout << "컴파일러가 생성한 double형 교환기를 사용\n";
//     Swap(x,y); // void Swap(double&,double&) 생성
//     cout << "이제 x,y = " << x << ", " << y << ".\n";
//     return 0;
// }
// template <class Any>
// void Swap(Any &a, Any &b)
// {
//     Any temp; // temp는 Any형의 변수
//     temp = a;
//     a = b;
//     b = temp;
// }
//템플릿 오버로딩
// #include <iostream>
// template <typename T>
// void Swap(T &a, T &b);

// template <typename T>
// void Swap(T*a, T*b, int n);

// void show(int a[]);
// const int Lim = 8;
// int main()
// {
//     using namespace std;
//     int i =10, j = 20;
//     cout << "i,j = " << i << ", " << j << ".\n";
//     cout << "컴파일러가 생성한 int형 교환기 사용\n";
//     Swap(i,j);
//     cout << "i,j = " << i << ", " << j << ".\n";

//     int d1[Lim] = {0,7,0,4,1,7,7,6};
//     int d2[Lim] = {0,6,2,0,1,9,6,9};
//     cout << "원본 배열:\n";
//     show(d1);
//     show(d2);
//     Swap(d1,d2,Lim);
//     cout << "교환된 배열:\n";
//     show(d1);
//     show(d2);
//     return 0;
// }
// template <typename T>
// void Swap(T &a, T &b)
// {
//     T temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// template <typename T>
// void Swap(T a[], T b[], int n)
// {
//     T temp;
//     for (int i = 0; i < n; i++)
//     {
//         temp = a[i];
//         a[i] = b[i];
//         b[i] = temp;
//     }
// }
// void show(int a[])
// {
//     using namespace std;
//     cout<< a[0] << a[1] << "/";
//     cout << a[2] << a[3] << "/";
//     for (int i = 4; i < Lim; i++)
//     {
//         cout << a[i];
//     }
//     cout << endl;
// }
