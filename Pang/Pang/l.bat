@echo off
sdcc -mz80 --code-loc 0x8048 --data-loc 0x7000 --no-std-crt0 ../crtcv.rel ../comp.lib ../cvlib.lib ../getput.lib charset.rel fond1.rel fond2.rel fond4.rel fond5.rel levels.rel main.rel title.rel winpose1.rel
objcopy --input-target=ihex --output-target=binary crtcv.ihx result.rom
del *.ihx
del crtcv.lnk
pause
