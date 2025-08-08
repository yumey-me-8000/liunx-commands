CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-variable

SRCS_CPP = liunx.c++ 110.c++ count.c++ db.c++ sbs.c++ you.c++
SRCS_C = End.c THE.c
TARGETS = $(SRCS_CPP:.c++=) $(SRCS_C:.c=)

PREFIX = /usr/local
BIN_DIR = $(PREFIX)/bin

all: $(TARGETS)

liunx: liunx.c++
	$(CXX) $(CXXFLAGS) $< -o $@

110: 110.c++
	$(CXX) $(CXXFLAGS) $< -o $@

count: count.c++
	$(CXX) $(CXXFLAGS) $< -o $@

db: db.c++
	$(CXX) $(CXXFLAGS) $< -o $@

sbs: sbs.c++
	$(CXX) $(CXXFLAGS) $< -o $@

you: you.c++
	$(CXX) $(CXXFLAGS) $< -o $@

End: End.c
	$(CXX) $(CXXFLAGS) $< -o $@

THE: THE.c
	$(CXX) $(CXXFLAGS) $< -o $@

install: $(TARGETS)
	@echo "Installing commands to $(BIN_DIR)..."
	@mkdir -p $(BIN_DIR)
	@install $(TARGETS) $(BIN_DIR)
	@echo "Installation complete. You can now run the commands from anywhere."

uninstall:
	@echo "Uninstalling commands from $(BIN_DIR)..."
	@rm -f $(addprefix $(BIN_DIR)/, $(TARGETS))
	@echo "Uninstallation complete."

.PHONY: all install uninstall clean

clean:
	rm -f $(TARGETS) *.o
