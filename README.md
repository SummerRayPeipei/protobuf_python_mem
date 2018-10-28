# protobuf_python_mem
Reclaim protobuf-python memory \<br>
#protobuf库具有缓存机制，导致python版本的protobuf的内存不回收，该模块解决内存回收\<br>
#该模块需要运行在Linux环境下\<br>
#执行步骤：\<br>
  python setuo.py install\<br>
##example:\<br>
  import protobuf_mem; protobuf_mem.clear()\<br>


