# Utility
In this code I have tried to put some of the important methods
that are simple, but are used very frequently like 

a.) convert set of images to video's.

b.) convert video's to images. and others

So, I am putting it together. I will integrate many other utility methods in coming days.
To perform the above mentioned task ffmpeg methods are well known, but I tend to forget 
its commands. So, I keep separate code to perform this. You may find it useful. 

Dependencies: 

OpenCV/C++; Linux (Ubuntu 13.04 + 14.04)

Compile:

$ cd (to the directory)

$ mkdir build

$ cd build

$ cmake ..

$ make

navigate to build/apps to check binary file.

1. TO CONVERT IMAGES TO VIDEO USE
   
   Example: 

   $ ./util images2video /home/suryansh/images *.jpg
   
   $ (name_of_binary)  images2video (path_of_folder_containing_images) (image_format)        

2. TO CONVERT VIDEO TO IMAGES USE
 
   $ ./util video2images /home/suryansh/video data.avi ".jpg"

   $ (name_of_binary)  video2images (path_of_folder_containing_images) (name_of_the_video) (image_format)
   
