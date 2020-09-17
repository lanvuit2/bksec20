from qiling import *

def test_dbg(file_test, folder_lib):
    ql = Qiling(file_test, folder_lib, output = "off")

    #enable debugger IDA 
    ql.debugger = "idapro:0.0.0.0:9999"

    ql.run()

if __name__ == "__main__":
    test_dbg(["./mips32_linux/bin/algorithm"], "./arm_linux")

# error