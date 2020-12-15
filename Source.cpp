//Лавринов Николай
// TV
// true, false
#include <iostream>
#include "lib.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	string list[] = { "БТ1","БТ2","БТ3","БТ5","ОНТ","МИР","НТВ-Беларусь",
		"СТС","СТВ","БелМузТВ" };
	int size = 10;
	TV LGultra8k;
	LGultra8k.Show();
	LGultra8k.TVon();
	LGultra8k.SetChannelList(list, size);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(1);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(2);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(3);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(4);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(5);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(6);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(7);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(8);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(9);
	LGultra8k.Show();
	LGultra8k.SetchannelChange(10);
	LGultra8k.Show();
	LGultra8k.SetchannelChangeMinusOne();
	LGultra8k.Show();
	LGultra8k.SetchannelChangePlusOne();
	LGultra8k.Show();


	return 0;
}