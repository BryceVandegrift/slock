# My build of slock

My build of suckless slock with a few patches and custom configurations.

## Patches

- Caps lock indicator
- Color message
- DPMS support
- Quick cancel

## Install

```
cd slock
sudo make clean install
```

## Locking program

In order to run slock you need a system locker like xautolock.
You can use it by running this command on startup:

```
xautolock -time 10 -locker slock
```
