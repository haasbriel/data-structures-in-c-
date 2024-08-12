#include <iostream>
#include <cstdio>
#define MAX 100

using namespace std;


void push (int valor);
int empty ();
void pop();
void topPilha();
void print();
int vetor[MAX];
int top = -1;

int main() {
	
    cout << "Teste de funções da pilha:" << endl;

    // Imprime a pilha vazia
    print();

    // Adiciona elementos à pilha
    push(10);
    push(20);
    push(30);

    // Imprime o conteúdo da pilha
    print();

    // Mostra o valor do topo da pilha
    topPilha();

    // Remove um elemento do topo da pilha
    pop();

    // Mostra o valor do topo da pilha após remoção
    topPilha();

    // Imprime o conteúdo da pilha após remoção
    print();

    // Remove todos os elementos restantes
    pop();
    pop();

    // Imprime a pilha vazia novamente
    print();

	return 0;
		
	}
	
	
	





void push (int valor){
	if (top >= MAX - 1) {
        cout << "Pilha cheia" << endl;
        return;
    }
    vetor[++top] = valor;
	
}

int empty (){
	if(top == -1){
		return true;
	}
	else {
		return false;
	}
	
}

void pop (){
	if (empty() == true){
		cout << "Nao eh possivel remover nenhum elemento, a pilha esta vazia." << endl;
		
	} else {
		top--;
	}
	
}

void topPilha(){
   if (empty() == true) {
        cout << "A pilha esta vazia." << endl;
        return;
    }
    cout << "O topo da pilha eh: " << vetor[top] << endl;
	
}

void print (){
	
   if (empty()) {
        cout << "A pilha esta vazia." << endl;
        return;
    }
    cout << "Conteudo da pilha:" << endl;
    for (int i = top; i >= 0; --i) {
        cout << "Pilha no indice " << i << " - " << vetor[i] << endl;
    }
	
}
