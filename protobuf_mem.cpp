#include <malloc.h>
#include <Python.h>
int clear(){
	return malloc_trim(0);
}

static PyObject *protobuf_mem_clear(PyObject *self,PyObject *args){
    return (PyObject*)Py_BuildValue("i",clear());//将结果转换为Python类型并返回
}

static PyMethodDef protobuf_memMethods[] = {
    {"clear",protobuf_mem_clear,METH_NOARGS},//函数名，包装函数名，解析
    {NULL,NULL},//作为结束
};

static struct PyModuleDef protobuf_memModule = {
    PyModuleDef_HEAD_INIT,//默认
    "protobuf_mem",//模块名
    NULL,
    -1,
    protobuf_memMethods //上面的数组
};

PyMODINIT_FUNC PyInit_protobuf_mem(){
    return PyModule_Create(&protobuf_memModule);
}
