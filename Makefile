CC = clang
LD = ld.lld
QEMU = qemu-system-i386

TARGET = i386-pc-none-elf

CFLAGS :=
LDFLAGS :=

CFLAGS += -Iinclude -target $(TARGET)
# LDFLAGS += --nostdlib

KERNEL_SRC = $(wildcard kernel/*.c) $(wildcard kernel/*/*.c)
BOOT_SRC = $(wildcard boot/*.s)

OBJ :=
OBJ += $(addprefix obj/, $(notdir $(KERNEL_SRC:.c=.o)))
OBJ += $(addprefix obj/, $(notdir $(BOOT_SRC:.s=.o)))

KERNEL = bin/kernel.bin

LINKER_SCRIPT = boot/linker.ld

DOXYFILE = Doxyfile

all: $(KERNEL)

qemu: $(KERNEL)
	$(QEMU) -kernel $<

docs: $(KERNEL)
	mkdir -p docs
	doxygen $(DOXYFILE)

$(KERNEL): $(OBJ) | bin
	$(LD) $^ -o $@ $(LDFLAGS) -t $(LINKER_SCRIPT)

obj/%.o: kernel/%.c | obj
	$(CC) -c $< -o $@ $(CFLAGS)

obj/%.o: kernel/*/%.c | obj
	$(CC) -c $< -o $@ $(CFLAGS)

obj/%.o: boot/%.s | obj
	$(CC) -c $< -o $@ $(CFLAGS)

obj:
	mkdir -p obj

bin:
	mkdir -p bin

clean:
	rm -rf $(KERNEL) $(OBJ)
