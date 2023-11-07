#include "Cure.hpp"

Cure::Cure(std::string const type){
	
}

Cure::Cure(const Cure &copy){
	this->type_ = copy.getType();
}

Cure &Cure::operator=(const Cure &copy){
	if (this == &copy)
		return *this;
	this->type_ = copy.getType();
}

Cure::~Cure(){

}

Cure &Cure::clone(){
	//To new or not to new?
}