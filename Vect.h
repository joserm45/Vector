#ifndef 

template <class TYPE>
class vector {
	
private:

		TYPE x, y, z;

public:
		vector(const vector& vec_x, const vector& vec_y, const vector& vec_z) {
			x = vec_x;
			y = vec_y;
			z = vec_z;

	}
		~vector() {}

			
		vector operator +(const vector& vec) const{
			TYPE sum;

			sum.x = x + vec.x;
			sum.y = y + vec.y;
			sum.z = z + vec.z;

			return (sum);
		}

		vector operator -(const vector& vec)const {
			vector sum;

			sum.x = x - vec.x;
			sum.y = y - vec.y;
			sum.z = z - vec.z;

			return (sum);
		}

		vector operator +=(const vector& vec) {
			vector sum;

			x  += vec.x;
			y  += vec.y;
			z  += vec.z;

		}

		vector operator -=(const vector& vec) {
			TYPE sum;

			x  -= vec.x;
			y  -= vec.y;
			z  -= vec.z;

			return (sum);
		}

		bool operator ==(const vector& vec) {
			if (x == vec.x && y == vec.y && z == vec.z)
				return 1;
			else
				return 0;
		}


		void zero() {

			x = (TYPE)0;
			y = (TYPE)0;
			z = (TYPE)0;
		}

		bool IsZero() {

			if (x = 0 && y == 0 && z == 0)
				return 1;
			else
				return 0;
		}
		
		vector Normalize(const vector& vec) const {
			vector normalizeVect = 0;

			vector modulVect = sqrt(vec.x ^ 2 + vec.y ^ 2 + vec.z ^ 2);

			normalizeVect = vec / modulVect;

			return normalizeVect;
		}

		/*float DistanceTo(vector vec) const {
		sqrt((vec.x - x)*(vec.x -x) +(vec.y-y)*(vec.y-y)+
			
		}*/
};


