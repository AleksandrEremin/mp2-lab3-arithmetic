// ����� ��� ���������� �������������� ���������

#include <gtest.h>
#include <arithmetic.h>

TEST(Lexema, �����_�������_������)
{
	ASSERT_NO_THROW(Lexema L);
}

TEST(arithmetic, �����_�������_������)
{
	string Primer = "(5+5))";
	ASSERT_NO_THROW(arithmetic arith(Primer));
}

TEST(arithmetic, ��������_������_1)
{
	string Primer = "(5+5))";
	arithmetic arith(Primer);
	ASSERT_ANY_THROW(arith.Check());
}

TEST(arithmetic, ��������_������_2)
{
	string Primer = ")(5+5))";
	arithmetic arith(Primer);
	ASSERT_ANY_THROW(arith.Check());
}

TEST(arithmetic, ��������_��_�������)
{
	string Primer = "(5+?9)";
	arithmetic arith(Primer);
	ASSERT_ANY_THROW(arith.BreakLexemes());
}

TEST(arithmetic, ����_1)
{
	string Primer = "(5,123-(2,56*(12,3/89,0+5,2)-(15,6*2)))-56,3";
	arithmetic arith(Primer);
	arith.Check();
	arith.BreakLexemes();
	arith.PolishLexemes();
	ASSERT_EQ(-34, round(arith.PolishLexemesSolution()));
}



