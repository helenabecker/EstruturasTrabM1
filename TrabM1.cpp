#include <iostream>
#include <string>

using namespace std;

#define TAM 10;

template <typename T>
struct Pilha {
    T vetor[TAM];
    int topo;
};

template <typename T>
struct Fila {
    T vetor[TAMF];
    int comeco, fim;
};

#pragma region FuncoesPilha

template <typename T>
void inicializarPilha(Pilha <T>& p) {
	p.topo = -1;
}

template <typename T>
bool inserirPilha(Pilha <T>& p, T valor) {
    if (p.topo == TAM - 1) return false;
    p.topo++;
    p.vetor[p.topo] = valor;
    return true;
}


template <typename T>
bool retirarPilha(Pilha <T>& p, T &valor) {
	if (p.topo == -1) return false;
	valor = p.vetor[p.topo];
	p.topo--;
	return true;
}

template <typename T>
void mostrarPilha(Pilha <T> p, string frase) {
    T aux;
    cout << frase;
	while (retirarPilha(p, aux)) {
		cout << aux << " ";
	}
    cout << endl;
}

#pragma endregion FuncoesPilha

#pragma region FuncoesFila

template <typename T>
void inicializarFila(Fila <T>& f) {
    f.comeco = 0;
    f.fim = -1;
}

template <typename T>
bool inserirFila(Fila <T>& f, T valor) {
    if (f.fim == TAM - 1) return false;
    f.fim++;
    f.vetor[f.fim] = valor;
    return true;
}

template <typename T>
bool retirarFila(Fila <T>& f, T& valor) {
    if (f.comeco > f.fim) return false;
    valor = f.vetor[f.comeco];
    f.comeco++;
    return true;
}

template <typename T>
void mostrarFila(Fila <T> f, string frase) {
    T aux;
    cout << frase;
    while (retirarFila(f, aux)) {
        cout << aux << " ";
    }
    cout << endl;
}

#pragma endregion FuncoesFila

template <typename T>
bool converterNotacao(Fila <T> fila, Fila <T> &res) {
    
}

int main()
{
    Fila <char> notacaoH; //guarda a notação húngara
    Fila <char> notacaoP; //guarda a notação polonesa

    string expressao;
    char resposta, resolver;

    do {
        system("cls");
        cout << "Entre com a expressao: ";
        getline(cin, expressao);

        //criar função que quebra a string para preencher a fila
            //dentro da função, criar um contador e somar cada parênteses encontrado
            //se ao final da quebra da string o numero de parênteses for ímpar (fazer um if (qtd % 2 != 0) return false
            //se a função retornar false nem continua o resto

        converterNotacao(notacaoH, notacaoP);

        mostrarFila(notacaoH, "Notacao Hungara: ");
        mostrarFila(notacaoP, "Notacao Polonesa: ");

        cout << "Quer calcular o resultado da expressao (s/n)? ";
        cin >> resolver;

        if (resolver == 's' || resolver == 'S') {
            //perguntar qual o valor para cada letra da expressao
            //chamar função que resolve a operação
        }

        cout << "Deseja digitar outra expressao (s/n)? ";
        cin >> resposta;
    } while (resposta == 's' || resposta == 'S');
}
