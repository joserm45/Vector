#ifndef VECT_H
#define VECT_H

template <class TYPE>
class vector {
		

public:

	TYPE x, y, z;

		vector(const TYPE& vec_x, const TYPE& vec_y, const TYPE& vec_z) {
			x = vec_x;
			y = vec_y;
			z = vec_z;

	}
		~vector() {}

			
		vector operator +(const vector& vec) const{
			vector vec_operator;

			vec_operator.x = x + vec.x;
			vec_operator.y = y + vec.y;
			vec_operator.z = z + vec.z;

			return (vec_operator);
		}

		vector operator -(const vector& vec)const {
			vector vec_operator;

			vec_operator.x = x - vec.x;
			vec_operator.y = y - vec.y;
			vec_operator.z = z - vec.z;

			return (vec_operator);
		}

		void operator +=(const vector& vec) {
			

			x  += vec.x;
			y  += vec.y;
			z  += vec.z;

		}

		void operator -=(const vector& vec) {
			

			x  -= vec.x;
			y  -= vec.y;
			z  -= vec.z;

			
		}

		bool operator ==(const vector& vec) {
			if (x == vec.x && y == vec.y && z == vec.z)
				return true;
			else
				return false;
		}


		void zero() {

			x = 0;
			y = 0;
			z = 0;
		}

		bool IsZero() {

			if (x = 0 && y == 0 && z == 0)
				return true;
			else
				return false;
		}
		
		vector Normalize(const vector& vec) const {
			vector normalizeVect = 0;

			vector modulVect = sqrt(vec.x ^ 2 + vec.y ^ 2 + vec.z ^ 2);

			normalizeVect = vec / modulVect;

			return normalizeVect;
		}

		float DistanceTo(vector vec) const {
			return sqrt((vec.x - x)*(vec.x - x) + (vec.y - y)*(vec.y - y) + (vec.z - z)*(vec.z - z));
			
		}

		float DistanceTo(vector vec) const {
};

#endif
