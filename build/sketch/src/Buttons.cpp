#line 1 "/home/hugo-lopes/arduino/watch/watch/src/Buttons.cpp"
#include "../includes/Buttons.hpp"

    Buttons::Buttons(){}
	Buttons::~Buttons(){}

    bool Buttons::getAdd() const{
		return (_add);
	}
	bool Buttons::getChange() const{
		return (_change);
	}

	void Buttons::setChange(){
		_add ? !_add : _add;
	}
	
	void Buttons::setAdd(){
		_change ? !_change : _change ;
	}
