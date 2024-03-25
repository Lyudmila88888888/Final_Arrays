#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	int m;

	// Задача 1. Сортировка первых n элементов
	std::cout << " Задача 1.\n Изначальный массив: \n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (20 + 1 - 10) + 10; // [10;20]
		std::cout << arr1[i] << ' ';

	}

	std::cout <<std::endl; // перенос курсора на след. строку в консоли и очищение буфера потока вывода.


	std::cout << " Введите количество элементов для сортировки -> ";
	std::cin >> n;
	// Cортировка пузырьком
	//for (int i = size1 - 1; i > 0; i--) // если size1 поменять на n то он будет сортировать кол-во введеных пользователем
		//for (int j = 0; j < i; j++)
			//if (arr1[j] > arr1[j + 1])
				//std::swap(arr1[j], arr1[j + 1]);

	// Быстрая сортировка
	std::sort(arr1, arr1 + n);



	std::cout << " итоговый массив: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";

	

	// Задача 2.Температура в январе

	std::cout << " Задача 2. Массив:\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {

		arr2[i] = rand() % (-5 + 1 - (-30)) + (-30);//[-30;-5]  // 26-30 формула проще
		std::cout << arr2[i] << ' ';

	}
	std::cout << std::endl;


	std::cout << " Введите число -> ";
	std::cin >> n;
	int counter = 0;
	int sum = 0;

	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;

	}

	std::cout << " Средняя температура = " << double (sum) / size2 << std::endl;
	std::cout << " Количество чисел, следующих условию = " << counter << " \n\n";
	

	//Задача 3. Вхождение в диапазон
	/*std::cout << " Задача 3.\n Введите начало диапазона -> ";
	std::cin >> n;
	std::cout << " Введите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100; //[0;100) если не включительно то 101
		std::cout << i << ". " << arr3[i]<< (arr3[i] >= n && arr3[i] <=m ? '!' : ' ') << std::endl; //тернарный оператор

	}
	*/


	// Задача 4. Будет позже


	return 0;

	}