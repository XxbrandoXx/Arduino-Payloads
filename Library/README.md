To get AZERTY layout follow the following steps :

Replace Keyboard.cpp file which is located @C:\Program Files (x86)\Arduino\libraries\Keyboard\src
It is used for Pro/Micro USB

Replace DigiKeyboard and scancode-ascii-table.h @C:\Users\XxbrandoXx\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard
These files are used for DigiSpark Tiny USB.

I made a backup from the original file, so if you want to get back a QWERTY layout, you just have to revert the steps.

Please note that the AZERTY layout isn't really finished as there can be missing keys but most of them are working.
I took it from :
- https://github.com/digistump/DigistumpArduino/issues/46 for DigiKeyboard only supports "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789 ,.- !"X$%&/()=? *';:_ {[]}\~ <>@"
I downloaded the first shared files, there is an update @6 august from `DerSibi` but I didn't tried it. Feel free to try and tell me if it's better or no
- http://www.zem.fr/utiliser-mouse-keyboard-azerty-arduino-pro-micro-teensy/ for Keyboard library only supports "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789 !\”$%&'()%,;:!?./+="

Thanks to these author.
