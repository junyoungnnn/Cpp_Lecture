#include <iostream>
#include <map>
#include <set>

using namespace std;


int main()
{
#pragma region std::map

	// map          set
	// KEY VALUE    KEY
	// KEY는 중복이 될 수 없음 

	// RED BLACK TREE
	// 데이터 자동 정렬 (log n)

	/*std::map<string, int> mapData;

	map<string, int>::iterator mapIter;

	
	mapData.insert( make_pair( "Sword", 5000 ) );
	mapData.insert( make_pair( "Armor", 2500 ) );

	for ( mapIter = mapData.begin(); mapIter != mapData.end();mapIter++ )
	{
		cout << "KEY : " << mapIter->first << endl;
		cout << "VALUE : " << mapIter->second << endl;
	}


	if ( mapData.find( "Sword" ) != mapData.end() )
	{
		cout << "Find Key" << endl;
	}
	else
	{
		cout << "Not Key found" << endl;
	}*/
#pragma endregion

#pragma region std::set

	// 중복된 값이 들어갔을 때
	// 중복된 값을 제거하고 다시 저장합니다.

	std::set<int> setData;

	setData.insert( 10 );
	setData.insert( 20 );
	setData.insert( 30 );
	setData.insert( 40 );
	setData.insert( 35 );
	setData.insert( 25 );

	set<int>::iterator setIter;

	setIter = setData.begin();

	for ( int i = 0; i < setData.size(); i++ )
	{
		cout << *setIter << endl;
		setIter++;
	}
#pragma endregion


	return 0;
}