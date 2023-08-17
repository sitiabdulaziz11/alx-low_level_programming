#include "main.h"
/**
 * main - emtry point.
 * @argc: coumter.
 * @argv: vector.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int fd;
	Elf64_Ehdr elf;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", filename);
		exit(98);
	}
	if (read(fd, &elf, sizeof(elf)) != sizeof(elf))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", filename);
		close(fd);
		exit(98);
	}
	if (elf.e_ident[EI_MAG0] != ELFMAG0 || elf.e_ident[EI_MAG1] != ELFMAG1 ||
			elf.e_ident[EI_MAG2] != ELFMAG2 || elf.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not a valid ELF file\n", filename);
		close(fd);
		exit(98);
	}
	printf("Magic: %02x %02x %02x %02x\n",
			elf.e_ident[EI_MAG0], elf.e_ident[EI_MAG1],
			elf.e_ident[EI_MAG2], elf.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf.e_ident[EI_DATA]);
	printf("Version: %d\n", elf.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)elf.e_entry);
	close(fd);
	return (0);
}
