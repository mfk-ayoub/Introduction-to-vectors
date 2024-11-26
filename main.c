
#include "vectors.h"
#include <stdio.h>


int main(int ac,char **av)
{
	t_vec3  vec1;
	t_vec3 vec2;
	t_vec3 add_vec;
	vec1 = new_vector(7,9,8);
	vec2 = new_vector(3,1,2);

	float d_product = dot_product(vec1,vec2);

	add_vec = subtract_vector(vec1,vec2);
	printf("x cord = %f\n",add_vec.x);
	printf("y cord = %f\n",add_vec.y);
	printf("z cord = %f\n",add_vec.z);

	printf("dot product of vec1 and vec2 %f\n",d_product);
}