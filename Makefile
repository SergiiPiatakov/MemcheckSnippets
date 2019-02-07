CXX		= g++

.PHONY all: 001 002 003 004 \
			005

001:
	$(CXX) 001_main.cpp -o 001_main

002:
	$(CXX) 002_main.cpp -ggdb -std=c++11 -o 002_main

003:
	$(CXX) 003_main.cpp -ggdb -std=c++11 -o 003_main

004:
	$(CXX) 004_main.cpp -ggdb -o 004_main

005:
	$(CXX) 005_main.cpp -ggdb -o 005_main

.PHONY clean:
	$(RM) 001_main
	$(RM) 002_main
	$(RM) 003_main
	$(RM) 004_main
	$(RM) 005_main
