from distutils.core import setup,Extension

MOD = 'protobuf_mem' #模块名
include_path=['/usr/local/include/python3.7m/']
setup(name=MOD,
	version='1.0',
	description='Clear Protobuf-Python Mem',
	author='Summer',
	author_email='815315825@qq.com',
	ext_modules=[
		Extension(MOD,
		sources=['protobuf_mem.cpp'],
		include_dirs=include_path)
		]
	)
