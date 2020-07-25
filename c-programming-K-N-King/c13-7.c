#include <stdio.h>

void main()
{


//arrays of Strings,


	// two dimension vs. ragged array with pointers
	//

	char planets[][8] = { "Mercury", "Venus", "Earth",
				"Mars", "Jupiter", "Saturn",
				"Uranus", "Neptune", "Pluto" };

	char *planets1[] = { "Mercury", "Venus", "Earth",
                                "Mars", "Jupiter", "Saturn",
                                "Uranus", "Neptune", "Pluto" };
	for (int i=0; i <=8; i++) {
		printf ( "planet %i\t\t %s\n", i, planets[i]);
		printf ( "planet1 %i\t\t %s\n", i, planets1[i]);
	};

}

