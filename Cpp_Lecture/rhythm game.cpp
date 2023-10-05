//#include <iostream>
//#include <vector>
//#include <time.h>
//#include <conio.h>
//#include <windows.h>
//
//using namespace std;
//
//#define UP 72
//#define DOWN 80
//#define LEFT 75
//#define RIGHT 77
//
//int createCount;
//
//void GotoXY( int x, int y )
//{
//    // x, y 좌표 설정
//    COORD position = { x, y };
//
//    // 커서 이동
//    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), position );
//}
//
//const char* point[4] = { "→","←" ,"↑" ,"↓" };
//
//int main()
//{
//#pragma region 리듬 게임
//    
//    int round = 1;
//    int seed = 0;
//    int hp = 5;
//    srand( time( NULL ) );
//
//    while ( round < 5 )
//    {
//        //round++;
//        std::vector<const char*> vector;
//        std::vector<const char*> answer;
//
//        cout << "Q: ";
//        for ( int i = 0; i < round; i++ )
//        {
//
//            seed = rand() % 4;
//            vector.push_back( point[seed] );
//            cout << vector[i] << " ";
//            cout << endl;
//
//                while ( 1 ) {
//                char key = 0;
//                if ( _kbhit() )
//                {
//                    if ( answer.size() == round )
//                    {
//                        for ( int i = 0; i < round; i++ )
//                        {
//                            if ( strcmp( vector[i], answer[i] ) != 0 )
//                                return 0;
//                        }
//                        cout << endl;
//                        break;
//                    }
//
//                    key = _getch();
//                    if ( key == -32 )
//                    {
//                        key = _getch();
//                    }
//
//                    switch ( key )
//                    {
//                    case LEFT:
//                        cout << "←";
//                        answer.push_back( point[1] );
//                        break;
//                    case RIGHT:
//                        cout << "→";
//                        answer.push_back( point[0] );
//                        break;
//                    case UP:
//                        cout << "↑";
//                        answer.push_back( point[2] );
//                        break;
//                    case DOWN:
//                        cout << "↓";
//                        answer.push_back( point[3] );
//                        break;
//                    }
//                }
//            }
//        }
//    }
//    
//#pragma endregion
//
//    return 0;
//}
//
