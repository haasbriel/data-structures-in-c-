// DinamicStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;


void push(int valor);
void pop();
int vazia();
void imprime();


 struct node {
	int data;
	struct node* proximo;
};

 int i;

struct node* pilha = nullptr;




int main(){


	push(10);
	push(5);
	push(15);
	push(20);



	imprime();
	cout << "-------------------" << endl;

	vazia();

	pop();
	pop();

	imprime();
	return 0;

}

void push (int valor) {
	struct node* aux;
	aux = new(struct node);
	aux->data = valor;
	aux->proximo = pilha;
	pilha = aux;
}

void pop() {
	struct node* aux = pilha;
	pilha = pilha->proximo;
	delete(aux);
}

int vazia() {
	if (pilha == nullptr) {
		cout << "Pilha vazia!" << endl;
		return -1;
	}
}

void imprime() {


	node* aux = pilha;
	while (aux != nullptr) {
		cout << aux->data << endl;
		aux = aux->proximo;
	}

	delete (aux);
}




