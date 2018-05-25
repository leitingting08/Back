import os
def rename_files():
    #(1) 这个的路径是你想要重命名的文件夹路径
    file_list = os.listdir(r"C:\Users\Administrator\Desktop\s\udacity\python\第二个\prank")
    #print(file_list)
    # saved_path = os.getcwd()
    # print("Current Working Directory is "+saved_path)
    os.chdir(r"C:\Users\Administrator\Desktop\s\udacity\python\第二个\prank")
    #(2) 遍历文件列表下的所有文件并重命名他们，去掉里面的数字
    for file_name in file_list:
        # print("Old Name - "+file_name)
        # print("New Name - "+file_name.translate(None, "0123456789"))
        os.rename(file_name, file_name.translate(None, "0123456789"))
    os.chdir(saved_path)
        
rename_files()

