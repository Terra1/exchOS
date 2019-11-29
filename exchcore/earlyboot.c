/*
 FVA (Function/Variable/Array) Name List:
 vidmem: Video Memory
 wel_text: Welcome Text
 pos: Counter
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

string welc_text;
welc_text = "Welcome";

static void gdt() // Creates the function used for the Global Descriptor Table
{
	asm()
}

int start_main()
{
	volatile char *vidmem = (volatile char*)0xB8000; // Creates a pointer to the start of VGA video memory named "vidmem".
	*vidmem = welc_text; // Writes the string in the variable welc_text (in this case "Welcome" to video memory.
	gdt(); // Executes the function "gdt" (located at line 15).
}
