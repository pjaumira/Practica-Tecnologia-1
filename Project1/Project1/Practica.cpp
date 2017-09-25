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
	vector <int> vector1({ 1,2,3,4 });
	// vector<int>::iterator it_vector_1;

	for (vector<int>::iterator it_vector_1 = vector1.begin(); it_vector_1 != vector1.end(); it_vector_1++) {
		cout << *it_vector_1 ;
	}

	for (vector<int>::reverse_iterator it_vector_2 = vector1.rbegin(); it_vector_2 != vector1.rend(); it_vector_2++) {
		cout << *it_vector_2;
	}


}
