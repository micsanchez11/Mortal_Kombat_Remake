#include "character.h"

Character::Character()
{
	punchDamage = 5;
	counter = 0;
	counterStance = 0;
	counterBlocking = 0;
	counterPunching = 0;

	isMoving = false;
	health = 100;
	isAlive = true;
	//Need to see the difference between the different values
	movementSpeed = 0.5;
	counterWalking = 0;

	ableToMoveUp = true;
	ableToMoveDown = true;
	ableToMoveLeft = true;
	ableToMoveRight = true;

	upKeyPressed = false;
	downKeyPressed = false;
	leftKeyPressed = false;
	rightKeyPressed = false;
	blocking = false;
	punching = false;
	isHit = false;
	isDefeated = false;
	isAttacking = false;

	counterWalkingBackwards = 0;


	hitBox.setSize(sf::Vector2f(0, 0));
	hitBox.setPosition(rect.getPosition());
	attackBox.setSize(sf::Vector2f(0, 0));
	attackBox.setPosition(rect.getPosition());

	counterHit = 0;
	isFinishedReacting = true;
}
// Need to also include the rectangle invisible box for our Sprite
/* sf::RectangleShape rect;

ALL THE RECT STUFF FOR OUR SPRITES


*/

void Character::update()
{
	sprite.setPosition(rect.getPosition());

	// what are these functions
}

void Character::takeDamage(float damageTaken) {
	if (health > damageTaken)
		health -= damageTaken;
	else
		isDefeated = true;
}