#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	a %= 7;
	if (a == 1)
	{
		cout << "�����������" << endl;
	}
	if (a == 2)
	{
		cout << "�������" << endl;
	}
	if (a == 3)
	{
		cout << "�����" << endl;
	}
	if (a == 4)
	{
		cout << "�������" << endl;
	}
	if (a == 5)
	{
		cout << "�������" << endl;
	}
	if (a == 6)
	{
		cout << "�������" << endl;
	}
	if (a == 0)
	{
		cout << "�����������" << endl;
	}

	switch (a)
	{
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "�������" << endl;
		break;
	case 5:
		cout << "�������" << endl;
		break;
	case 6:
		cout << "�������" << endl;
		break;
	default:
		cout << "�����������" << endl;
		break;
	}

	if (a > 3)
	{
		cout << 6;
	}
	else
	{
		cout << 7;
	}

	cout << (a > 3 ? 6 : 7);

	cout << (
		a == 1 ? "�����������" :
		a == 2 ? "�������" :
		a == 3 ? "�����" :
		a == 4 ? "�������" :
		a == 5 ? "�������" :
		a == 6 ? "�������" : "�����������") << endl;





	return EXIT_SUCCESS;
}