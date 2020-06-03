// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:
	int num;
	int den;

	int gcd(int a, int b);
	int lcm(int a, int b);

public:
	Fraction();
	Fraction(int, int = 1);

	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);

	bool operator<(const Fraction&);
	bool operator>(const Fraction&);
    friend std::ostream& operator <<(std::ostream&, const Fraction&);
    friend std::istream& operator >>(std::istream&, Fraction&);

    Fraction operator+(const Fraction&);
};


#endif /* FRACTION_H_ */
