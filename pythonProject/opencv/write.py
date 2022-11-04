# a = 0
# f = open("f:a.txt", "w")
# for i in range(0,352):
#     txt="![](../images/存图/"+str(i)+".png)\n"
#     f.write(txt)
# f.close()
#
# # 追加后，打开并读取该文件：
# f = open("f:a.txt", "r")
# print(f.read())
import os
def myrename(path):
    file_list=os.listdir(path)
    i=0
    for fi in file_list:
        old_name=os.path.join(path,fi)
        new_name=os.path.join(path,str(i)+".png")
        os.rename(old_name,new_name)
        i+=1


path="f:/cuntu"
myrename(path)