#include <iostream>
#include "lib.h"
TV::TV() {
	isOn=false;
	channel = 1;
}


void TV::TVon() { isOn = true; }
void TV::TVoff() { isOn = false; }


void TV::SetchannelChange(int fchannel) { channel = fchannel; }
int TV::GetchannelChange() { return channel; }

void TV::SetchannelChangeMinusOne() { 
	channel --; 
	if (channel == 0) {	channel == 99;}
}
void TV::SetchannelChangePlusOne() {
	channel++;
	if (channel == channelqty) { channel == 1; }
}

void TV::Show() {
	if (isOn) {	std::cout << "TV is on\n"<<"Channel: "<<channel << std::endl;	}
	else { std::cout << "TV is off" << std::endl;	}
}