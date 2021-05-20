#ifndef  _LSFR_H_
#define  _LSFR_H_

#include<iostream>
#include<vector>

using namespace std;

class LSFR{

public:
	LSFR();
	int get_bits() const;
	vector<int>& get_seed();
	vector<int> & get_coeff_();
	void print_seed() const;

private:
	vector <int> q_;
	vector <int> seed_;
	vector <int> coeff_;
	vector <vector<int> * > Q_;
	int bits_;
};
//inline methods
inline vector<int>& LSFR::get_seed() {
	return seed_;
}
#endif _LSFR_H_