#pragma once
class Counter {
	//static int max;
private:
	int	k = 0; //0-59
public:
	void setValue(int n = 0) {
		this->k = n;
	}
	void increment()
	{
		if (k < 59)
			k++;
		else
			k = 0;
	}
	void setMax() {
		k = 59;
	}

	void setmin() {
		k = 0;
	}

	int getValue() { return k; }

};