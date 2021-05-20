#include "LSFR.h"
#include "RGN.h"

int main() {

	LSFR* lsfr16 = new LSFR();
	lsfr16->print_polynom();
	RGN* rgn = new RGN();
	rgn->get_seed(lsfr16->get_seed(), lsfr16->get_bits());
	lsfr16->print_seed();

	lsfr16->secv20();
	lsfr16->print_secv20();

return 0;
};