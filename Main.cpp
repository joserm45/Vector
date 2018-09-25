#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void main()
{
	int x, y, z = 1;
	vector<int> vect(2,3,4);
	vector<int> vect2(1, 1, 1);
	vect.x;
	vect.Normalize(vect);
	vect.DistanceTo(vect2);
	printf_s("Distance sqrt: %f", vect);
	vect.DistanceSquared(vect2);
	printf_s("Distance squared: %f", vect);
}