ENTRY(_start)


SECTIONS {
	. = 0;

	.text : {
		*(.crto0)
		*(.text)
	}=0

	.rodata : {
		*(.rodata)
	}=0

	.data : {
		*(.data)
		*(.bss)
		*(COMMON)
		*(.scommon)
	}=0

	/DISCARD/ : {
		*(.comment)
		*(.eh_frame)
		*(.MIPS.*)
		*(.reginfo)
		*(.gnu.*)
	}
}
