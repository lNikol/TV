#pragma once

class TV {
private:
	bool isOn;
	int channel;
	const int channelqty= 100;
public:
	TV();

	void TVon();
	void TVoff();

	void Show();

	int GetchannelChange();
	void SetchannelChange(int);

	void SetchannelChangeMinusOne();
	void SetchannelChangePlusOne();
};