#include <stdio.h>

class parent
{
public:
	virtual void Voice() {
		printf("あにまる¥n");
	};
};

class childA : public parent
{
public:
	 void Voice() {
		printf("子供Aっす\n");
	};
};

class childB : public parent
{
public:
	 void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	parent* kazoku[2] = { new childA,new childB };

	kazoku[0]->Voice();
	kazoku[1]->Voice();

	delete kazoku[0];
	delete kazoku[1];

	return 0;
}
