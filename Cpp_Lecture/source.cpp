#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

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

int seed = 0;
const char* point[4] = { "→","←" ,"↑" ,"↓" };

int Random()
{
	srand( time( NULL ) );
	seed = rand() % 4;

	return seed;
}
int random = Random();

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
	

	while ( round < 5 )
	{
		round++;
		std::vector<const char*> vector;
		std::vector<char> answer;

		cout << "Q: ";
		for ( int i = 0; i < round; i++ )
		{
			
			vector.push_back( point[random]);
			cout << vector[i] << " ";
		}
		cout << endl;


		for ( int i = 0; i < round; i++ )
		{
			
		}
	}


#pragma endregion

	return 0;
}