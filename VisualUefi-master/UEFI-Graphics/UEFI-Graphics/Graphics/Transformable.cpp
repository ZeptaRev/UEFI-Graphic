#include "Transformable.hpp"

UINTN Transformable::GetSizeX() const{
	return size_x_;
}

UINTN Transformable::GetSizeY() const{
	return size_y_;
}

INTN Transformable::GetPosX() const{
	return pos_x_;
}

INTN Transformable::GetPosY() const{
	return pos_y_;
}

VOID Transformable::SetPosX(INTN x){
	pos_x_ = x;
}

VOID Transformable::SetPosY(INTN y){
	pos_y_ = y;
}

VOID Transformable::SetSizeX(UINTN x){
	size_x_ = x;
}

VOID Transformable::SetSizeY(UINTN y){
	size_y_ = y;
}

VOID Transformable::Move(INTN x, INTN y){
	pos_x_ += x;
	pos_y_ += y;
}

