#include "Ice.hpp"

Ice::Ice(std::string const type){
	
}

Ice::Ice(const Ice &copy){
	this->type_ = copy.getType();
}

Ice &Ice::operator=(const Ice &copy){
	if (this == &copy)
		return *this;
	this->type_ = copy.getType();
}

Ice::~Ice(){

}

Ice &Ice::clone(){
	//To new or not to new?
}