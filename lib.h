#pragma once
#include <vector>
#include <string>
const int channelqty = 10;
class TV {
private:
	bool isOn;
	int channel;

	std::string channelsList[channelqty];
public:
	TV();

	void TVon();
	void TVoff();

	void Show();

	int GetchannelChange();
	void SetchannelChange(int);

	void SetChannelList(std::string fList[],int);

	void SetchannelChangeMinusOne();
	void SetchannelChangePlusOne();
};