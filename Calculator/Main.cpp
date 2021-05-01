#include <iostream>

int main()
{
	char operands;
	double a = 0, b = 0, answer = 0;

	while (true)
	{
		std::cout << "Enter the two numbers you would like to operate: ";
		std::cin >> a >> b;

		std::cout << "Enter the operation: [+, -, *, /] ";
		std::cin >> operands;

		switch (operands)
		{
		case '+':
			answer = a + b;
			std::cout << "\nYour answer is : " << answer << std::endl;
			break;

		case '-':
			answer = a - b;
			std::cout << "\nYour answer is : " << answer << std::endl;
			break;

		case '*':
			answer = a * b;
			std::cout << "\nYour answer is : " << answer << std::endl;
			break;

		case '/':
			answer = a / b;
			std::cout << "\nYour answer is : " << answer << std::endl;
			break;

		default:
			std::cout << "Incorrect operation." << std::endl;
			break;
		}
	}
}