import os
def rename_files():
    #(1) get file names from a folder
    file_list = os.listdir(r"C:\Users\Administrator\Desktop\study\udacity\python\第二个\prank")
    #print(file_list)
    saved_path = os.getcwd()
    print("Current Working Directory is "+saved_path)
    os.chdir(r"C:\Users\Administrator\Desktop\study\udacity\python\第二个\prank")
    #(2) for each file, rename filename
    for file_name in file_list:
        os.rename(file_name, file_name.translate(None, "0123456789"))
    os.chdir(saved_path)
        
rename_files()
