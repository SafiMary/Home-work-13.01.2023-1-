#pragma once
#include <iostream>

template <typename T>
class Calculator {
public:
	//Calculator() : _num1(6), _num2(3) {}
	Calculator(T num1, T num2): _num1(num1) , _num2(num2){}
	~Calculator(){}
	void setNum1(T num1) {
		_num1 = num1;
	}
	void setNum2(T num2) {
		_num2 = num2;
	}
	Calculator <T>getNum1() {
		return _num1;
	}
	Calculator <T>getNum2() {
		return _num2;
	}
	void sum() { //��������
		std::cout << "\n��������� �������� = " <<  _num1 + _num2 << '\n';
	}

	void sub() { //���������
		std::cout << "\n��������� �������� = " << _num1 - _num2 << '\n';
	}
	void mult() { //���������
		std::cout << "\n��������� ��������� = " << _num1 * _num2 << '\n';
	}
	T div() { //�������
		if (_num1 != 0) {
			std::cout << "\n��������� ������� = " ;
			return (_num1 / _num2);
		}
		else std::cout << "\n������!\n" << std::endl;
	}

private:
	T &_num1;
	T &_num2;



};