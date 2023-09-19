#include <iostream>

using namespace std;

class Animal
{
private:
	int age;
	float height;

	char blood;

public:
	Animal( int m_age, float m_height ) :
		age( m_age ), height( m_height ) {
		cout << "age : " << age << endl;
		cout << "height : " << height << endl;
	}

#pragma region this 포인터
	// 객체 자기 자신을 가리키는 포인터 입니다.

#pragma endregion


	Animal( char blood, int age, int height )
	{
		this->blood = blood;
		this->age = age;
		this->height = height;

		cout << "객체의 주소 : " << this << endl;
	}
	
};

int* Value()
{
	int data = 10;
	return &data;
}

int main()
{
	// Animal animal('a', 5, 42.1f);

	int* ptr = Value();
	cout << *ptr << endl;

	// 댕글링 포인터
	*ptr = 300;
	cout << *ptr << endl;

	return 0;
}