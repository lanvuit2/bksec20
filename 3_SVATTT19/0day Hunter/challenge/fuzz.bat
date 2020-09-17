"..\tools\winafl\afl-fuzz.exe"^
 -i seeds^
 -f input.txt^
 -M Master0^
 -o out^
 -D ..\tools\dynamorio\bin64^
 -t 10000+^
 -- -target_module fileinfo.exe^
 -coverage_module fileinfo.exe^
 -target_method fileinfo^
 -fuzz_iterations 100^
 -nargs 1^
 -- fileinfo.exe input.txt
 
cmd.exe