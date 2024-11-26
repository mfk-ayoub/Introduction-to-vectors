#include "vectors.h"
#include <math.h>
 
t_vec3 new_vector(float x, float y, float z)
{
	t_vec3	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	return (vec);
}

t_vec3 add_vector(t_vec3 v1, t_vec3 v2)
{
	t_vec3 new_vec;

	new_vec.x =  v1.x + v2.x;
	new_vec.y =  v1.y + v2.y;
	new_vec.z =  v1.z + v2.z;
	return (new_vec);
}

t_vec3 subtract_vector(t_vec3 v1, t_vec3 v2)
{
	t_vec3 new_vec;

	new_vec.x =  v1.x - v2.x;
	new_vec.y =  v1.y - v2.y;
	new_vec.z =  v1.z - v2.z;
	return (new_vec);
}

float dot_product(t_vec3 v1, t_vec3 v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y) +(v1.z * v2.z));
}