# Compile with Icon

1- make rc file with icon

2- `windres *.rc -O coff -o *.res`

3- `gcc -o TimedShutterDowner Shutdown-T.c my.res`
