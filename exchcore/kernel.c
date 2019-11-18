/* FVA (Function/Variable/Array) Name List:
wtvm: Write to Video Memory
wltx: Welcome Text
pos: Counter
*/
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
char wltx[8] = { 'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0' }; //Array containing the word "welcome" in individual characters, terminated by null.
void wtvm() //Creates the "Write to Video Memory" function.
{
	char *wtvm = (char*)0xB8000; //Creates a pointer to the start of VGA video memory named "wtvm".
	int pos = 0;
	while ( wltx[pos] != '\0' )
	{
		*wtvm = wltx[pos]; //Writes "Welcome" to video memory.
		wtvm += 4;
		pos++;
	}
}

kernel_main()
{
	wtvm(); //Executes the function "wtvm" (located at line 11).
}
