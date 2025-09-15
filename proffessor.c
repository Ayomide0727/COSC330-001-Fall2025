#include <stdio.h>
#include <stdlib.h>

struct Professor {
	char firstName[20];
	char lastName[20];
	double Salary;
};
int main(){
	struct Professor ProfessorArr1[100];

	printf("Size of Professor Structure is: %zu bytes\n", sizeof(struct Professor));
	printf("Size of ProfessorArr1 array is: %zu bytes\n", sizeof(ProfessorArr1));

	struct Professor *ProfessorArr2;

	ProfessorArr2 = (struct Professor *)malloc(200 * sizeof(struct Professor));

	if (ProfessorArr2 == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Size of ProfessorArr2 array is: %zu bytes\n", sizeof(ProfessorArr2));

	printf("Address of ProfessorArr1[0]: %p\n", (void*)&ProfessorArr1[0]);
	printf("Address of ProfessorArr1[99]: %p\n", (void*)&ProfessorArr1[99]);

	printf("Address of ProfessorArr2[0]: %p\n", (void*)&ProfessorArr2[0]);
	printf("Address of ProfessorArr2[99]: %p\n", (void*)&ProfessorArr2[99]);


	free(ProfessorArr2);
	return 0;
}
