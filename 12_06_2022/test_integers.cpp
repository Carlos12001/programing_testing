#include <iostream>
#include <iomanip>
#include <bitset>
/**
 * Checks the result of the middle point
 * And >> operator 
 */
int main(int agrc, char* agrv[]){
	int a, b, c;
	float d, e, f;
	a = 16;
	b = 5;
	c = (a+b)/2;
	d = ((float)a+(float)b)/2;
	e = b>>2;
	f = b<<2;
	std::cout	<<	std::fixed	<<	std::setprecision(2);
	std::cout <<  c << std::endl;
	std::cout	<<	d	<< std::endl;
	std::cout <<	b	<<	" : "<< std::bitset<8>(b).to_string() << std::endl;
	std::cout <<	b	<<	">>2 = "	<<	e	<<	" : "<< std::bitset<8>(e).to_string() << std::endl;
	std::cout <<	b	<<	"<<2 = "	<<	f	<<	" : "<< std::bitset<8>(f).to_string() << std::endl;
	return 0;
}
