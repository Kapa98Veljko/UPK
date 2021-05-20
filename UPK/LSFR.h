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
	void print_polynom() const;
	void print_secv20();
	void xor_(int k);
	void shift(int j);
	void secv20();

private:
	vector<int> seed_;
	vector <int> coeff_;
	int Q_[21][16];//20 sekvecnijalnih plus jedna pozicija za seed
	int bits_;
	int D0_;
};
//inline methods
inline vector<int>& LSFR::get_seed() {
	return seed_;
}

inline int LSFR::get_bits() const
{
	return bits_;
}
inline vector<int> & LSFR::get_coeff_()
{
	return coeff_;
}
#endif _LSFR_H_