#include <iostream>
#include "lib.h"
TV::TV() {
	isOn = false;
	channel = 1;
	for (int i = 0; i < channelqty; i++) {
		channelsList[i] = ' ';
	}
}


void TV::TVon() {
	isOn = true; channel == 1;
}
void TV::TVoff() { isOn = false; }


void TV::SetchannelChange(int fchannel) { channel = fchannel; }
int TV::GetchannelChange() { return channel; }

void TV::SetchannelChangeMinusOne() { 
	channel --; 
	if (channel == 0) {
		channel = 10;
	}
}
void TV::SetchannelChangePlusOne() {
	channel++;
	if (channel == channelqty) {
		channel = 1;
	}
}

void TV::Show() {
	if (isOn) {
		std::cout << "TV is on" << std::endl
			<<  channel << " Channel: " << channelsList[channel - 1] << std::endl;	}
	else { std::cout << "TV is off" << std::endl;	}
}

void TV::SetChannelList(std::string fList[],int size) {
	for (int i = 0; i < size; i++) {
		channelsList[i] = fList[i];
		}
}