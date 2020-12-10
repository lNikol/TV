//Лавринов Николай
// TV
// true, false
#include "lib.h"
using namespace std;
int main() {
	TV LGultra8k;
	LGultra8k.Show();
	LGultra8k.TVon();
	LGultra8k.SetchannelChange(99);
	LGultra8k.Show();
	LGultra8k.SetchannelChangePlusOne();
	LGultra8k.Show();
	LGultra8k.SetchannelChangePlusOne();
	LGultra8k.Show();

	return 0;
}