

template <class TYPE>
class Vector {
	
private:

		TYPE x, y, z = 0;

public:
		Vector (TYPE vec) {
			x = vec.x;
			y = vec.y;
			z = vec.z;

	}
		~Vector () {}

			
		TYPE operator +(const TYPE& vec) const{
			TYPE sum;

			sum.x = x + vec.x;
			sum.y = y + vec.y;
			sum.z = z + vec.z;

			return (sum);
		}

		TYPE operator -(const TYPE& vec)const {
			TYPE sum;

			sum.x = x - vec.x;
			sum.y = y - vec.y;
			sum.z = z - vec.z;

			return (sum);
		}

		void operator +=(const TYPE& vec) {
			TYPE sum;

			x  += vec.x;
			y  += vec.y;
			z  += vec.z;

		}

		TYPE operator -=(const TYPE& vec) {
			TYPE sum;

			x  -= vec.x;
			y  -= vec.y;
			z  -= vec.z;

			return (sum);
		}

		bool operator ==(const TYPE& vec) {
			if (x == vec.x && y == vec.y && z == vec.z)
				return 1;
			else
				return 0;
		}


		TYPE zero() {

			TYPE vec = (0, 0, 0);
			return vec;
		}

		bool IsZero() {

			if (x = 0 && y == 0 && z == 0)
				return 1;
			else
				return 0;
		}
		
		TYPE Normalize(const TYPE& vec) const {
			TYPE normalizeVect = 0;

			TYPE modulVect = sqrt(vec.x ^ 2 + vec.y ^ 2 + vec.z ^ 2);

			normalizeVect = vec / modulVect;

			return normalizeVect;
		}

		/*TYPE DistanceTo(TYPE vec) const {
			
		}*/
};


