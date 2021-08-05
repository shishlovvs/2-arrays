#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);

template<typename T> //T-type
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template <typename T>
T Sum(T arr[], const int n);

template <typename T>
T Avg(T arr[], const int n);

template <typename T>
T minValueIn(T arr[], const int n);

template <typename T>
T maxValueIn(T arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Int: " << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ���� ���������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ���������: " << Avg(arr, n) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(arr, n) << endl;
	Print(arr, n);
	Print(arr, n);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	cout << "Double: " << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "����� ���� ���������: " << Sum(brr, B_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(brr, B_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(brr, B_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(brr, B_SIZE) << endl;
	Print(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	cout << "short: " << endl;
	const short C_SIZE = 10;
	short crr[C_SIZE];
	FillRand(crr, C_SIZE);
	Print(crr, C_SIZE);
	Sort(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << "����� ���� ���������: " << Sum(crr, C_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(crr, C_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(crr, C_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(crr, C_SIZE) << endl;
	Print(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	cout << "float: " << endl;
	const int D_SIZE = 12;
	float drr[D_SIZE];
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	Sort(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "����� ���� ���������: " << Sum(drr, D_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(drr, D_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(drr, D_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(drr, D_SIZE) << endl;
	Print(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << endl;

	cout << "///////////////////////////////////////////" << endl;

	cout << endl;
	const int E_SIZE = 15;
	char err[E_SIZE];
	FillRand(err, E_SIZE);
	Print(err, E_SIZE);
	Sort(err, E_SIZE);
	Print(err, E_SIZE);
	cout << "����� ���� ���������: " << Sum(err, E_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(err, E_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(err, E_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(err, E_SIZE) << endl;
	Print(err, E_SIZE);
	Print(err, E_SIZE);
}

void FillRand(int arr[], const int n)
{
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}

void FillRand(short arr[], const int n)
{
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 10000) / 100;
	}
}

void FillRand(float arr[], const int n)
{
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;
	}
}void FillRand(char arr[], const int n)
{
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	}
}

template <typename T>
void Print(T arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(short arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Sort(T arr[], const int n)
{
	//���������� 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}



template <typename T>
T Sum(T arr[], const int n)
{
	//����� ���� ���������
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}



template <typename T>
T Avg(T arr[], const int n)
{
	//������� �������������� ���� ���������
	return (T)Sum(arr, n) / n;
}



template <typename T>
T minValueIn(T arr[], const int n)
{
	//����������� �������� � �������
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}



template <typename T>
T maxValueIn(T arr[], const int n)
{
	//������������ �������� � �������
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}




