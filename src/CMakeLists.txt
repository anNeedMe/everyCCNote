# 当前目录源文件名称 赋值给 .
aux_source_directory(. ALL_SOURCE)

# 子文件 添加库到 sub
add_library(sub ${ALL_SOURCE})
