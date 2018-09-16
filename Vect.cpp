#include <stdlib.h>
#include <stdio.h>
#include <math.h>

template <class TYPE>
class Vector {
	public

		TYPE x, y, z = 0;

		Vector<TYPE>::Vector(Vector vec) {
			x = vec.x;
			y = vec.y;
			z = vec.z;

	}
		~Vector<TYPE>::Vector() {}

		
		void Normalize(Vector<TYPE> vec) {
			int normalizeVect = 0;
			
			int modulVect = sqrt(vec.x ^ 2 + vec.y ^ 2 + vec.z ^ 2);
			
			normalizeVect = vec / modulVect;
	}

		Vector operator +(Vector vec) {
			Vector sum;

			sum.x = x + vec.x;
			sum.y = y + vec.y;
			sum.z = z + vec.z;

			return (sum);
		}

		Vector operator -(Vector vec) {
			Vector sum;

			sum.x = x - vec.x;
			sum.y = y - vec.y;
			sum.z = z - vec.z;

			return (sum);
		}

		Vector operator +=(Vector vec) {
			Vector sum;

			x  += vec.x;
			y  += vec.y;
			z  += vec.z;

			return sum;
		}

		Vector operator -=(Vector vec) {
			Vector sum;

			x  -= vec.x;
			y  -= vec.y;
			z  -= vec.z;

			return (sum);
		}

		bool operator ==(Vector vec) {
			if (x == vec.x && y == vec.y && z == vec.z)
				return 1;
			else
				return 0;
		}


		Vector zero() {

			Vector vec = (0, 0, 0);
			return vec;
		}

		Vector IsZero() {

			if (x = 0 && y == 0 && z == 0)
				return 1;
			else
				return 0;
		}
		
		
};


