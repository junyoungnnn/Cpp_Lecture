#include <iostream>

void Damage(int& hp)
{
	hp -= 100;
}

int main()
{
#pragma region ��Ʈ��
	// �ð��� �帧�� ���� ���������� �߻��ϴ�
	// �������� �帧�Դϴ�.

	char alphabet = 'A';
	int data = 100;
	float x = 3.75f;

	// ��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�,
	// "<<" �����ڸ� ����Ͽ� �ڽ��� ������ ���� ��ȯ�մϴ�.
	// std::cout << "data�� ��: "<< data << std::endl;
	// std::cout << "float�� ��: "<< x << std::endl;
	// std::cout << "alphabet�� ��: " << int(alphabet) << std::endl;

	//std::cin >> data;
	// ��Ʈ������ �Է¹��� �� ">>" �����ڸ� ����Ͽ� ���ۿ�
	// ������ ���� NULL ���ڱ����� ���� ���� ������ ����մϴ�.
	//std::cout << "data�� ��: " << data << std::endl;

	// ��Ʈ���� �ü���� ���� �����Ǹ�,
	// ��Ʈ�� ��ü�� ���۶�� �ӽ� �޸� ������ �����մϴ�.

#pragma endregion

#pragma region ���� �Ҵ�� ����

	//	int* ptr = new int;
	//	*ptr = 100;
	//	std::cout << *ptr << std::endl;;
	//	
	//	delete ptr;
	//	
	//	ptr = nullptr;
	//	
	//	ptr = new int[5];
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		ptr[i] = i;
	//		std::cout << ptr[i] << std::endl;
	//	}
	//	
	//	delete[] ptr;
#pragma endregion

#pragma region ������
	// �ϳ��� �޸� ������ �̸��� �� ���̴� ���Դϴ�.

	/*int value = 200;
	int& ref = value;

	std::cout << "value�� ��: " << value << std::endl;

	Damage(value);

	std::cout << "value�� ��: " << value << std::endl;
	std::cout << "ref�� ��: " << ref << std::endl;*/

#pragma endregion

#pragma region ���� ��� for��

	//	int dataList[5] = { 1,2,3,4,5 };
	//	
	//	for (const int& element : dataList)
	//	{
	//		std::cout << element << std::endl;
	//	}

#pragma endregion


	return 0;
}