#include<iostream>

using namespace std;

void printArray(int* &arr, int &count, int &capacity)
{
	cout << "[" << count << "/" << capacity << "]{";
	for (int i = 0; i < count; ++i)
	{
		cout << arr[i] << (i != count - 1 ? ", " : "");
	}
	cout << "}" << endl;
}

void expandArray(int* &arr, int &capacity)
{
	int newCapacity = capacity * 2;
	int* temp = new int[newCapacity]; //������ ������ ������� �����
	for (int j = 0; j < capacity; ++j)
	{
		temp[j] = arr[j]; //������������ �����������
	}
	delete[] arr; //������ ������ ������
	arr = temp;
	capacity = newCapacity;
}

int sumArray(int* &arr, int &count)
{
	int sum = 0;
	for (int i = 0; i < count; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

int main(int argc, char* argv[])
{
	/*���������, ������� ��������� ����� � ����������
	� ���������� �� � ������ �� ��� ���,
	���� �� ����� ������ 0*/
	int cap = 10; //capacity - ���������� �����������
	int* a = new int[cap];
	int count = 0;	//���������� ���������, ������� �������������
					//����� � �������
					//count - ����� �������� ����� ����������

	while (true)
	{
		int x = 0;
		cin >> x;
		if (x == 0)
		{
			break;
		}
		if (count == cap)
		{
			expandArray(a, cap);
		}
		a[count] = x;
		count++;
	}

	printArray(a, count, cap);
	cout << "sum = " << sumArray(a, count) << endl;

	delete[] a;
	return EXIT_SUCCESS;
}