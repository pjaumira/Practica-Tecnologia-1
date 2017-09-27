//Practica Programacio II Contenidors i Iteradors

//Includes
#include <iostream>
#include <stdio.h>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>

using namespace std;


int main() {

	//Cos de la practica

	//Vector

	vector <int> vector1({ 1,2,3,4 });

	cout << "Vector \n";

	for (vector<int>::iterator it_vector_1 = vector1.begin(); it_vector_1 != vector1.end(); it_vector_1++) {
		cout << *it_vector_1 ;
	}

	cout << "\n";

	for (vector<int>::reverse_iterator it_vector_2 = vector1.rbegin(); it_vector_2 != vector1.rend(); it_vector_2++) {
		cout << *it_vector_2;
	}

	cout << "\n";

	//Deque

	deque <int> vector2({ 1,2,3,4 });

	cout << "Deque \n";

	for (deque<int>::iterator it_vector_2 = vector2.begin(); it_vector_2 != vector2.end(); it_vector_2++) {
		cout << *it_vector_2;
	}

	//List

	list <int> vector3 ({ 1,2,3,4 });

	cout << "List \n";

	//Forward List

	forward_list <int> vector4({ 1,2,3,4 });

	cout << "Forward List \n";

	//Map

	map <int, float> vector5;

	vector5.insert( map <int, float>::value_type(1,1.1));
	vector5.insert(map <int, float>::value_type(2, 2.2));
	vector5.insert(map <int, float>::value_type(3, 3.3));
	vector5.insert(map <int, float>::value_type(4, 4.4));


		cout << "Map \n";

	//Set

		set <int> vector6;

		cout << "Set \n";

}
