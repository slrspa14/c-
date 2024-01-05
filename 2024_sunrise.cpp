// 배열을 이요한 해돋이 포인터를 이용
// 깜빡 x sunrise
// 주소값 받아서 값을 변경
// 포인터 변수는 주소값만 담을 수 있다 역참조해서 주소에 무슨 값이 들었는지 알 수 있다. 주소를 통해서 값을 바꾼다.
//  #include <iostream>
//  #include <unistd.h>
//  int main()
//  {
//      using namespace std;
//      int i,j;
//      // unsigned int microseconds;
//      int sunrise[11][11]={
//          {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//          {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
//          {0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
//          {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
//          {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
//          {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//          {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
//          {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
//          {0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
//          {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
//          {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}
//      };
//      //int *sun = &sunrise[11][11];
//      //cout << sun << endl;
//      for (i = 0; i < 11; i++)
//      {
//          for (j = 0; j < 11; j++)
//          {
//              if(sunrise[i][j] == 0)
//                  cout << "   ";
//              if(sunrise[i][j] == 1)
//                  cout << "  ☀️";
//              usleep(50000);
//          }
//          cout << '\n';
//      }
//      cout << "\t\t2024" << endl;
//      return 0;
//  }
// 배열의 이름은 첫번째 요소의 주소값

//  #include <iostream>
//  #include <unistd.h>
//  int main()
//  {
//      using namespace std;
//      const char *space[10]=
//      {
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//          "                    ",
//      };
//      const char *sunrise[8] =
//      {
//          "         ☀️ ☀️          ",
//          "        ☀️ ☀️ ☀️         ",
//          "       ☀️ ☀️ ☀️ ☀️        ",
//          "      ☀️ ☀️ ☀️ ☀️ ☀️       ",
//          "       ☀️ ☀️ ☀️ ☀️        ",
//          "        ☀️ ☀️ ☀️         ",
//          "         ☀️ ☀️          ",
//          "         2024         ",
//      };
//      int i,j,m;
//      for ( i = 0; i < 10; i++)
//      {
//          if(i<9)
//          {
//              for (j = 0; j <i ; j++)
//              {
//                  *(space+8-j) = *(sunrise+i-j-1);
//              }
//          }
//          for (m = 0; m < 10; m++)
//          {
//              cout << *(space+m) << endl;
//          }
//          sleep(1);
//          system("clear");
//      }
//      return 0;
//  }

// #include <iostream>
// #include <unistd.h>
// int main()
// {
//     using namespace std;
//     int i,j;
//     int sunrise[11][11]={0};
//     int *ptr = &sunrise[0][0];
//     int count = 0;

//     for (i = 0; i < 11; i++)
//     {
//         for (j = 0; j < 11; j++)
//         {
//             *(ptr+5) = 4;
//             *(ptr+15) = 4;
//             *(ptr+16) = 4;
//             *(ptr+17) = 4;
//             *(ptr+25) = 4;
//             *(ptr+26) = 4;
//             *(ptr+27) = 4;
//             *(ptr+28) = 4;
//             *(ptr+29) = 4;
//             *(ptr+35) = 4;
//             *(ptr+36) = 4;
//             *(ptr+37) = 4;
//             *(ptr+38) = 4;
//             *(ptr+39) = 4;
//             *(ptr+40) = 4;
//             *(ptr+41) = 4;
//             *(ptr+47) = 4;
//             *(ptr+48) = 4;
//             *(ptr+49) = 4;
//             *(ptr+50) = 4;
//             *(ptr+51) = 4;
//             *(ptr+59) = 4;
//             *(ptr+60) = 4;
//             *(ptr+61) = 4;
//             *(ptr+71) = 4;
//         }
//     }
    
//     for ( i = 0; i < 8; i++)
//     {
//         for (j = 0; j < 11; j++)
//         {
//             if(sunrise[i][j] == 0)
//                 cout << "  ";
//             else
//                 cout << " ☀️";
//         }
//         usleep(500000);
//         cout << endl;
//     }
//     cout << "\t  2024" << endl;
//     return 0;
// }

// #include <iostream>
// #include <unistd.h>
// int main()
// {
//     using namespace std;
//     int k=11, m=5,n=5,a,b,c,d,f,e;
//     int sunrise[11][11] = {0};
//     int *sun = &sunrise[0][0];
//     for (int i = 10; i >= 0; i--)
//     {
//         sunrise[10][m+1] =1;
//         sunrise[10][n-1] =1;
//         for (int l = 10; i < 11; i++)
//         {
//             for (int j = 0; j <= 10; j++)
//             {
//                 sunrise[i-1][j] = sunrise[i][j];
//             }
//         }
//         for (int i = 0; i < k; i++)
//         {
//             for (int j = 0; j <= 10; j++)
//             {
//                 // sunrise[i-1][j] = sunrise[i][j];
//                 cout << sunrise[i][j];
//             }
//             cout << endl;
//         }
//         m++;
//         n--;
//     }
//     sleep(1);
//     return 0;
// }

