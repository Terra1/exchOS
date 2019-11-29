/*
 FVA (Function/Variable/Array) Name List:
 write_vidmem: Write to Video Memory
 wel_text: Welcome Text
 pos: Counter
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

char welc_text[8] = { 'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0' }; // Array containing the word "welcome" in individual characters, terminated by null.
static void write_vidmem() // Creates the "Write to Video Memory" function.
{
	volatile char *vidmem = (volatile char*)0xB8000; // Creates a pointer to the start of VGA video memory named "vidmem".
	int pos = 0;
	while ( wltx[pos] != '\0' )
	{
		*vidmem = welc_text[pos]; // Writes "Welcome" to video memory.
		vidmem += 4;
		pos++;
	}
}

static void gdt() // Creates the function used for the Global Descriptor Table
{
	asm()
}

int start_main()
{
	write_vidmem(); // Executes the function "write_vidmem" (located at line 13).
	gdt(); // Executes the function "gdt" (located at line 25).
}
