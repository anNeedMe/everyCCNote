# 项目名称
project(lhl)
CMAKE_MINIMUM_REQUIRED(VERSION 3.24)

INCLUDE_DIRECTORIES(./ ./src)
ADD_SUBDIRECTORY(src)

# 将当前目录中的源文件名称赋值给变量 DIR_SRCS
#aux_source_directory(<dir> <variable>)该命令会把参数 <dir>中所有的源文件名称赋值给参数<variable>
AUX_SOURCE_DIRECTORY(. DIR_SRCS)

# 指示变量 DIR_SRCS 中的源文件需要编译 成一个名称为 main 的可执行文件。
ADD_EXECUTABLE(main ${DIR_SRCS})


#链接子文件夹的 CMakeLists
TARGET_LINK_LIBRARIES(main sub)