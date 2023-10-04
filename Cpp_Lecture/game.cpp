//#include <iostream>
//#include <windows.h>
//#include <conio.h>
//#include <vector>
//using namespace std;
//
//#define UP 72
//#define LEFT 75
//#define RIGHT 77
//#define DOWN 80
//
//int createCount;
//const char* point[4] = { "→","←" ,"↑" ,"↓" };
//
//void GotoXY( int x, int y )
//{
//	// x, y 좌표 설정
//	COORD position = { x, y };
//
//	// 커서 이동
//	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), position );
//}
//
//int main( void )
//{
//    srand( time( NULL ) );
//
//    vector<const char*> note;
//    char key = 0;
//
//    // note 비어있다. note.empty() -> 1
//
//    while (note.empty()==false)
//    {
//       for ( int i = 0; i < note.size(); i++ )
//       {
//           cout << note[i] << " ";
//       }
//
//       key = _getch();
//
//       if ( key == -32 )
//       {
//           key = _getch();
//       }
//
//       switch ( key )
//       {
//       case UP:
//           if ( note[note.size() - 1] == "↑" )
//           {
//               note.pop_back();
//           }
//           break;
//       case LEFT:
//           if ( note[note.size() - 1] == "←" )
//           {
//               note.pop_back();
//           }
//           break;
//       case RIGHT:
//           if ( note[note.size() - 1] == "→" )
//           {
//               note.pop_back();
//           }
//           break;
//       case DOWN:
//           if ( note[note.size() - 1] == "↓" )
//           {
//               note.pop_back();
//           }
//           break;
//        }
//     system( "cls" );
//    }
//    return 0;
//}