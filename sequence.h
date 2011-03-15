#ifndef SEQUENCE_H_
#define SEQUENCE_H_

#include <string>

using namespace std;

class Sequence{
private:
	string id;
	string seq;
	bool aligned;
	string reverse(string );

public:
	Sequence();
	Sequence(string,string,bool);
	bool is_aligned();
	string get_sequence();
	string get_id();
	void set_sequence(string seq);
	void set_id(string id);
	void set_aligned(bool al);
	void reverse_complement();
};
#endif