// #include <iostream>
// #include <unistd.h>
// int main()
// {
//     using namespace std;
//     int i,j;
//     // unsigned int microseconds;
//     int sunrise[11][11]={
//         {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
//         {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
//         {0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
//         {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
//         {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
//         {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
//         {0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
//         {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
//         {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}
//     };
//     //int *sun = &sunrise[11][11];
//     //cout << sun << endl;
//     for (i = 0; i < 11; i++)
//     {
//         for (j = 0; j < 11; j++)
//         {
//             if(sunrise[i][j] == 0)
//                 cout << "   ";
//             if(sunrise[i][j] == 1)
//                 cout << "  ☀️";
//             usleep(50000);
//         }
//         cout << '\n';
//     }
//     cout << "\t\t2024" << endl;
//     return 0;
// }

#include <iostream>
#include <unistd.h>
int main()
{
    using namespace std;
    int count = 0;
    int sunrise[7][7] = {0};
    while (count < 7)
    {   
        system("clear");
        // 바꾸기 바꾸기
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                int *sun = &sunrise[i][j];
                int *sun_change = &sunrise[i + 1][j];
                *sun = *sun_change;
            }
        }
        if (count == 0 || count ==6)
        {
            //0초기화 안하면 쓰레기값
            for (int i = 0; i < 7; i++)
            {
                int *sunchip = &sunrise[6][i];
                *sunchip = 0;
            }
            //채울부분만 1로변경
            for (int j = 2; j < 5; j++)
            {
                int *sunchip = &sunrise[6][j];
                *sunchip = 1;
            }
        }
        else if (count == 1 || count == 5)
        {
            for (int i = 0; i < 7; i++)
            {
                int *sunchip = &sunrise[6][i];
                *sunchip = 0;
            }

            for (int j = 1; j < 6; j++)
            {
                int *sunchip = &sunrise[6][j];
                *sunchip = 1;
            }
        }
        else if(count == 2 || count == 3|| count == 4)
        {
            
            for (int i = 0; i < 7; i++)
            {
                int *sunchip = &sunrise[6][i];
                *sunchip = 0;
            }
            
            for (int j = 0; j < 7; j++)
            {
                int *sunchip = &sunrise[6][j];
                *sunchip = 1;
            }
        }
        //출력용
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if(sunrise[i][j] == 0)
                    cout << "   ";
                if (sunrise[i][j] == 1)
                    cout << " 🌞";
            }
            cout << endl;
        }
        sleep(1);
        count++;
    }
    system("clear");
    cout << "\t  2024" << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (sunrise[i][j] == 0)
                cout << "   ";
            if (sunrise[i][j] == 1)
                cout << " 🌞";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// #include <unistd.h>
// int main()
// {
//     using namespace std;
//     int count = 0;
//     int m = 5;
//     int k = 7;
//     int o = 6;
//     int sunrise[8][8] = {0};
//     while (count < 8)
//     {   
//         system("clear");
//         if(count == 7)
//         {
//             for (int i = 3; i < 4; i++)
//             {
//                 int *num = &sunrise[0][i];
//                 *num = 2;
//             }
            
//         }
//         if (count == 0 || count ==6)
//         {
//             //0초기화 안하면 쓰레기값
//             for (int i = 0; i < 7; i++)
//             {
//                 int *sunchip = &sunrise[k][i];
//                 *sunchip = 0;
//             }
//             //채울부분만 1로변경
//             for (int j = 2; j < 5; j++)
//             {
//                 int *sunchip = &sunrise[k][j];
//                 *sunchip = 1;
//             }
//             k=1;
//         }
//         else if (count == 1 || count == 5)
//         {
//             for (int i = 0; i < 8; i++)
//             {
//                 int *sunchip = &sunrise[o][i];
//                 *sunchip = 0;
//             }

//             for (int j = 1; j < 6; j++)
//             {
//                 int *sunchip = &sunrise[o][j];
//                 *sunchip = 1;
//             }
//             o=2;
//         }
//         else if(count == 2 || count == 3|| count == 4)
//         {
//             for (int i = 0; i < 8; i++)
//             {
//                 int *sunchip = &sunrise[m][i];
//                 *sunchip = 0;
//             }
            
//             for (int j = 0; j < 7; j++)
//             {
//                 int *sunchip = &sunrise[m][j];
//                 *sunchip = 1;
//             }
//             m--;
//         }
//         //출력용
//         for (int i = 0; i < 8; i++)
//         {
//             for (int j = 0; j < 8; j++)
//             {
//                 if(sunrise[i][j] == 0)
//                     cout << "   ";
//                 if (sunrise[i][j] == 1)
//                     cout << " 🌞";
//                 if(sunrise[i][j] == 2)
//                     cout << "2024";
//             }
//             cout << endl;
//         }
//         sleep(1);
//         count++;
//     }
//     return 0;
// }