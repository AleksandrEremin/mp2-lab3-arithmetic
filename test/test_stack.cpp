// ����� ��� �����

#include "stack.h"
#include <gtest.h>

TEST(Stack, �����_�������_����)
{
	ASSERT_NO_THROW(Stack<double> stack(6));
}

TEST(Stack, ������_�������_����_�������������_�������)
{
	ASSERT_ANY_THROW(Stack<double> stack(-1));
}

TEST(Stack, �����_��������_�_����)
{
	Stack<double> stack(1);
	ASSERT_NO_THROW(stack.StackPush(12.3));
}

TEST(Stack, �����_�����_��_�����_�_��������_��_�������)
{
	Stack<double> stack(1);
	stack.StackPush(12.3);
	ASSERT_EQ(12.3, stack.StackGet());
	ASSERT_EQ(1, stack.StackEmpty());
}

TEST(Stack, �����_���������_�������_�������_���_��a�����)
{
	Stack<double> stack(1);
	stack.StackPush(15.3);
	ASSERT_EQ(15.3, stack.StackSee());
	ASSERT_EQ(0, stack.StackEmpty());
}

TEST(Stack, ������_�����_��_�������_�����)
{
	Stack<double> stack(1);
	ASSERT_ANY_THROW(stack.StackGet());
}

TEST(Stack, �����_��������_����)
{
	Stack<double> stack(2);
	stack.StackPush(15.3); 
	stack.StacClean(); 
	ASSERT_EQ(1, stack.StackEmpty());
}



