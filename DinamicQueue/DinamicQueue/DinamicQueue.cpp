
#include <iostream>
using namespace std;


struct node {
	int data;
	struct node* proximo;
};

int i;

struct node* inicioFila = nullptr;
struct node* fimFila = nullptr;

void queue(int valor);
int isEmpty();
void dequeue();
void imprime();



int main()
{
	queue(10);
	queue(5);
	queue(4);


	imprime();
	cout << "----------" << endl;

	dequeue();
	dequeue();
	dequeue();

	cout << "-------------" << endl;

	isEmpty();
}

void queue(int valor) {
	struct node* aux;
	aux = new(struct node);
	aux->data = valor;
	aux->proximo = nullptr;

	if (inicioFila == nullptr) {
		inicioFila = aux;
		fimFila = aux;
		return;
	}
	else {
		fimFila->proximo = aux;
		fimFila = aux;
		return;
	}
}

int isEmpty() {
	if (inicioFila == nullptr) {
		cout << "A fila está vazia!" << endl;
		return -1;
	}	
};

void dequeue() {
	struct node* aux;
	aux = inicioFila;
	inicioFila = inicioFila->proximo;
	delete(aux);
};

void imprime() {
	node* aux = inicioFila;
	while (aux != nullptr) {
		cout << aux->data << endl;
		aux = aux->proximo;

	}
};


