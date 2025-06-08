#ifndef BUTTONS_HPP
#define BUTTONS_HPP


class Buttons {
	public:
		Buttons();
		~Buttons();
	
		bool getAdd() const;
		bool getChange() const;
		void setChange();
		void setAdd();
	
	private:
		bool _add;
		bool _change;
};

#endif