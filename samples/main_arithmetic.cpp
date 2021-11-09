// реализация пользовательского приложения
#include <arithmetic.h>
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "=== Calculator ===" << endl << endl;
	int N = 1;
	string Primer;
	while (N == 1)
	{
		cout << "Write: ";
		getline(cin, Primer, '\n');
		cout << endl;
		arithmetic arith(Primer);
		arith.Check();
		arith.BreakLexemes();
		arith.PolishLexemes();
		arith.PolishLexemesSolution();
		cout << "1. Stay;" << endl;
		cout << "2. Exit;" << endl;
		cin >> N;
		std::cin.ignore();
		cout << "---------------------------------" << endl << endl;
		Primer.clear();
	}


}
