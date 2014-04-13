#ifndef _POLYGON_H_
#define _POLYGON_H_

class Showable {
	public:
		virtual ostream& display(ostream& os) const = 0;
		virtual Showable& operator>>(Showable& ) = 0;
};

class Point : public Showable {
		private:
			int x, y;
		public:
			ostream& display(ostream& os) {
				
			}
			Point& operator+=(const Point& p, const Point& p1) {
			
			}
			int operator/(const Point& p, int n) {
			
			}

};

#endif
