/*
№ 8 Шаблоны функций
Модифицировать проект, созданный в предыдущем практикуме №7. 
Написать функцию-шаблон в соответствии с вариантом. 
Проверить работу функции с int, double, пользовательским классом (для манипуляций выбрать одно из полей класса).
Вариант 23:
Написать функцию-шаблон, которая шифрует строку в соответсвии с паролем.
*/

#include "stdafx.h" 
#include "iostream" 
#include "string.h" 
#include "button.h"

using namespace std;
template<class T>
class String
{
private:
	T str;
	//button but;
public:

	String(T buf)
	{
		str = buf;

		//strbut = strbut1;
	}

	friend String operator<(String& x, String &y)
	{
		if (x.str.but < y.str.but) cout << "True." << endl;
		else cout << " False." << endl;
		return 0;

	}

	friend String operator+(String &x, String &y)
	{
		cout << x.str.but + y.str.but << endl;
		return 0;
	}

	friend String operator-(String& x, String&y)
	{
		x.str.but = x.str.but + 100;
		cout << x.str.but - y.str.but << endl;
		return 0;
	}

	friend String operator*(String&x, int s)
	{

		if (x.str.but == 5) x.str.but = s;
		cout << x.str.but << endl;;
		return 0;
	}

	//-------------------------------------------------------------------------------------

	friend String operator<=(String& x, String &y)
	{
		if (x.str < y.str) cout << "True." << endl;
		else cout << " False." << endl;
		return 0;

	}

	friend String operator+=(String &x, String &y)
	{
		cout << x.str + y.str << endl;
		return 0;
	}

	friend String operator-=(String& x, String&y)
	{
		x.str = x.str + 100;
		cout << x.str - y.str << endl;
		return 0;
	}

	friend String operator*=(String&x, int s)
	{

		if (x.str == 11) x.str = s;
		cout << x.str << endl;;
		return 0;
	}

	template <class TT>
	void password(TT pass)
	{
		int n = 0;

		for (int i = 0; i <= 8; i++)
		{
			cout << "Write symbol: ";
			cin >> pass[i];
			n++;
		}

		for (int i = 0; i <= n - 1; i++)
		{
			if ((pass[i] >= '1'&& pass[i] <= '9') || (pass[i] >= 'a' && pass[i] <= 'z')) pass[i] = '*';
			cout << pass[i];
		}
		cout << endl;
	}

};







void main()
{
	setlocale(LC_CTYPE, "rus");

	String<button> a(1);
	String<button> b(2);
	String<button> c(5);
	String<int> r(9);
	String<int> t(4);
	String<int> v(11);

	cout << "a < b? = ";
	(a < b);
	cout << "a + b: ";
	(a + b);
	cout << "a(+100) - b = ";
	(a - b);
	cout << "c(5) * 2 = ";
	(c * 2);

	cout << endl;

	cout << "r < t ? = ";
	(r <= t);
	cout << "r + t = ";
	(r += t);
	cout << "r - t = ";
	(r -= t);
	cout << "v(11) * 1 = ";
	(v *= 1);
	cout << endl;


	//=========================================================================
	int w1[9]; 
	char w2[9]; 
	double w3[9];
	cout << "Write password (9 english symbols): " << endl;
	a.password(w1);
	b.password(w2);
	c.password(w3);

}
