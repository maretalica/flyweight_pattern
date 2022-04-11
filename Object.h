#include <iostream>

using namespace std;

struct ukuran {
	string type;
	int size = 0;
};

class Object {
private:
	string type;
	ukuran size[2];
	int kord = 0;
	bool status = false;
public:
	void setTipe(string type);
	string getTipe();
	void generate();
	void setUkuran(int x, int y);
	ukuran* getUkuran();
	void use();
	void setBool(bool y);
	bool getBool();
	void setKord(int x);
	int getKord();
};