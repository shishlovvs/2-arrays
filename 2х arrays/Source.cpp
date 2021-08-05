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
	cout << "Сумма всех элементов: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(arr, n) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(arr, n) << endl;
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
	cout << "Сумма всех элементов: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(brr, B_SIZE) << endl;
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
	cout << "Сумма всех элементов: " << Sum(crr, C_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(crr, C_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(crr, C_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(crr, C_SIZE) << endl;
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
	cout << "Сумма всех элементов: " << Sum(drr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(drr, D_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(drr, D_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(drr, D_SIZE) << endl;
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
	cout << "Сумма всех элементов: " << Sum(err, E_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(err, E_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(err, E_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(err, E_SIZE) << endl;
	Print(err, E_SIZE);
	Print(err, E_SIZE);
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}

void FillRand(short arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 10000) / 100;
	}
}

void FillRand(float arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;
	}
}void FillRand(char arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	}
}

template <typename T>
void Print(T arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(short arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Sort(T arr[], const int n)
{
	//Сортировка 
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
	//Сумма всех элементов
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
	//Среднее арифметическое всех элементов
	return (T)Sum(arr, n) / n;
}



template <typename T>
T minValueIn(T arr[], const int n)
{
	//Минимальное значение в массиве
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
	//Максимальное значение в массиве
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}




