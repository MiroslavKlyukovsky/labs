#ifndef DIGITSSTRING
#define DIGITSSTRING
#include"alphabetstring_class.h"
class DigitsString: public AlphabetString{
	public:
		DigitsString(int,std::string);
		void change() override;
	private:
};
#endif
