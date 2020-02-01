#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

static void gdt() // Creates the function used for the Global Descriptor Table
{
	uint32_t *gdtloc;
	asm("lgdt %0")
}

int main()
{
	const char* welc_text = "Welcome";
	volatile char *vidmem = (volatile char*)0xB8000; // Creates a pointer to the start of VGA video memory named "vidmem".
	*vidmem = welc_text; // Writes the string in the variable welc_text (in this case "Welcome" to video memory.
	
	gdt(); // Executes the function "gdt" (located at line 15).
}
