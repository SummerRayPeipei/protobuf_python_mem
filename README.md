# protobuf_python_mem
Reclaim protobuf-python memory
由于protobuf库具有缓存机制，导致python版本的protobuf的内存不回收
该模块就是解决内存回收的
#该模块需要运行在Linux环境下
执行步骤：
  python setuo.py install
#安装完成后，导入使用
  import protobuf_mem
  protobuf_mem.clear()

