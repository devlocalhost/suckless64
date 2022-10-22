# suckless64 - my configured suckless apps

# which ones?
- dmenu
- dwm
- slstatus
- st
- surf

# patches
every (except slstatus) suckless app has patches. theyre located in APP/patches dir (note: all suckless apps are patched **ALREADY!!** no need to patch!!)

- dmenu
  - dmenu-border
  - dmenu-center
  - dmenu-highlight
  - dmenu-gruvbox is __**NOT**__ applied
  
- dwm
  - dwm-hide_vacant_tags
  
- slstatus
  - none
  
- st
  - st-alpha
  - st-gruvbox-dark is __**NOT**__ applied
  - st-scrollback-mouse
  - st-anysize
  - st-scrollback
  
- surf
  - surf-homepage
  - surf-history
  
# preview
![dwm desktop, with st, and slstatus visible](pre/dwm_st_slstatus_preview.png)
![dmenu preview](pre/dmenu_preview.png)

# dependecies
note: you might not need some of these. if you dont, youll need to remove them from the config files

1. flameshot (for taking screenshots)
2. pactl (for controlling volume)
3. kgx (alternatime terminal app, might not be needed)
4. picom (transparency)
5. feh (setting wallpaper)
6. xinput (changing my mouses sensitivity, might not be needed)
7. fish shell (needed for st)

# info - whats customized/different from stock app
- dmenu
  - you paste using ctrl + v, instead of shift ctrl + y
  - number of lines is 17, border_width is 4
  - SchemeSelHighlight and SchemeNormHighlight color is #7289da

- dwm
  - you take a screenshot using the prt sc key (print screen)
  - modkey is the windows logo key
  - you kill apps using modkey + q instead of c
  - default cyan color replaced with #7289da (discords old color - blurple)
  - only 5 tags instead of 9
  - font replaced with JetBrainsMono-Regular, size 10
  - terminal launches with modkey + return (enter key) instead of modkey and shift + return, modkey and shift + return lauches gnome console (aka kgx)
  
- slstatus
  - nothing
  
- st
  - to scroll 2 lines you use shift + mouse scroll, 4 lines ctrl + mscroll, ctrl + pg up/down 1 page or 8 lines (i dont remember)
  - shell is set to fish
  - font set to JetBrainsMono-Regular with pixelsize 14
  - tabspaces set to 4
  - alpha set to 0.7
  - cursor shape is set to bar (|)
  
- surf
  - homepage set to google.com
  
font, xinitrc and wallpaper included
  
# note
all suckless apps are compiled, but on a 32bit laptop! you will have to recompile if you have a 64bit computer