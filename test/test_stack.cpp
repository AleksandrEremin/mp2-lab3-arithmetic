// тесты для стека

#include "stack.h"
#include <gtest.h>

TEST(Stack, Можно_создать_стек)
{
	ASSERT_NO_THROW(Stack<double> stack(6));
}

TEST(Stack, Нельзя_создать_стек_орицательного_размера)
{
	ASSERT_ANY_THROW(Stack<double> stack(-1));
}

TEST(Stack, Можно_добавить_в_стек)
{
	Stack<double> stack(1);
	ASSERT_NO_THROW(stack.StackPush(12.3));
}

TEST(Stack, можно_взять_из_стека_и_проверка_на_пустоту)
{
	Stack<double> stack(1);
	stack.StackPush(12.3);
	ASSERT_EQ(12.3, stack.StackGet());
	ASSERT_EQ(1, stack.StackEmpty());
}

TEST(Stack, Можно_посмотеть_верхний_элемент_без_удaления)
{
	Stack<double> stack(1);
	stack.StackPush(15.3);
	ASSERT_EQ(15.3, stack.StackSee());
	ASSERT_EQ(0, stack.StackEmpty());
}

TEST(Stack, Нельзя_взять_из_пустого_стека)
{
	Stack<double> stack(1);
	ASSERT_ANY_THROW(stack.StackGet());
}

TEST(Stack, Можно_очистить_стек)
{
	Stack<double> stack(2);
	stack.StackPush(15.3); 
	stack.StacClean(); 
	ASSERT_EQ(1, stack.StackEmpty());
}



