#include "Camera.h"

Camera::Camera()
{
	view = 60;
	cout << "Camera ����" << endl;
}

Camera::~Camera()
{
	cout << "Camera ����" << endl;
}

void Camera::Information() const
{
	// view = 100;  ERROR!
	// const �Լ��� �б� ����
	cout << "view�� ��: " << view << endl;
}
