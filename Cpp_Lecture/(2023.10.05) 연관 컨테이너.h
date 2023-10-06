#pragma once
#include <iostream>
#include <list>
#include <vector>

using namespace std;

#pragma region 컨테이너 어댑터
// 기존 컨테이너의 인터페이스를 제한하여
// 만든 기능이 제한되거나 변형된 컨테이너입니다.

// STACK은 LIFO 구조
// QUEUE는 FIFO 구조
// 이 둘은 백터 구조
// 
// PRIORITY QUEUE

#pragma endregion

int main()
{
#pragma region 문자열

	/*std::string content = "Content";

	cout << "content 변수의 값 : " << content << endl;
	cout << "content 변수의 값 : " << content.size() << endl;

	content = "League";

	cout << "위치" << content.find("Le") << endl;*/

#pragma endregion

#pragma region 연관 컨테이너
	// KEY와 VALUE가 하나의 구성으로 이루어진
	// 컨테이너 입니다.
	// STL에서 사용하는것은 양방향 연결 리스트

	/*list<int> dataList;
	dataList.push_back( 10 );
	dataList.push_front( 50 );
	dataList.push_front( 25 );
	dataList.push_back( 33 );

	list<int>::iterator iter;

	iter = dataList.begin();

	dataList.insert( iter, 77 );

	for ( iter = dataList.begin(); iter != dataList.end(); iter++ )
	{
		cout << *iter << endl;
	}*/

#pragma endregion

	// 백터의 메모리를 미리 세팅

	/*vector<int> vectorInt;

	vector<int>::iterator vectoriter;

	vectorInt.reserve( 10 );

	vectorInt.emplace_back( 10 );
	vectorInt.emplace_back( 20 );
	vectorInt.emplace_back( 30 );
	vectorInt.emplace_back( 40 );

	vectoriter = vectorInt.begin();

	vectorInt.erase( vectoriter + 2 );

	for ( int i = 0; i < vectorInt.size(); i++ )
	{
		cout << vectorInt[i] << endl;
	}

	cout << "capacity: " << vectorInt.capacity();*/

	return 0;
}