import cv2 as cv2 
import numpy as np
import os as os


# read images from a folder
#for i in range(


# test image path
#img_folder_path = r"C:\Users\wujiaqi\Desktop\PhotoAlbums\[Pure_Media]vol.73_Hizzy"


# get the images folder path
img_folder_path = input("please input the directory path: ")
final_folder_path = "C:\\Users\\wujiaqi\\Desktop\\backgrounds\\PhotoAlbums" + "\\" + img_folder_path.split("\\")[-1]


# create the folder which is not existed
os.mkdir(final_folder_path)


# invert the color of the all the images
image_names = os.listdir(img_folder_path)
for image_name in image_names:
    if image_name[-3:] == "jpg" or image_name[-3:] == "png":
        image = cv2.imread(img_folder_path + "\\" + image_name)
        inv_image = 255 - image
        if image.shape[0] > image.shape[1]:
            final_image = np.concatenate((image, inv_image), axis=1)
        else:
            final_image = np.concatenate((image, inv_image), axis=0)

        cv2.imwrite(final_folder_path + "\\" + image_name, final_image)
        print(final_folder_path + "\\" + image_name)



# read the image
#test_img = cv2.imread(test_img_path)
#cv2.imshow("Test if non image file can be read or not.", test_img)
#cv2.waitKey(0)
