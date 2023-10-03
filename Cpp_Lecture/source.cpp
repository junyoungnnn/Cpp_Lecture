#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// #define UP "↑"
// #define LEFT "←"
// #define RIGHT "→"
// #define DOWN "↓"

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
	int round = 0;
	int seed = 0;
	srand( time( NULL ) );
	
	while ( round < 5 )
	{
		round++;
		std::vector<const char*> vector;
		std::vector<const char*> answer;

		cout << "Q: ";
		for ( int i = 0; i < round; i++ )
		{
			
			seed = rand() % 4;
			vector.push_back( point[seed]);
			cout << vector[i] << " ";
			cout << endl;

				while ( 1 ) {
				char key = 0;
				if ( _kbhit() )
				{
					if ( answer.size() == round )
					{
						for ( int i = 0; i < round; i++ )
						{
							if ( strcmp( vector[i], answer[i] ) != 0 )
								return 0;
						}
						cout << endl;
						break;
					}
					key = _getch();
					if ( key == -32 )
					{
						key = _getch();
					}

					switch ( key )
					{
					case LEFT:
						cout << "←";
						answer.push_back( point[1] );
						break;
					case RIGHT:
						cout << "→";
						answer.push_back( point[0] );
						break;
					case UP:
						cout << "↑";
						answer.push_back( point[2] );
						break;
					case DOWN:
						cout << "↓";
						answer.push_back( point[3] );
						break;
					}
				}
			}
		}
	}
#pragma endregion

	return 0;
}