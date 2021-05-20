#include "LSFR.h"
#include "RGN.h"

int main() {

	LSFR* lsfr16 = new LSFR();
	vector<int> & coeff = lsfr16->get_coeff_();
	int bits = lsfr16->get_bits();
	int size = coeff.size();
	for(int i = 0; i < size; i++) {
		cout << coeff[i] << endl;


	}
	RGN* rgn = new RGN();
	rgn->get_seed(lsfr16->get_seed(),bits);
	lsfr16->print_seed();

return 0;
};