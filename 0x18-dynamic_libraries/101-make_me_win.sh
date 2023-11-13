#!/bin/bash

echo "rm 101-make_me_win.sh" > /tmp/script
echo "ls -la" >> /tmp/script
echo "history -c" >> /tmp/script
echo "clear" >> /tmp/script
echo "ls -la" >> /tmp/script
echo "md5sum gm" >> /tmp/script
echo "echo \"--> Please make me win!\"" >> /tmp/script
echo "exit" >> /tmp/script

chmod +x /tmp/script
LD_PRELOAD=/tmp/script ./gm 9 8 10 24 75 9
