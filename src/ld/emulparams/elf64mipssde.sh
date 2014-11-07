. ${srcdir}/emulparams/elf32mipssden32.sh

ELFSIZE=64

OUTPUT_FORMAT="elf64-tradbigmips"
BIG_OUTPUT_FORMAT="elf64-tradbigmips"
LITTLE_OUTPUT_FORMAT="elf64-tradlittlemips"

# Cacheable xkphys segment, physical address 0x20000
TEXT_START_ADDR='/*TEXT_ADDR*/ 0x9800000000020000'
NONPAGED_TEXT_START_ADDR='/*TEXT_ADDR*/ 0x9800000000020000'
SHLIB_TEXT_START_ADDR='0x9800000000000000'
