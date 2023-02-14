import  vlc
import time

p = vlc.MediaPlayer('../../first.mp3')
p.play()
time.sleep(60)
p.stop()