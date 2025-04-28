/* linker.ld */
ENTRY(main)

SECTIONS
{
    . = 0x10000; /* 任意一個 RAM 起始位置 */

    .text : {
        *(.text*)
    }

    .data : {
        *(.data*)
    }

    .bss : {
        *(.bss*)
    }
}
