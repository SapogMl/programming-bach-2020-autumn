#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	//�������� ������������� ������� ����� C
	int* b = (int*)calloc(10, sizeof(int));
	free(b);
	b = (int*)malloc(10 * sizeof(int));
	free(b);
	//while (1) malloc(1);

	//�������� ������������� ������� ����� C++
	int* a = new int[10]{ 0 };
	delete[] a;

	return EXIT_SUCCESS;
}