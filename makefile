# makefile for sd19p6
#
#
sd19p6: sd19p6.c++
	g++ -Wall -g sd19p6.c++ -o ./Build/DEBUG/sd19p6

.PHONY: clean
clean:
	rm ./Build/DEBUG/sd19p6


