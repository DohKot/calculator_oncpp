#include<iostream>
#include<cmath>
using namespace std;
long double factorial(int N) 
{  
    if (N < 0) 
    {  
        return 0;  
    }  
    if (N == 0) 
    {  
        return 1;  
    }  
    long double result = 1;  
    for (int i = 1; i <= N; i++) 
    {  
        result *= i;  
    }  
    return result;  
}
double Sum(double& x, double& y)
{
	double res;
	res = x + y;
	return res;
}
double multiplication(double& x, double& y)
{
	double res;
	res = x * y;
	return res;
}
double division(double& x, double& y)
{
	double res;
	res = x / y;
	return res;
}
double subtraction(double& x, double& y)
{
	double res;
	res=x-y;
	return res;
}

long double power(double& x, double& y)
{
	long double res;
	res = pow(x, y);
	return res;
}
double e(double& x, double& y)
{
	double res, g;
	double x1, y1;
	x1 = x;
	y1 = y;
	g = Sum(x1, y1);
	res = exp(g);
	return res;
}
double c(double& x, double& y)
{
	double res, g;
	double x1, y1;
	x1 = x;
	y1 = y;
	g = Sum(x1, y1);
	res = cos(g);
	return res;
}
double s(double& x, double& y)
{
	double res, g;
	double x1, y1;
	x1 = x;
	y1 = y;
	g = Sum(x1, y1);
	res = sin(g);
	return res;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	char key = 0;
	bool exit = 1;
	double x, y, d;
	double n = 15;
	cout << "Enter two numbers" << endl;
	cin >> x;
	cin >> y;

	while (key != 'K')
	{
		cout << "What operation do you to perform" << "\n" << "'+'  for addition " << " '-' for subtraction "<<"'/' for division " << " '*' for multiplication" << " '^' to raise to a power" << " 'e' for exponent" << " 'c' for cos" << " 's' for sin" << "'K' for exit"<<endl;

		cin >> key;
		switch (key)
		{
            case '-':
            {
                d=subtraction(x,y);
                cout<<d<<endl;
                break;
            }
            case '+':
            {
                d = Sum(x, y);
                cout << d << endl;
                break;
            }
            case '/':
            {
                if (y != 0)
                {
                    d = division(x, y);
                    cout << d << endl;
                }
                else
                {
                    cout << "∞" << endl;
                }
                break;
            }
            case '*':
            {
                d = multiplication(x, y);
                cout << d << endl;
                break;
            }
            case '^':
            {
                if (x<=40 && y<=40)
                {
                    d = power(x, y);
                    cout << d << endl;

                }
                else
                {
                    cout<<"Много"<<endl;
                }
                break;
            }
            case 'e':
            {
                if (y <= 50 && x<=50)
                {
                    cout << e(x, y) << endl;
                }
                else
                {
                    cout << "Много" << endl;
                }
                break;
            }
            case 's':
            {
                d = s(x,y);
                cout << d << endl;
                break;
            }
            case 'c':
            {
                d = c(x, y);
                cout << d << endl;
                break;
            }
        }
	}
	return 0;
}
