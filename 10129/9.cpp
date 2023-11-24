#include <iostream>
using namespace std;

void AverageScore(int* point, int size)
{
	float average = 0;
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << "人目を入力してください。" << flush;
		cin >> point[i];
	}
	for (int j = 0; j < size; ++j)
	{
		sum += point[j];
	}
	average = (float)sum / size;
	cout << "平均点は" << average << "です。" << endl;
}

int main()
{
	int size;
	int* point;
	cout << "何名入力しますか？" << flush;
	cin >> size;

	point = new int[size];
	AverageScore(point, size);

	delete[] point;
}