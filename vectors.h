

typedef struct vector3
{
	float	x;
	float	y;
	float 	z;
} t_vec3;


t_vec3 new_vector(float x, float y, float z);
t_vec3 add_vector(t_vec3 v1, t_vec3 v2);
t_vec3 subtract_vector(t_vec3 v1, t_vec3 v2);
float dot_product(t_vec3 v1, t_vec3 v2);