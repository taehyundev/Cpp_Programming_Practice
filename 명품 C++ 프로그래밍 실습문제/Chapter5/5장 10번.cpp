#include <iostream>
#include <cstring>
using namespace std;
class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};
Buffer& append(Buffer &buf, string text) 
{
	//Why use '&'?
	buf.add(text);
	return buf;
	
}
int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}