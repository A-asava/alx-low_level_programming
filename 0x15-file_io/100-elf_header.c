#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validateElfFile(unsigned char *e_ident);
void printMagicNumbers(unsigned char *e_ident);
void printElfClass(unsigned char *e_ident);
void printElfData(unsigned char *e_ident);
void printElfVersion(unsigned char *e_ident);
void printElfABI(unsigned char *e_ident);
void printElfOSABI(unsigned char *e_ident);
void printElfType(unsigned int e_type, unsigned char *e_ident);
void printElfEntryPoint(unsigned long int e_entry, unsigned char *e_ident);
void closeElfFile(int fileDescriptor);

/**
 * validateElfFile - The func checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void validateElfFile(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
{
	if (e_ident[index] != 127 &&
	e_ident[index] != 'E' &&
	e_ident[index] != 'L' &&
	e_ident[index] != 'F')
{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
}
}
}

/**
 * printMagicNumbers - The function prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated through spacing.
 */
void printMagicNumbers(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
{
	printf("%02x", e_ident[index]);

	if (index == EI_NIDENT - 1)
	printf("\n");
	else
	printf(" ");
}
}

/**
 * printElfClass - The func prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void printElfClass(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
{
	case ELFCLASSNONE:
	printf("none\n");
	break;
	case ELFCLASS32:
	printf("ELF32\n");
	break;
	case ELFCLASS64:
	printf("ELF64\n");
	break;
	default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * printElfData - The func prints data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void printElfData(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
{
	case ELFDATANONE:
	printf("none\n");
	break;
	case ELFDATA2LSB:
	printf("2's complement, little endian\n");
	break;
	case ELFDATA2MSB:
	printf("2's complement, big endian\n");
	break;
	default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * printElfVersion - The function prints the version of an ELF header.
 * @e_ident: Pointer to an array containing the ELF version.
 */
void printElfVersion(unsigned char *e_ident)
{
	printf(" Version: %d",

	e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
    {
        case EV_NONE:
            printf(" None\n");
            break;
        case EV_CURRENT:
            printf(" Current\n");
            break;
        default:
            printf("\n");
            break;
    }
}
