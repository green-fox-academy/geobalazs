#include <stdio.h>

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
int get_surface(struct rectangular_cuboid rec_cube){

    int surface = 2*(rec_cube.a * rec_cube.b + rec_cube.a * rec_cube.c + rec_cube.b * rec_cube.c);

    return surface;
}
// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume
int get_volume(struct rectangular_cuboid rec_cube){

    int volume = rec_cube.a * rec_cube.b * rec_cube.c;

    return volume;
}

int main()
{

    struct rectangular_cuboid rec_cube_1 = { 1 , 2 , 3};

    printf("%d\n" , get_surface(rec_cube_1));

    printf("%d" , get_volume(rec_cube_1));

   // int get_surface = 2*(cube1.a * cube1.b + cube1.a * cube1.c + cube1.b * cube1.c);

  //  printf("%d" , get_surface);

    return 0;
}
