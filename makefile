advection.txt:datos.txt
	python NC_graph.py
datos.txt:
	c++ NC_advection.cpp
	./a.out>datos.txt
