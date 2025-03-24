# include <iostream>

using namespace std;

int factorial(int n){
	if (n < 0) {
		throw invalid_argument("Error: Factorial de un numero negativo");
	}
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main() {
	try {
		int numero;
		cout << "introduce un numero para calcular su factorial: ";
		cin >> numero;

		int resultado = factorial(numero);
		cout << "El factorial de " << numero << " es: " << resultado << endl;
	}
	catch (const exception& e) {
		cerr<<"Excepcion capturada:" << e.what() << endl;
	}
	catch (...) {
		cerr << "Excepcion desconocida" << endl;
	}
	return 0;
}	