objects = $(patsubst %.cpp,%.o,$(wildcard *.cpp))

ODIR = ../obj

all: $(ODIR)/testProg

clean: 
	rm -rf $(ODIR)

OBJ = $(patsubst %,$(ODIR)/%,$(objects))

$(ODIR):
	mkdir -p $(ODIR)

$(ODIR)/%.o: %.cpp $(ODIR)
	$(CXX) -c -o $@ $<

$(ODIR)/testProg: $(OBJ)
	$(CXX) -o $@ $<

.PHONY: all clean
