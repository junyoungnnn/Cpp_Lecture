#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int createCount;

#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나
	// 규칙이 없는 일반적인 컨테이너 입니다.

// 선형 컨테이너
// std::vector
// 동적 배열
// 런타임중 배열의 크기를 변경가능함.
// 자료의 크기가 늘어나면 배열의 크기를 증가시키는게 아니라
// 새로운 배열을 할당한다음 복사함.
// C#에서는 list라고 부름.
// std::deque
// std::list (연관 컨테이너)

#pragma endregion

void GotoXY( int x, int y )
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), position );
}

const char* point[4] = { "→","←" ,"↑" ,"↓" };

int main()
{
#pragma region Vector 컨테이너

	//std::vector<int> vector;

	//// push_back() : 뒤 쪽에 데이터를 저장하는 함수
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);

	//cout << "vector.size: " << vector.size() << endl;
	//cout << "capacity: " << vector.capacity() << endl; // 용량 두배증가. 컴퓨터마다 상의함(1.5~2배)

	//for ( int i = 0;i < vector.size(); i++ )
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.push_back( 40 );
	//vector.push_back( 50 );
	//vector.pop_back();

	//cout << "vector.size: " << vector.size() << endl;
	//cout << "capacity: " << vector.capacity() << endl;

	//for ( int i = 0;i < vector.size(); i++ )
	//{
	//	cout << vector[i] << endl;
	//}

#pragma endregion

#pragma region 리듬 게임
    srand( time( NULL ) );

    std::vector<const char*> note;
    createCount = 5;

    for ( int i = 0; i < createCount; i++ )
    {
        int random = rand() % 4;

        switch ( random )
        {
        case 0: note.push_back( "↑" );
            break;
        case 1: note.push_back( "←" );
            break;
        case 2: note.push_back( "→" );
            break;
        case 3: note.push_back( "↓" );
            break;
        }
    }

    char key = 0;

    // note 비어있다.  note.empty() -> 0  

    while ( note.empty() == false )
    {
        for ( int i = 0; i < note.size(); i++ )
        {
            cout << note[i] << " ";
        }

        key = _getch();

        if ( key == -32 )
        {
            key = _getch();
        }

        switch ( key )
        {
        case UP: if ( note[note.size() - 1] == "↑" )
        {
            note.pop_back();
        }
               break;
        case LEFT: if ( note[note.size() - 1] == "←" )
        {
            note.pop_back();
        }
                 break;
        case RIGHT: if ( note[note.size() - 1] == "→" )
        {
            note.pop_back();
        }
                  break;
        case DOWN: if ( note[note.size() - 1] == "↓" )
        {
            note.pop_back();
        }
                 break;
        }

        system( "cls" );
    }
#pragma endregion

#pragma region deque 컨테이너
	// Double Ended Queue
	// 연속적인 메모리 공간이 아니라 두 메모리 공간을 연결 시켜 둔것.
	// 백터에서 할 수 없는 것을 데큐로 한다.
	// 프론트 팝

	/*deque<int> deque;
	deque.push_back( 10 );
	deque.push_back( 20 );
	deque.push_front( 99 );

	for ( int i = 0; i < deque.size();i++ )
	{
		cout << deque[i] << endl;
	}
	deque.pop_front();
	for ( int i = 0; i < deque.size();i++ )
	{
		cout << deque[i] << endl;
	}*/
#pragma endregion

	return 0;
}