// ���������� ������� � ������� ��� ���������� �������������� ���������
#include "stack.h"
#include <string>
#include <vector>

struct Lexema
{
	string Val;   //�������� �������;
	int Priority; //��������� �������;
	double Num;   //�������� �����;
	int type;     //��� �������: 0 - ������;
				  //             1 - �����;
				  //             2 - ��������;
				  //             3 - ����������.
	Lexema() {}
	Lexema(string V);
	Lexema(const Lexema& Lex);
	char ReVal() { return Val[0]; }
	//double ReNum() { return Num; }
	int operator==(const char& v) const;
	int operator!=(const char& v) const;
	friend ostream& operator<<(ostream& out, const Lexema& Lex)
	{
		out << Lex.Val;
		return out;
	}
	~Lexema() {}


};


class arithmetic 
{
private:
	string Input;
	string Polish;
	double Res;
	Lexema* LexInput;  //������ ������;
	Lexema* LexPolish; //������ ������ � �������� ������;
	int Size;

public:
	arithmetic() {}
	arithmetic(string);
	void BreakLexemes();
	void PolishLexemes();
	double PolishLexemesSolution();
	void Check() const;
	~arithmetic() { 
		delete[] LexInput;
	delete[] LexPolish;
	}
};