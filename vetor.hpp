#ifndef VETOR_H
#define VETOR_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class Vetor {

	vector<T> vetor;

public:
	Vetor(int i) {
		this->vetor.reserve(i);
	}
	Vetor(vector<T> original) {
		this->vetor = original;
	}
	~Vetor() {
		vetor.clear();
	}
	void SetElemento(int i, T x) {
		this->vetor[i] = x;
	}
	T GetElemento(int i) {
		return this->vetor[i];
	}
	void AdicionaElemento(T x) {
		this->vetor.push_back(x);
	}
	void Imprime() {
		for (int i = 0; i < this->vetor.size(); i++) {
			i < (this->vetor.size() - 1) ? cout << vetor[i] << " " : cout << vetor[i] << endl;
		}
	}
};
#endif
