void kernel_main() {
    char *video_memory = (char *) 0xB8000; // VGA text mode memory
    video_memory[0] = 'H';
    video_memory[1] = 0x07;  // Color attribute

    video_memory[2] = 'i';
    video_memory[3] = 0x07;

    while (1) { }  // Halt the kernel
}
