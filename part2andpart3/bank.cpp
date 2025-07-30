#include <iostream>
#include <string>
#include "Vector.h"

struct Cliente {
	int id;
	std::string tipo;
};

int main() {
	Vector ids;
	Vector elderly_ids;
	
	Cliente clientes[100];
	int count = 0;
	
	int id;
	std::string tipo;
	
	while (std::cin >> id >> tipo) {
		clientes[count++] = {id, tipo};
	}
	
	for (int i = 0; i < count; ++i) {
		if (clientes[i].tipo == "elderly") {
			elderly_ids.push_back(clientes[i].id);
		} else {
			int inserted = 0;
			while (!elderly_ids.empty() && inserted < 2) {
				ids.push_back(elderly_ids.pop_front());
				inserted++;
			}
			ids.push_back(clientes[i].id);
		}
	}
	
	while (!elderly_ids.empty()) {
		ids.push_back(elderly_ids.pop_front());
	}
	
	ids.print();
	
	return 0;
}
