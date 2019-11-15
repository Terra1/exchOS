/* FVA (Function/Variable/Array) Name List:
wtvm: Write to Video Memory
wltx: Welcome Text
c1: Counter 1
*/
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
int c1;
char wltx[7] = { "W", "e", "l", "c", "o", "m" "e" }; //Array containing the word "welcome" in individual characters.
void wtvm() //Creates the "Write to Video Memory" function.
{
	char *wtvm = (char*)0xB8000; //Creates a pointer to the start of VGA video memory named "wtvm".
	for (c1 != 7; c1 < 8; c1++) //For loop, executes 7 times.
	{
		*wtvm = wltx[c1]; //Writes "Welcome" to video memory.
		wtvm++; //Increments
		wtvm++; //wtvm
		wtvm++; //by three.
	}
}

kernel_main()
{
	wtvm(); //Executes the function "wtvm" (located at line 11).
}
